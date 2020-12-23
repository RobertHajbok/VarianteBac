#include<stdio.h>
#include<conio.h>
int main()
{
	int a[11][11], n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		a[i][1] = a[i][n] = 1;
	for (j = 1; j <= n; j++)
		a[1][j] = 1;
	for (i = 2; i <= n; i++)
		for (j = 2; j <= n - 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
