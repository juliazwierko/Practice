/*
napisz kod, który oblicza sumę i iloczyn wszystkich liczb, 
składających się na liczbę wprowadzoną przez użytkownika.
*/
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

int main() {

int liczba = 0;
printf("Wpisz liczbe, skladajaca sie z 3 liczb: ");
scanf("%d", &liczba);
printf("\n");

int a = 0; //100
int b = 0; //10
int c = 0; //1
 
a = liczba/100;
c = (liczba%10);
b = (liczba - ((a*100)+c))/10;

printf("Liczba nr. 1: %d\n", a);
printf("Liczba nr. 2: %d\n", b);
printf("Liczba nr. 3: %d\n", c);

int suma = 0;
int iloczyn = 0;
suma = a + b + c;
iloczyn = a*b*c;
printf("Suma liczb: %d\n", suma);
printf("Iloczyn liczb: %d\n", iloczyn);

printf("\n");
return 0;
} 
