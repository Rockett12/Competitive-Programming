#include <iostream>
#include <algorithm>
#include <map>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;


int main()
{_
	int n;
	char i;
	map<char, string> mp;
	mp['c'] = "Cruiser";
	mp['D'] = "Cruiser";
	mp['b'] = "BattleShip";
	mp['B'] = "BattleShip";
	mp['D'] = "Destroyer";
	mp['d'] = "Destroyer";
	mp['F'] = "Frigate";
	mp['f'] = "Frigate";

    cin>>n;

    while(n--)
    {
        cin>>i;
        cout<<mp[i]<<endl;
    }

}

