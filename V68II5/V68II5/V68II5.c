#include<stdio.h>
#include<conio.h>
int main()
{
	int a[51][51], n, m, i, j;
	long p;
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	p = 1;
	for (i = 2; i <= m; i += 2)
		for (j = 1; j <= n; j += 2)
			if (a[i][j] >= 0)
				p = p * a[i][j];
	printf("%d", p);
	getch();
	return 0;
}
