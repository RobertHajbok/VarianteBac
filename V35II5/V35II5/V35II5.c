#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], i, j, n, min;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (j = 1; j <= n; j++)
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
