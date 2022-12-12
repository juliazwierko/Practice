//Задание: Найдите произведение элементов массива с нечетными номерами.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {
    int arr[5] = {1,2,3,4,5};

    int iloczyn = 1;
    for (int i = 0; i<5; i++) {
        if (i%2 == 0){
            iloczyn = (iloczyn * arr[i]);
        }
    }
    printf("iloczyn elementow z niparzystym indeksem: %d", iloczyn);

    printf("\n");
    return 0;
}
