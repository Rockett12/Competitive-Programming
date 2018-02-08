#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n, v[10], da, gu;
    cin>>n;
    while(n--)
    {
        cin>>v[0];
        cin>>v[1]>>v[2]>>v[3];
        cin>>v[5]>>v[6]>>v[7];

        da = ((v[1]+v[2])>>1);
        if(!(v[3]&1))
            da+=v[0];

        gu = ((v[5]+v[6])>>1);
        if(!(v[7]&1))
            gu+=v[0];

            if(da>gu)
                cout<<"Dabriel\n";
            else if(da<gu)
                cout<<"Guarte\n";
            else
                cout<<"Empate\n";

    }
}

