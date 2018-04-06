#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        getline(cin, s);

        for(int i = 0; i<n; ++i)
        {
            getline(cin, s);
            cout<<"I am Toorg!"<<endl;
        }
    }
}

