#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int v[4];
    for(int i = 0;i<3; ++i)
        cin>>v[i];
    sort(v, v+3);
    cout<<v[1]<<'\n';
}

