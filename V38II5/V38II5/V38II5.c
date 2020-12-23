#include<stdio.h>
#include<conio.h>
int main()
{
	int a[30][30], i, j, n, min, p = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	for (j = 1; j <= n; j++)
	{
		min = a[1][j];
		for (i = 2; i <= n; i++)
			if (a[i][j] < min)
				min = a[i][j];
		if (min == a[n + 1 - j][j])
			p = p * min;
	}
	printf("%d", min);
	getch();
	return 0;
}
