#include<stdio.h>
#include<conio.h>
int main()
{
	int v[25][25], a, n, b, i, j;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			v[i][j] = 0;
	for (i = 1; i < a; i++)
	{
		for (j = 1; j < b; j++)
			v[i][j] = 1;
		for (j = b + 1; j <= n; j++)
			v[i][j] = 2;
	}
	for (i = a + 1; i <= n; i++)
	{
		for (j = 1; j < b; j++)
			v[i][j] = 3;
		for (j = b + 1; j <= n; j++)
			v[i][j] = 4;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
