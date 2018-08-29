#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    string s,ss, t;
    int n,m;
    while (cin>>s>>ss) {
        if((int)ss.size()==1)
            t = ss +"0";
        else
            t = ss[1], t+=ss[0];
        t+='.';
        for(int i = (int)s.size()-1, j = 0;i>=0; --i, ++j) {
            if(j==3)
                t+=',', j = 0;
            t+=s[i];
        }
        t+='$';
        reverse(t.begin(), t.end());
        cout<<t<<'\n';
    }
}

