#include <iostream>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;
int TC = 0, isin[300];
map<int, char> tree;
char b;
string a, out;
void insere(char x);
void interface(int op);
void pos(int p);
void inf(int p);
void pre(int p);

int main() {
    ios::sync_with_stdio(0);
    while (cin>>a) {
        if(a == "I") {
            cin >> b;
            insere(b);
            isin[b] = 1;
        } else if (a == "P") {
            cin >> b;
            if(isin[b]) cout<<b<<" existe\n";
            else cout<<b<<" nao existe\n";
        } else if (a == "PREFIXA") {
            interface(1);
        } else if (a == "INFIXA") {
            interface(2);
        } else {
            interface(3);
        }
    }
}
void interface(int op) {
    out = "";
    if (op == 1) pre(1);
    else if (op == 2) inf(1);
    else pos(1);
    if (out != "") {
        cout << out[0];
        for (int i = 1; i< (int)out.size(); ++i) {
            cout << ' '<< out[i];
        }
    }
    cout << '\n';
}
void insere(char x) {
    int p = 1;
    while(tree.count(p)) {
        if(tree[p]>x)
            p = p<<1;
        else
            p = p<<1|1;
    }
    tree[p] = x;
}

void pos(int p) {
    int np = p<<1;
    if(tree.count(np)) pos(np);
    if(tree.count(np|1)) pos(np|1);
    out+=tree[p];
}

void inf(int p) {
    int np = p<<1;
    if(tree.count(np))
        inf(np);
    out+=tree[p];
    if(tree.count(np|1))
        inf(np|1);
}

void pre(int p) {
    int np = p<<1;
    out+=tree[p];
    if(tree.count(np))
        pre(np);
    if(tree.count(np|1))
        pre(np|1);
}

