/* Zadanie 2:* napisz program obliczający średnią arytmetyczną i wariancję z
   wygenerowanych losowo liczb z zakresu 0-1 przechowywanych w 100 elementowej
   tablicy typu float. Lczby mają być tak wygenerowane, aby podlegały rozkładowi
   normalnemu. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int i,j;
	float tab[100],wariancja=0,srednia=0,wariancja1;
	float r1,r2,wynik;
	srand(time(NULL));
	for (i=1; i<=100; i++)
	{
	    do
		{
		r1=(1.0*rand()/RAND_MAX);
	    r2=(1.0*rand()/RAND_MAX);
	    wynik=(cos(2*3.14*r2)*sqrt(-2.0*log(r1)));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0);
		tab[i]=wynik;
		printf("Tab[%d]=%f\n",i,tab[i]);
	}
	for (i=1; i<=100; i++)
	{
		srednia=srednia+tab[i];	
	}
	srednia=srednia/100;
	for (i=1; i<=100; i++)
	{
		wariancja1=((tab[i]-srednia)*(tab[i]-srednia)); 
		wariancja=wariancja+wariancja1;
	}
	wariancja=wariancja/100;
	printf("\n\nSrednia = %f\nWariancja = %f\n",srednia,wariancja);
	return 0;
}
 