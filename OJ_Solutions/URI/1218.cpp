#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n, ans, f, m,a,j =0;
    char x;
    string s;
    stringstream ss;
    while (cin>>n) {
        if(j)
            cout<<'\n';
        f = 0, m = 0, ans = 0;
        getline(cin, s);
        getline(cin, s);
        ss.clear();
        ss<<s;
        while (ss>>a>>x) {
            if (a == n) {
               ++ans;
               if (x == 'F') ++f;
               else ++m;
            }
        }
        cout<<"Caso "<<++j<<":\n";
        cout<<"Pares Iguais: "<<ans<<'\n';
        cout<<"F: "<<f<<'\n';
        cout<<"M: "<<m<<'\n';
    }
}
