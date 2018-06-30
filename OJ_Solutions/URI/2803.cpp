#include <map>
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if(s== "para" || s == "tocantins" || s == "rondonia" || s == "amazonas" || s == "acre" || s == "roraima" || s == "amapa")
        cout<<"Regiao Norte\n";
    else
        cout<<"Outra regiao\n";
}

