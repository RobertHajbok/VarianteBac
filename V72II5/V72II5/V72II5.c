#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100], i, n, j, x, y, val;
	scanf("%d", &n);
	val = 1;
	for (x = 1; x <= n; x++)
	{
		i = x;
		j = 1;
		for (y = 1; y <= x; y++)
		{
			a[i][j] = val;
			i--;
			j++;
			val++;
		}
	}
	y = 1;
	for (i = n; i >= 2; i--)
	{
		x = 1;
		for (j = n; j >= y + 1; j--)
		{
			a[i][j] = a[x][y];
			x++;
		}
		y++;
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
