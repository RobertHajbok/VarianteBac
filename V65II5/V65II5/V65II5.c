#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], i, j, n, m, k;
	scanf("%d", &n);
	scanf("%d", &m);
	k = 1;
	for (i = 1; i <= n; i++)
		if (i % 2 == 1)
			for (j = 1; j <= m; j++)
			{
				a[i][j] = k;
				k++;
			}
		else
			for (j = m; j >= 1; j--)
			{
				a[i][j] = k;
				k++;
			}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
