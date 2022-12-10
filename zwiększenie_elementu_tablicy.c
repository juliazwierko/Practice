/*
Дан массив целых чисел. Все элементы, оканчивающиеся цифрой 4, увеличить на 1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main( ){
    int n;
    printf("Wpisz ilosc elementow tabeli: ");
    scanf("%d", &n);
    int masiv[n];

    int j;
    for (int i = 0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &masiv[i]);
    }

    printf("\n");

    for (int i = 0; i<n; i++){
        if(masiv[i]%10 == 4){
            masiv[i] = masiv[i]+1;
        }
        printf("arr[%d] = %d;\n", i, masiv[i]);
    }
    printf("\n");
    return 0;
}


