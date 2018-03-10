#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    map<string, int> mp;
    mp["tesoura"]=0;
    mp["papel"]=1;
    mp["pedra"]=2;
    mp["lagarto"]=3;
    mp["spock"]=4;

    int n;
    cin>>n;
    string s, a;
    while(n--)
    {
        cin>>s>>a;
        if(mp[s]==mp[a])
            cout<<"empate\n";
        else if(mp[s]==(mp[a]+1)%5 || mp[s] == (mp[a]+3)%5)
            cout<<"sheldon\n";
        else
            cout<<"rajesh\n";
    }
}
