/*
Należy obliczyć sumę liczb całkowitych znajdujących 
się międzyliczbami od 1 do N włącznie.

input: 5;
output: 15;
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{
    printf("\n");

    int n;
    printf("wpisz liczbu gornego przeddzialu: \n");
    scanf("%d", &n);

    printf("wpisana liczba : %d\n",n);
    printf("Przedzial: [1;%d]\n",n);
    
    int S=0;
    int licznik = ((2*1)+(1*(n-1)))*n;
    int mianownik = 2;

    S = licznik/mianownik;

    printf("Suma liczb nalezacych do przedzialu [1;%d]: %d", n, S);

    return 0;
}
