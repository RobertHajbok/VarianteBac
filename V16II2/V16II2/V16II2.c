#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = 3;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j || i + j == n + 1)
				a[i][j] = 0;
			else
				if (i < j && i + j < n + 1)
					a[i][j] = 1;
				else
					if (i > j && i + j > n + 1)
						a[i][j] = 2;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
