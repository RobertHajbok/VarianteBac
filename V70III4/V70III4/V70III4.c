/*Se foloseste faptul ca sirul e ordonat crescator. Nu stocam numerele citite intr-un vector, ci vom folosi faptul ca numerele sunt
in ordine crescatoare, deci cele egale sunt dispuse pe pozitii consecutive in fisier.*/
#include<stdio.h>
#include<conio.h>
FILE* f = fopen("NUMERE.TXT", "r");
int n, i, j, max;
long x, y, k;
int main()
{
	fscanf(f, "%d", &n);
	max = 0;
	fscanf(f, "%d", &x);
	i = 1;
	while (i <= n)
	{
		j = i + 1;
		fscanf(f, "%d", &y);
		while (j <= n && y == x)
		{
			j++;
			fscanf(f, "%d", &y);
		}
		if (j - i > max)
		{
			max = j - i;
			k = x;
		}
		i = j;
		x = y;
	}
	printf("%d ", k);
	getch();
	return 0;
}
