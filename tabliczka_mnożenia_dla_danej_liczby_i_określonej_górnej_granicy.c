/*
  napisz prosty kod, który wydrukuje tabliczkę mnożenia 
  dla podanej liczby i określonej górnej granicy
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x;
	printf("Wpisz liczbe:\n");
    scanf("%f", &x);

    int g;
    printf("Wpisz gorny przedzial tabliczki mnozenia: \n");
    scanf("%d", &g);

    float iloczyn = 0.;
    for (int i = 1; i<=g; i++){
        iloczyn = i * x;
        printf("5 * %d = %f\n", i,iloczyn);
    } 
	return 0;
}
