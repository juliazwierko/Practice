/*
  Należy obliczyć wartość 2n.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{   
    printf("Wpisz potegu liczby 2: ");
    int p;
    scanf("%d", &p);

    unsigned long long poteuga = 1;
    for (int i = 1; i<=p; i++){
        poteuga *= 2; 
    }
    printf("%lld", poteuga); 
    printf("\n");
    return 0;
}
