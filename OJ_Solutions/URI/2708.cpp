#include <iostream>
#include <vector>
#include<algorithm>
#define _ ios::sync_with_stdio(0);
using namespace std;



int main()
{_
    int n,b, jipe=0, turis=0;
    string a;
    while((cin>>a)&&(a!="ABEND"))
    {
        cin>>b;
        if(a=="SALIDA")
            jipe++, turis+=b;
        else
            jipe--, turis-=b;

        if(jipe<0)
            jipe = 0;
        if(turis<0)
            turis = 0;
    }

    cout<<turis<<endl<<jipe<<endl;




}


