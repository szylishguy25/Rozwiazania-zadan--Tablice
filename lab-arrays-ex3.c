/* Zadanie 3:* napisz program wyszukujący wartość maksymalną i minimalną w tablicy z zadania 2. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14

int main()
{
	//Z zadania 2
	
	int i;
	float tab[100];
	float wynik;
	srand(time(NULL));
	for (i=0; i<100; i++)
	{
		//Generowanie z rozkładem naturalnym
		do
		{
	    wynik=(cos(2*PI*(1.0*rand()/RAND_MAX))*sqrt(-2.0*log((1.0*rand()/RAND_MAX))));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0); 
		tab[i]=wynik;
		printf("Tab[%d]=%f\n",i+1,tab[i]);
	}
	
	//Nowy kod do zadania 3
	
	int j;
	float min, max;
	min=tab[0];
	max=tab[0];
	for (i=0; i<100; i++)
	{
		if (min>tab[i])
		{
			min=tab[i];
		}
		if (max<tab[i])
		{
			max=tab[i];
		}
	}
	printf("\nNajmniejsza liczba = %f\n",min);
	printf("Największa liczba = %f\n",max);
	return 0;
}
