
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n;
    string s;
    char a, b;
    stringstream ss;
    while(getline(cin, s) && s!="*")
    {

        ss.clear();
        ss<<s;
        ss>>s;
        a = tolower(s[0]);
        n = 1;
        while(ss>>s)
        {
            b = tolower(s[0]);
            if(a!=b)
                n = 0;
        }

        if(n)
            cout<<"Y\n";
        else
            cout<<"N\n";

    }
}
