#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10], i, j, n, m, max, min;
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	max = 0; //maximul dintre minimele liniilor
	for (i = 0; i < m; i++)
	{
		min = a[i][0]; //minimul liniei i
		for (j = 0; j < n; j++)
			if (a[i][j] < min)
				min = a[i][j];
		if (max < min)
			max = min;
	}
	printf("Maximul minimelor liniilor este %d", max);
	getch();
	return 0;
}
