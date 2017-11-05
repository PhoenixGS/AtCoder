#include <cstdio>

int n;
int x[1000000];
int ans[1000000];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x[i]);
	}
	if (n & 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i & 1)
			{
				ans[(n + 1) / 2 - (i + 1) / 2 + 1] = x[i];
			}
			else
			{
				ans[(n + 1) / 2 + i / 2] = x[i];
			}
		}
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (i & 1)
			{
				ans[n / 2 + (i + 1) / 2] = x[i];
			}
			else
			{
				ans[n / 2 - i / 2 + 1] = x[i];
			}
		}
	}
	for (int i = 1; i < n; i++)
	{
		printf("%d ", ans[i]);
	}
	printf("%d\n", ans[n]);
	return 0;
}
