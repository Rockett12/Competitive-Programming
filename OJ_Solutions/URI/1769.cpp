#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cctype>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define oo 999999999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> graph;
int mat[1005][1005];
int main()
{$
    int n, m, a,b,c=0, f=0, x, tam, sum;
    string s;

    while(getline(cin ,s))
    {
        sum = x = 0;
        a = 1;
        for(int i = 0; i<(int)s.size()-2;++i)
            if(isalnum(s[i]))
            {
                sum+= ((int)s[i]-'0')*(a);
                x+= ((int)s[i]-'0')*(10-a);
                a++;
            }

        sum%=11;
        x%=11;

        if(sum==10)
            sum = 0;
        if(x==10)
            x = 0;

        if(x==(s[13]-'0') && sum==(s[12]-'0'))
            cout<<"CPF valido"<<endl;
        else
            cout<<"CPF invalido"<<endl;
    }
}

