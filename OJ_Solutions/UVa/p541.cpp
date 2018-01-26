#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define pb push_back
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef map<string, int> mp;
typedef pair<string, string> ii;
int v[105][105], rows[105], cols[105];


int main()
{_
    int n;
    int soma;
	vector<int> r, c;
	while((cin>>n)&&n)
    {
        r.clear(), c.clear();
        for(int i =1; i<=n; ++i){
            soma = 0;
            for(int j =1; j<=n; ++j)
            {
                cin>>v[i][j];
                soma+=v[i][j];
            }

            rows[i]= soma;
            if(rows[i]&1)
                r.push_back(i);
        }

        for(int i =1; i<=n; ++i){
            soma = 0;
            for(int j =1; j<=n; ++j)
            {
                soma+=v[j][i];
            }

            cols[i]= soma;
            if(cols[i]&1)
                c.push_back(i);
        }

        if((int)c.size()==0 && (int)r.size()==0)
            cout<<"OK\n";
        else if((int)c.size()==1 && (int)r.size()==1)
            cout<<"Change bit ("<<r[0]<<","<<c[0]<<")\n";
        else
            cout<<"Corrupt\n";

    }





}

