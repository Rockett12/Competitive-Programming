#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    map<string, int> mp;
    int t, i=0;
    string a, b;

    mp["tesoura"] = 1;
    mp["papel"] = 2;
    mp["pedra"] = 3;
    mp["lagarto"] = 4;
    mp["Spock"] = 0;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        cout<<"Caso #"<< ++i;
        if(mp[b]==(mp[a]+1)%5 || mp[b]==(mp[a]+3)%5)
            cout<<": Bazinga!\n";
        else if(mp[a]==(mp[b]+1)%5 || mp[a]==(mp[b]+3)%5)
            cout<<": Raj trapaceou!\n";
        else
            cout<<": De novo!\n";
    }

}

