#include <iostream>
#define _ ios::sync_with_stdio(0);
using namespace std;


int main()
{_

    int n, a, m, k, c1, c2, c3, tam;
    cin>>n>>m>>a>>k;
    string s;
    cin>>s;
    c1 = c2 = c3 = 0;
    tam = (int)s.size();
    for(int i=0; i<tam; ++i)
    {
        if(s[i]>='a')
            ++c1;
        else if(s[i]>='A')
            ++c2;
        else
            ++c3;
    }

    if(tam>=n && c1>=m && c2 >= a && c3>=k)
        cout<<"Ok =/\n";
    else
        cout<<"Ufa :)\n"<<(int)'a';
}



