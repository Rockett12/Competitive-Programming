#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int memo[105] = {0};
    for(int i = 1; i<101; ++i)
        memo[i]= i*i +memo[i-1];
    int n;
    while((cin>>n)&&n)
        cout<<memo[n]<<endl;

}
