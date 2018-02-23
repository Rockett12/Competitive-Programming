#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <map>
#include <algorithm>
#include <set>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
int mat[100];



int main()
{
    long long int n,f=1, a, b,c,d;
    cin>>a>>b>>c>>d;
    set<int> s;


    for(long long int i = 1; i*i<=c; i++)
    {
        if(!(c%i))
        {
            if(i%b && d%i && !(i%a))
                s.insert(i);
            if((c/i)%b && d%(c/i) && !((c/i)%a))
                s.insert(c/i);
        }
    }
    if(!s.empty())
        cout<<*s.begin()<<endl;
    else
        cout<<-1<<endl;

}
