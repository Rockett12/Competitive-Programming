#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;

typedef pair<int, int> ii;
typedef long long int ll;
typedef vector<int> vi;

int main()
{_
    int n , b;
    string a;
    bool f, g, c, d;
    while(getline(cin, a))
    {
        f = g= c=d =0;

        for(int i =0; a[i]!='\0'; ++i)
        {
            if(a[i]<='Z' && a[i]>='A')
                g=1;
            else if(a[i]<='z' && a[i]>='a')
                f=1;
            else if(a[i]<='9' && a[i]>='0')
                c=1;
            else
                d=1;
        }

        if(d || (int)a.size()<6 || (int)a.size()>32)
            cout<<"Senha invalida.\n";
        else if(f && g && c) cout<<"Senha valida.\n";
        else cout<<"Senha invalida.\n";
    }


}

