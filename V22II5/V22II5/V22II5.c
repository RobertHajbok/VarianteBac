#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100], i, j, n, m, k;
	scanf("%d", &m);
	scanf("%d", &n);
	k = m * n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = k--;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
