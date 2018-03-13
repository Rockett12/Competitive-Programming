#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
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

int main()
{$
    string s, b;
    int n, j, sp, f;
    char cob[15]="cobol0000";

    while(cin>>s)
    {
        n = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        j =0;
        b="";
        for(int i =0; i<n && j<5; ++i)
            if(s[i]=='-')
            {
                if(cob[j]==b[0] || cob[j]==b[(int)b.size()-1])
                    ++j;

                b = "";
            }
            else
                b+=s[i];


        if(cob[j]==b[0] || cob[j]==b[(int)b.size()-1])
            ++j;


        if(j>4)
            cout<<"GRACE HOPPER\n";
        else
            cout<<"BUG\n";

    }
}

