#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], n, i, j, x = 2;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			a[i][j] = x;
			x = x + 2;
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
