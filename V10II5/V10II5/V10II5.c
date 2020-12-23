#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20], i, j, n, p, k = 0;
	scanf("%d", &n);
	scanf("%d", &p);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= p; j++)
		{
			a[i][j] = k * k;
			k = k + 2;
		}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= p; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
