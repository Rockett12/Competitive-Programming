#include <cstdio>
using namespace std;

int main() {
	int n, k;
  	scanf("%d %d", &n, &k);
  	long long int ans = k;
  	while (--n) {
    	ans *= k-1;
    }
  	printf("%lld\n", ans);
  	
}

