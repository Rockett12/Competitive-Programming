#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define MAXN 1123456
#define MAXM 205
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
typedef pair<int ,int> ii;
int n;

void printa(string a)
{
    int f=1, zeros=-1;
    for(int i =0; i<(int)a.size(); ++i)
    {
        if(a[i]!='A')
        {
            f=0;
            if(zeros==-1  && a[i]!='0')
                zeros=i;
        }
    }
    if(f)
        cout<<"YODA";
    else if(zeros==-1)
        cout<<0;
    else
        for(int i =zeros; i<(int)a.size(); ++i)
            if(a[i]!='A')
                cout<<a[i];

    cout<<endl;
}

int main()
{$
    string a, b;
    cin>>a>>b;

    for(int i = (int)a.size()-1, j = (int)b.size()-1; j>=0 && i>=0; --i, --j)
    {
        if(a[i]>b[j])
            b[j] = 'A';
        else if(a[i]<b[j])
            a[i] = 'A';
    }

    printa(a);
    printa(b);
}

