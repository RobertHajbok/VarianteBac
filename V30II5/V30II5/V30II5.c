#include<stdio.h>
#include<conio.h>
int main()
{
	int a[15][15], i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == 1 || j == 1)
				a[i][j] = 1;
			else
				a[i][j] = a[i][j - 1] + a[i - 1][j];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
