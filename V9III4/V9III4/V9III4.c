/*Parcurgem o singura data fisierul de intrare, care contine numerele. Marchez in vectorul v numerele de 3 cifre existente in fisier.
Parcurgand descrescator verific care nu se gasesc in vector.*/
#include<stdio.h>
#include<conio.h>
int v[1000];
int main()
{
	int i, x, c = 0;
	FILE* f;
	f = fopen("BAC.TXT", "r");
	while (!feof(f))
	{
		fscanf(f, "%d", &x);
		if (x / 100 <= 9 && x / 100 >= 1)
			v[x] = 1;
	}
	for (i = 999; i >= 100; i--)
	{
		if (v[i] == 0)
		{
			printf("%d ", i);
			c++;
		}
		if (c == 2)
			break;
	}
	getch();
	return 0;
}
