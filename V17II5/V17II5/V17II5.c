#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], n, i, j, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = i;
		for (j = 1; j <= n; j++)
		{
			a[i][j] = k;
			k++;
		}
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
