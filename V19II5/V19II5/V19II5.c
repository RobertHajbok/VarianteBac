#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i % 2 != 0)
				a[i][j] = i + j;
			else
				if (j == 1)
					a[i][j] = i;
				else
					a[i][j] = a[i - 1][j - 1];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
