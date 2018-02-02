#include <iostream>
#include <algorithm>
#include  <vector>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n, m;
    string a;
    long long int soma=1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        soma=1;
        for(int i =0; a[i]!='\0'; ++i)
        {
            if(a[i]== 'a' || a[i]== 'A' ||
                a[i]== 'e' || a[i]=='E' ||
                a[i]== 'i' || a[i]=='I' ||
                a[i]== 'o' || a[i]=='O' ||
                a[i]== 's' || a[i]=='S')
            soma*=3;
            else soma*=2;
        }

        cout<<soma<<endl;
    }


}

