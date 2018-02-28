#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    if((int)s.size()>140)
        cout<<"MUTE\n";
    else
        cout<<"TWEET\n";
}

