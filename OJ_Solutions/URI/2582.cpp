#include <iostream>

using namespace std;

int main()
{
    string s[15];
    s[0] = "PROXYCITY";
    s[1] = "P.Y.N.G.";
    s[2] = "DNSUEY!";
    s[3] = "SERVERS";
    s[4] = "HOST!";
    s[5] = "CRIPTONIZE";
    s[6] = "OFFLINE DAY";
    s[7] = "SALT";
    s[8] = "ANSWER!";
    s[9] = "RAR?";
    s[10] = "WIFI ANTENNAS";

    int n,a, b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<s[a+b]<<endl;
    }
}

