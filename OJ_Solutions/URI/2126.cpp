#include <iostream>
#include <string>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int x, q, z=1, pos;
    string a, b;
    while(cin>>a)
    {
        cin>>b;
        x = q =0;
        while((x  =(int) b.find(a, x))!=b.npos){
            q++;
            pos = x;
            x++;
        }
        cout<<"Caso #"<<z++<<":\n";
        if(q)
        {
            cout<<"Qtd.Subsequencias: "<<q<<endl;
            cout<<"Pos: "<<pos+1<<endl;
        }
        else
        {
            cout<<"Nao existe subsequencia\n";
        }

        cout<<endl;
    }
}

