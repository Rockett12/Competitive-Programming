#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    string n;
    cin>>a>>b;
    cin>>n;

    while(b--)
    {
        for(int i = 0; i<(int)n.size() - 1; ++i){
            if(n[i]=='B' && n[i+1]=='G')
                n[i]= 'G', n[i+1] = 'B', i++;

        }

    }

    cout<<n<<endl;



}

