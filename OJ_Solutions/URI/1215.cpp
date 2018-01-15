#include <iostream>
#include <algorithm>
#include <set>
#include <cctype>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef set<string>::iterator sit;
int main()
{_

    string linha, a;
    int i;
    set<string> dic;

    while(getline(cin, linha))
    {
        a = "";
        for(i = 0; linha[i]!='\0'; ++i)
        {
            if(isalpha(linha[i]))
                a+=linha[i];
            else if(!a.empty())
            {
                transform(a.begin(), a.end(), a.begin(), ::tolower);
                dic.insert(a);
                a = "";
            }

        }
        if(!a.empty())
        {
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            dic.insert(a);
        }

    }
    sit it = dic.begin();

    for(; it!=dic.end(); it++)
        cout<<*it<<endl;

    return 0;
}
