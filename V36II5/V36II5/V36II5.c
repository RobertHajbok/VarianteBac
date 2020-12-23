#include<stdio.h>
#include<conio.h>
int main()
{
	int a[31][31], i, j, n, m, min;
	scanf("%d", &n);
	scanf("%d", &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (j = 1; j <= m; j++)
	{
		min = a[1][j];
		for (i = 2; i <= n; i++)
			if (min > a[i][j])
				min = a[i][j];
		printf("%d ", min);
	}
	getch();
	return 0;
}
