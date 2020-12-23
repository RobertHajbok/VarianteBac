#include<stdio.h>
#include<conio.h>
int main()
{
	int a[51][51], i, j, n, k = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			a[i][j] = 2 * k;
			k++;
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
