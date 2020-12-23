#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10], k, n, m, i, j, p = 1, gasit;
	scanf("%d", &k);
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (j = 1; j <= m; j++)
	{
		gasit = 0;
		for (i = 1; i <= n; i++)
			if (a[i][j] == k)
				gasit = 1;
		if (gasit != 0)
			p = p * j;
	}
	printf("%d", p);
	getch();
	return 0;
}
