/* Zadanie 3:* napisz program wyszukujący wartość maksymalną i minimalną w tablicy z zadania 2. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int i,j;
	float tab[100],war=0,sr=0,br;
	float r1,r2,wynik;
	float min, max;
	srand(time(NULL));
	for (i=0; i<100; i++)
	{
		do
		{
		r1=(1.0*rand()/RAND_MAX);
	    r2=(1.0*rand()/RAND_MAX);
	    wynik=(cos(2*3.14*r2)*sqrt(-2.0*log(r1)));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0);
		tab[i]=wynik;
		printf("Tab[%d]=%f\n",i+1,tab[i]);
	}
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
	printf("Najmniejsza liczba = %f\n",min);
	printf("Największa liczba = %f\n",max);
	return 0;
}