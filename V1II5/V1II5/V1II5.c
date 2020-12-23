#include<stdio.h>
#include<conio.h>
int main()
{
	int a[11][11], n, m, i, j;
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (i < j)
				a[i][j] = i;
			else
				a[i][j] = j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
