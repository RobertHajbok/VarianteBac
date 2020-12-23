#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10], n, i, j, x, c1, c2, c3;
	scanf("%d", &n);
	scanf("%d", &x);
	c3 = x % 10;
	x = x / 10;
	c2 = x % 10;
	c1 = x / 10;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = c2;
	for (i = 0; i < n; i++)
		a[i][i] = c1;
	for (i = 0; i < n; i++)
		a[i][n - i - 1] = c3;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
