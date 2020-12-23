/*Eficienta programului consta in faptul ca nu se folosesc tablouri, iar rezultatul se obtine printr-o singura parcurgere a
elementelor din fisier. Mai exact se initializeaza doua variabile min1 si min2, apoi se citesc pe rand din fisier numerele si se
schimba valorile celor 2 variabile atunci cand se intalnesc numere de 2 cifre. Daca in final s-au schimbat valorile initiale ale lui
min1 si min2 atunci se vor afisa noile valori. Daca nu se va afisa doar min1.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int nr, min1, min2;
	FILE* f;
	f = fopen("numere.txt", "r");
	min1 = 100;
	min2 = 100;
	while (!feof(f))
	{
		fscanf(f, "%d", &nr);
		if ((nr >= 10 && nr <= 99) || (nr >= -99 && nr <= -10))
			if (nr < min1 && nr < min2)
			{
				min2 = min1;
				min1 = nr;
			}
			else
			{
				if (nr > min1 && nr < min2)
					min2 = nr;
			}
	}
	if (min1 != 100 && min2 != 100)
		printf("%d %d", min1, min2);
	else
		if (min1 != 100)
			printf("%d", min1);
	getch();
	return 0;
}
