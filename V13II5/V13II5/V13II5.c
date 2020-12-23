#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a[i][n - i + 1] = 0;
		for (j = 1; j < n - i + 1; j++)
			a[j][i] = i;
		for (j = i + 1; j <= n; j++)
			a[n - i + 1][j] = i;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
