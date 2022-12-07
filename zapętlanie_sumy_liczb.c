/*
  Korzystając z pętli while, opracuj program, 
  który obliczy sumę liczb podzielnych przez 5. Ustaw pętlę od 0 do liczby wprowadzonej z klawiatury. 
  Oto przykład działania programu:
  
  input: 200
  output: 4100
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int a;
    printf("Wpisz ostatnie liczbe ciagu: ");
    scanf("%d", &a);

    printf("\n");
    printf("[0;%d] - zadany przedzial\n\n", a);

    int suma = 0;
    int i = 0;
    while(i<=a){
        suma += i;
        i += 5;
    }
    printf("suma wszystkich cyfr z danej granicy podzielnej przez 5 jest równa: %d\n\n\n", suma);

    return 0;
}
