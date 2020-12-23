#include<stdio.h>
#include<conio.h>
int a[7][7], n;
int prod(int i, int j)
{
	int k, p = 1;
	for (k = 1; k <= n; k++)
		if (k != i)
			p = p * a[k][j];
	return p;
}
int main()
{
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (a[i][j] == prod(i, j))
				printf("%d ", a[i][j]);
	getch();
	return 0;
}
