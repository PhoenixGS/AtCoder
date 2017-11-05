#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char st[500];

int main()
{
	scanf("%s", st + 1);
	int n = strlen(st + 1);
	int ans = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if ((j - i) & 1)
			{
				int l = i;
				int r = (i + j + 1) / 2;
				bool flag = true;
				while (r <= j)
				{
					if (st[l] != st[r])
					{
						flag = false;
						break;
					}
					l++;
					r++;
				}
				if (flag && j - i + 1 != n)
				{
					ans = max(ans, j - i + 1);
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
