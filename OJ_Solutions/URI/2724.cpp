#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef map<string, int> cod;
cod mp;
int cur = 1;
vector<string> dg;
void process(string& s){
    string b = "", t="", a;
    int n;
    s+='A';
    for(int i=0; i<(int)s.size(); ++i){
        if(isupper(s[i])){
            if(b!=""){
                if(!mp[b])
                    mp[b] = cur++;
                a = to_string(mp[b]);
                n = a.size();
                while(n++<3)
                    a = '0' + a;
                t+=a;
                b = "";
            }
        }
        b+=s[i];
    }

    s = t;
}

int main()
{$
    int t, n , m, c;
    string s;
    cin>>t;
    c = t;
    while(t--){
        dg.clear();
        if(t!=c-1)
            cout<<'\n';
        cin>>n;
        while(n--){
            cin>>s;
            process(s);
            dg.push_back(s);
        }
        cin>>m;
        while(m--){
            cin>>s;
            process(s);
            n = 1;
            for(auto i : dg){
                if(s.find(i)!=s.npos){
                    cout<<"Abortar\n";
                    n = 0;
                    break;
                }
            }
            if(n) cout<<"Prossiga\n";
        }
    }
}
