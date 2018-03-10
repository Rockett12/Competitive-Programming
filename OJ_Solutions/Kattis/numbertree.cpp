#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m = 1;
    for(int i =0; i<(int)s.size(); ++i)
        if(s[i]=='L')
            m = (m<<1);
        else
            m = ((m<<1)|1);

    cout<< (1<<(n+1))-m<<endl;
}
