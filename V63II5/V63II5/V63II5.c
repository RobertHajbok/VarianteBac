#include<stdio.h>
#include<conio.h>
int main()
{
	int a[51][51], m, n, i, j;
	scanf("%d", &n);
	scanf("%d", &m);
	for (j = 1; j <= m; j++)
		for (i = 1; i <= n; i++)
			a[i][j] = (j - 1) * n + i;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
