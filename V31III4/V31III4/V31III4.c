/*Se determina minimul pentru valorile lui x si maximul pentru valorile lui y, iar la final se compara aceste valori. Daca max<min
atunci exista intersectie, in caz contrar se va afisa 0.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, x, y, max, min;
	FILE* f;
	f = fopen("numere.txt", "r");
	fscanf(f, "%d", &n);
	fscanf(f, "%d %d", &x, &y);
	max = x;
	min = y;
	for (i = 2; i <= n; i++)
	{
		fscanf(f, "%d %d", &x, &y);
		if (max < x)
			max = x;
		if (min > y)
			min = y;
	}
	if (max < min)
		printf("%d %d", max, min);
	else
		printf("0");
	getch();
	return 0;
}
