#include <cstdio>
using namespace std;
int main() {
	int n , k;
  	scanf("%d %d", &n, &k);
  	long double ans = 0., aux;
  	for (int i = 1, j; i<=n; ++i) {
    	j = i;
      	aux = 1.;
      	while (j <= k-1) {
        	aux *= 0.5;
            j<<=1;
        }
      	ans += aux;
    }
    double res = ans / n;
  	printf("%.12lf\n", res);
}
