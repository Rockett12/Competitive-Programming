#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <set>
#define F first
#define S second
#define oo 999999999
#define pb push_back
#define $ ios::sync_with_stdio(0);
#define MAXN 1123456
#define MAXM 1123456
using namespace std;

typedef long long int ll;
typedef pair<double , string> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vii> graph;

int let[200], TC=0, visto[200];
int main()
{$
    string s,a,b;
    int n, j, sp, f;
    char cob[15]="cobol0000", x;
    cin>>n;
    getline(cin, s);
    set<string> ss;
    set<string>::iterator it;
    while(n--)
    {
        ss.clear();
        getline(cin,s);
        b="";
        for(int i =0; i<(int)s.size(); ++i)
        {
            if(s[i]==' ')
                ss.insert(b), b="";
            else
                b+=s[i];
        }
        ss.insert(b);

        for(it = ss.begin();it!=ss.end(); ++it )
        {
            if(it!=ss.begin())
                cout<<" ";
            cout<<*it;
        }
        cout<<endl;
    }

}
