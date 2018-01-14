#include <iostream>
#include <algorithm>
#include <set>
#include <ctype.h>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef set<string>::iterator sit;
int main()
{_

    string linha;
    int i, j;
    set<string> dic;
    string a;
    while(getline(cin, linha))
    {
        if(linha[0]=='*' && linha[1]=='*')
            break;
        j = (int)linha.size();
        a = "";
        for(i = 0; i<j; ++i)
        {
            if(linha[i]<'A' || linha[i]>'Z' && linha[i]<'a' || linha[i]>'z')
            {
                transform(a.begin(), a.end(), a.begin(), ::tolower);
                if((int)a.size()!=0)
                    dic.insert(a);
                a ="";
            }
            else
            {
                a+=linha[i];
                if(i==j-1)
                {
                    transform(a.begin(), a.end(), a.begin(), ::tolower);
                    if((int)a.size()!=0)
                        dic.insert(a);
                    a ="";
                }
            }

        }
    }
    sit it = dic.begin();

    for(; it!=dic.end(); it++)
    {
        cout<<*it<<endl;
    }
}
