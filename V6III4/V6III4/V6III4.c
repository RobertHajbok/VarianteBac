/*Se citeste primul numar din fisier si se initializeaza variabila nr_ap cu 1. Cat timp nu s-a intalnit sfarsitul de fisier se mai
citeste un nr si se compara cu cel anterior citit. Daca sunt egale creste cu 1 numarul de aparitii; daca nu sunt egale se tipareste
primul dintre ele cu numarul de aparitii corespunzator, se reinitializeaza variabila care numara aparitiile cu valoarea 1, dupa care
se reconsidera primul numar din secventa de numere egale ca fiind cel de-al doilea citit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1, n2, nr_ap;
	FILE* f;
	f = fopen("BAC.TXT", "r");
	fscanf(f, "%d", &n1);
	nr_ap = 1;
	while (!feof(f))
	{
		fscanf(f, "%d", &n2);
		if (n1 == n2)
			nr_ap++;
		else
		{
			printf("%d %d ", n1, nr_ap);
			nr_ap = 1;
			n1 = n2;
		}
	}
	printf("%d %d ", n1, nr_ap);
	getch();
	return 0;
}
