#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int t, num, sp, j = 0;
    double sum, price;
    string s;
    cin>>t;
    sum = 0.0;
    num = 0;
    for(int j = 1; j<=t; ++j)
    {
        sp = 1;
        cin>>price;
        getline(cin, s);
        getline(cin, s);
        sum+=price;
        for(int i = 0; s[i]; ++i)
        {
            if(s[i]==' ')
                ++sp;
        }
        num+=sp;
        cout<<"day "<<j<<": "<<sp<< " kg\n";
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<(double)num/t<<" kg by day\n";
    cout<<"R$ "<<sum/t<<" by day\n";
}

