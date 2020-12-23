#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50][50], i, j, n, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
	k = 1;
	for (i = 2; i <= n && k; i++)
		for (j = 1; j < i && k; j++)
			if (a[i][j])
				k = 0;
	if (k)
		printf("Este triunghiulara superior");
	else
		printf("Nu este triunghiulara superior");
	getch();
	return 0;
}
