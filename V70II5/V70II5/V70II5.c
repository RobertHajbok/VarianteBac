#include<stdio.h>
#include<conio.h>
int main()
{
	int a[101][101], m, n, i, j, x;
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &x);
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (i = x; i < m; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = a[i + 1][j];
	m--;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
