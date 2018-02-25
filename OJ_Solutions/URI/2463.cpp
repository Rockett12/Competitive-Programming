#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);

using namespace std;
int main()
{$
    int soma=0, n, c, res=0;

    cin>>n;
    while(n--)
    {
        cin>>c;
        soma+=c;
        soma = max(0, soma);

        res = max(soma, res);
    }

    cout<<res<<endl;
}

