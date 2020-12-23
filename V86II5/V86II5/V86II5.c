#include<stdio.h>
#include<conio.h>
int main()
{
	int a[11][11], i, j, n, m, k = 1;
	scanf("%d", &n);
	m = n * 2;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= m; j++)
		{
			a[2 * i - 1][j] = k++;
			a[2 * i][m + 1 - j] = k++;
		}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
