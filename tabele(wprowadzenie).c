/*
Вам необходимо сделать несколько блоков кода, которые делают следующее:
Блок 1. Выводит все элементы массива.
Блок 2. Выводит все элементы массива в обратном порядке.
Блок 3. Выводит чётные элементы массива.
Блок 4. Выводит все элементы массива через 1.
Блок 5. Выводит все элементы массива пока не встретится элемент -1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main( ){

    char arr[] = {0, 1, 3, 4, 5, 2, 1, -4, -1, 10, 55};
    
    printf("\n Blok pierwszy:\n");
    for(int i = 0; i<sizeof(arr)/sizeof(char); i++){
        printf("%d\t", arr[i]);
    }

    printf("\n");

    printf("\n Blok drugi:\n");
    for(int i = sizeof(arr)-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }

    printf("\n Blok trzeci:\n");
    for(int i = 0; i<sizeof(arr)/sizeof(char); i++){
        if (arr[i]%2 == 0){
            printf("%d\t", arr[i]);
        }
    }

    printf("\n Blok czwarty:\n");
    for(int i = 0; i<sizeof(arr)/sizeof(char); i = i+2){
        printf("%d\t", arr[i]);
    }

    printf("\n Blok piaty:\n");

    int element = 3;
    for(int i = 0; arr[i]!=-1; i++){
            printf("%d\t", arr[i]);
    }

    printf("\n");
    return 0;
}
