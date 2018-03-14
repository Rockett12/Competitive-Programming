#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c)&&a)
        printf("%d\n", (int)cbrt(a*b*c));
}

