/*
  Wyświetl silnię dowolnej liczby wprowadzonej przez użytkownika
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{   
    printf("Wpisz licbze dla obliczenia silni: ");
    int a;
    scanf("%d", &a);

    int a_silnia = 1;
    if (a > 0){
        for(int i = 1; i<=a; i++){
        a_silnia = a_silnia * i;
        }
        printf("a! = %d\n", a_silnia);
    }
    else if (a == 0){
        printf("a! = 1\n");
    }    
    else{
        printf("Wybierz inna liczbe\n");
    }
