#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string,int> m;
    m["papel"] = 0;
    m["pedra"] = 1;
    m["tesoura"] = 2;
    string d,l,p;
    int a , b, c;

    while(cin>>d>>l>>p)
    {
        a=m[d], b=m[l], c=m[p];

        if(b==c && (a+1)%3==b)
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if(b==a && (c+1)%3==b)
            cout<<"Urano perdeu algo muito precioso...\n";
        else if(a==c && (b+1)%3==a)
            cout<<"Iron Maiden's gonna get you, no matter how far!\n";
        else
            cout<<"Putz vei, o Leo ta demorando muito pra jogar...\n";
    }

}

