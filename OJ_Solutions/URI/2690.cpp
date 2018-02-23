#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
int mat[100];

void init()
{
    mat[0]=6;
    mat[1]=8;
    mat[2]=7;
    mat[3]=5;
    mat[4]=2;
    mat[5]=3;
    mat[6]=0;
    mat[7]=9;
    mat[8]=1;
    mat[9]=4;
}

int main()
{
    int n,f=1, a, b,m, j;
    int x;
    string s;
    //scanf("%d%*c", &n);
    cin>>n;
  	getline(cin,s);
  	init();
    while(n--)
    {
        getline(cin, s);
        j = 0;
        for(int i =0; j<12 && i<(int)s.size(); ++i)
        {
            if(s[i]>='a' && s[i]<='z')
                x = (int)(s[i]-'a')%10, cout<<x, j++;
            else if (s[i]>='A' && s[i]<='Z')
                x = (int)(s[i]-'A')%10, cout<<mat[x], j++;
        }
        if(j)
            cout<<endl;
    }
}


