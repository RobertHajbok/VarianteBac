#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100], i, j, n, k, val;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = 0;
	val = 2;
	for (k = 1; k <= 2 * n - 1; k++)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (i + j == k + 1)
					a[i][j] = val * val;
		val++;
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
