#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <set>
#include <sstream>
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define S second
#define MAXN 112345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> ii;
typedef long long int ll;

int main()
{
    int t, n , m,a,b,c,d;
    stringstream ss;
    string s;
    getline(cin ,s);
    ss<<s;
    bool f = 0;
    while(ss>>s)
    {
        if(f)
            cout<<' ';
        if((int)s.size()>4){
            if(s[0]==s[2] && s[1] == s[3])
            {
                for(int i = 2; s[i]; ++i)
                    cout<<s[i];
            }else cout<<s;
        }
        else cout<<s;
        f = 1;
    }

    cout<<endl;
}

