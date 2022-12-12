//Zadanie: Znajdź iloczyn elementów tablicy o liczbach nieparzystych.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    
    printf("\n");

    int arr[5] = {1,2,3,4,5};
    int iloczyn = 1;
    for (int i = 0; i<5; i++) {
        if (i%2 == 0){
            iloczyn = (iloczyn * arr[i]);
        }
    }
    printf("Tabelia: ");
    for (int j = 0; j < 5; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("Iloczyn elementow z neiparzystym indeksem: %d\n\n", iloczyn);

    /////////////////////////////////////////////////////////////////////
     
    printf("Dla tablicy z rand elementami\n");
    int i, n;
    printf("Wpisz rozmiar tabeli: ");
    scanf("%d", &n);
    int masiv[n];
    srand(time(0));
    printf("Tabelia: ");
    for (i = 0; i < n; i++) {
        masiv[i] = rand( )%100; 
        printf("%d ", masiv[i]);
    }

    printf("\n");
    int iloczyn_2 = 1;
    for (int i = 0; i<n; i++) {
        if (i%2 == 0){
            iloczyn_2 = (iloczyn_2 * masiv[i]);
        }
    }
    printf("Iloczyn elementow z nieparzystym indeksem: %d\n", iloczyn_2);
 
    printf("\n");
    return 0;
}

