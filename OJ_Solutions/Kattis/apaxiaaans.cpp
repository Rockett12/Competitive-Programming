#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAXN 1001
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{
    int n, m, k;
    char last = ' ';
    string s;
    cin>>s;
    for(int i = 0; s[i]; ++i){
        if(s[i]==last)
            continue;
        cout<<s[i];
        last  =s[i];
    }

    cout<<endl;
}
