#include<stdio.h>
#include<conio.h>
int main()
{
	int a[9][9], i, j, nr;
	long n, m;
	scanf("%d", &n);
	nr = 0;
	m = n;
	while (m != 0)
	{
		m = m / 10;
		nr++;
	}
	for (j = 1; j <= nr; j++)
	{
		for (i = 1; i <= nr; i++)
			a[i][j] = n % 10;
		n = n / 10;
	}
	for (i = 1; i <= nr; i++)
	{
		for (j = 1; j <= nr; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
