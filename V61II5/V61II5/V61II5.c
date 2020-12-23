#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100], n, i, j;
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
		a[n][j] = j;
	for (i = n - 1; i >= 1; i--)
		for (j = 1; j <= i; j++)
			a[i][j] = a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
