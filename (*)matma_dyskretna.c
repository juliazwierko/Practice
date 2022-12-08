/*
  Liczbę układów bez powtórzeń Akn i liczbę kombinacji bez powtórzeń Ckn można znaleźć 
  odpowiednio ze wzorów Akn=n!(n−k)! i Ckn=n!k!(n-k)!. 
  Napisz program, który znajdzie te wielkości dla danych n i k.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{   
    printf("Wpisz n: ");
    int n;
    scanf("%d", &n);

    printf("Wpisz k: ");
    int k;
    scanf("%d", &k);

    int odejmowanie = (n-k);
    int odejmowanie_silnia = 1;

    int n_silnia = 1;
    for(int i = 1; i<=n; i++){
        n_silnia = n_silnia * i;
    }
    printf("n! = %d\n", n_silnia);

    int k_silnia = 1;
    for(int i = 1; i<=k; i++){
        k_silnia = k_silnia * i;
    }
    printf("k! = %d\n", k_silnia);

    if (odejmowanie < 0)
        printf ("Wybierz inne k i n\n");
    else {
    int odejmowanie_silnia = 1;
    for(int i = 1; i<=odejmowanie; i++){
        odejmowanie_silnia = odejmowanie_silnia * i;
    }
    printf("(n-k)! = %d\n", odejmowanie_silnia);
    }
    
    int C = (n_silnia)/(k_silnia * odejmowanie_silnia);
    int A = (n_silnia)/(odejmowanie_silnia);
    
    printf("C = %d\n", C);
    printf("A = %d\n", A);

    return 0;
}
