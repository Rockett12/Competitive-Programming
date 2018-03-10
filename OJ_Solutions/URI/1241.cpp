#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int t, f;
    string a, b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        f = 1;
        if(b.size() > a.size())
            f = 0;

        for(int i = (int)b.size()-1, j = (int)a.size()-1; f && i>=0; --i, --j)
            if(b[i]!=a[j])
                f= 0;

        if(f)
            cout<<"encaixa\n";
        else
            cout<<"nao encaixa\n";
    }
}
