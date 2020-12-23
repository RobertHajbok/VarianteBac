/*Pentru cele n numere(n<1000000) nu s-a utilizat un vector pentru stocare ci s-a utilizat un vector cu 100 de elemente care a stocat
numarul de aparitii pentru fiecare valoare(0-99). Prelucrarea s-a facut odata cu citirea, iar pentru afisare s-a parcurs vectorul de
100 de elemente.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, x, i, a[100] = {};
	FILE* f;
	f = fopen("numere.txt", "r");
	fscanf(f, "%d", &n);
	for (i = 1; i <= n; i++)
	{
		fscanf(f, "%d", &x);
		a[x]++;
	}
	for (i = 1; i <= 99; i++)
		if (a[i] == 1)
			printf("%d ", i);
	getch();
	return 0;
}
