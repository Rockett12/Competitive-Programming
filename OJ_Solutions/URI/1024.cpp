#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstdio>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second


using namespace std;
typedef pair< int, int > ii;
typedef pair<int, ii> pii;

int main()
{
    int n, m;
    string a, b;
    scanf("%d%*c", &n);

    while(n--)
    {
        getline(cin, a);
        b = "";
        for(int i =0; a[i]!='\0'; ++i)
            if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
                a[i]+=3;

        for(int i =(int)a.size()-1; i>=0; --i)
            b+=a[i];

        m = ((int)a.size()/2);
        for(int i =m; i<(int)b.size(); ++i)
            b[i]-=1;

        cout<<b<<endl;
    }


}

