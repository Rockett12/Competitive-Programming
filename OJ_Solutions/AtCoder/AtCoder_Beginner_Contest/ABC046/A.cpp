#include <cstdio>
#include <set>
using namespace std;
int main() {
	int a, b, c;
  	set<int> s;
  	scanf("%d %d %d", &a, &b, &c);
  	s.insert(a);
  	s.insert(b);
  	s.insert(c);
  	printf("%d\n", (int) s.size());
}

