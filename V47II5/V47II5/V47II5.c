#include<stdio.h>
#include<conio.h>
int main()
{
	int a[11][11], b[11][11], i, j, n, m;
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			b[i][j] = a[j][n - i + 1];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
