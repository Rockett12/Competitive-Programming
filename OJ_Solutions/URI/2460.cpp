#include <iostream>
#include <vector>
#include <algorithm>
#define _ ios::sync_with_stdio(0);


using namespace std;
int main()
{_
    int p,c;
    cin>>p;
    vector<int> vec;

    int v[500005];
    while(p--)
    {
        cin>>c;
        vec.push_back(c);
        v[c]=1;
    }

    cin>>p;
    while(p--)
    {
        cin>>c;
        v[c]= 0;

    }
    int f = 0;
    for(int i =0; i<(int)vec.size(); ++i)
    {

        if(v[vec[i]])
        {
            if(f)
                cout<<" ";
            cout<<vec[i];
            f = 1;
        }

    }
    cout<<endl;
}
