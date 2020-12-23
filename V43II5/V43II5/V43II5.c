#include<stdio.h>
#include<conio.h>
int main()
{
	int a[24][24], i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i < j)
				a[i][j] = 1;
			else
				a[i][j] = 3;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j)
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
