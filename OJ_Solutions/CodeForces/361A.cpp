#include <cstdio>
#include <cmath>
#include<vector>
using namespace std;


int main()
{
    int n, k;
    scanf("%d %d", &n, &k);


    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(j>0) printf(" ");
            if(j==i) printf("%d", k);
            else printf("0");


        }

        puts("");
    }


}

