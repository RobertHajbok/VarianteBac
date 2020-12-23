#include<stdio.h>
#include<conio.h>
int main()
{
	int a[24][24], n, i, j, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = 0;
		for (j = n - i + 1; j <= n; j++)
		{
			k++;
			a[i][j] = k;
		}
	}
	for (i = 1; i <= n - 1; i++)
		for (j = 1; j < n - i + 1; j++)
			a[i][j] = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
