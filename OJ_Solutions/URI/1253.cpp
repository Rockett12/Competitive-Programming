#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    string ss,s = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, m;
    cin>>n;
    while(n--)
    {
        cin>>ss>>m;
        for(int i = 0; i<(int)ss.size(); ++i)
            cout<<s[(ss[i]-'A'+26)-m];
        cout<<'\n';
    }
}

