/* Zadanie 2:* napisz program obliczający średnią arytmetyczną i wariancję z
   wygenerowanych losowo liczb z zakresu 0-1 przechowywanych w 100 elementowej
   tablicy typu float. Lczby mają być tak wygenerowane, aby podlegały rozkładowi
   normalnemu. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14

int main()
{
	int i;
	float tab[100];
	float wynik;
	srand(time(NULL));
	for (i=1; i<=100; i++)
	{
	    //Generowanie z rozkładem naturalnym
		do
		{
	    wynik=(cos(2*PI*(1.0*rand()/RAND_MAX))*sqrt(-2.0*log((1.0*rand()/RAND_MAX))));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0); 
		tab[i]=wynik;
		printf("Tab[%d]=%f\n",i,tab[i]);
	}
	int j;
	float wariancja=0,srednia=0,wariancja1;
	for (i=1; i<=100; i++)
	{
		srednia=srednia+tab[i];	
	}
	srednia=srednia/100;
	for (i=1; i<=100; i++)
	{
		wariancja=wariancja+((tab[i]-srednia)*(tab[i]-srednia));
	}
	wariancja=wariancja/100;
	printf("\n\nSrednia = %f\nWariancja = %f\n",srednia,wariancja);
	return 0;
}
 
