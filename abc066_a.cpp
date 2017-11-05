#include <cstdio>
#include <algorithm>

using namespace std;

int x[10];

int main()
{
	scanf("%d%d%d", &x[1], &x[2], &x[3]);
	sort(x + 1, x + 4);
	printf("%d\n", x[1] + x[2]);
	return 0;
}
