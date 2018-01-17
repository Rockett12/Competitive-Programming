#include <iostream>
#include <vector>
#define _ ios::sync_with_stdio(0);
#define INF 1000000000
using namespace std;
typedef vector<int> vi;

int mergeSort(vi& vec)
{
    int tam = (int)vec.size();
    if(tam==1)
        return 0;
    int cont=0, mid, i;

    mid = tam>>1;
    vi v1, v2;

    for(i =0; i<mid; ++i)
        v1.push_back(vec[i]);

    for(; i<tam; ++i)
        v2.push_back(vec[i]);

    cont+= mergeSort(v1) + mergeSort(v2);
    v1.push_back(INF);
    v2.push_back(INF);

    int j=0, k=0;

    for(i = 0; i<tam; ++i)
    {
        if(v1[j]<=v2[k])
            vec[i] = v1[j++];
        else
            vec[i] = v2[k++], cont+= (int)v1.size()-1-j;
    }

    return cont;
}

int main()
{_
    int n, t, a;
    vi v;
    cin>>n;

    while(n--)
    {
        cin>>t;
        v.clear();
        while(t--)
        {
            cin>>a;
            v.push_back(a);
        }

        a = mergeSort(v);
        cout<<"Optimal train swapping takes "<<a<<" swaps.\n";
    }

    return 0;
}
