/*
Дан целочисленный массив размера N. 
Удалить из массива все нечетные числа 
и вывести размер полученного массива и его содержимое.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}

int main()
{
    printf("Wpisz rozmiar tabeli: ");
    int N;
    scanf("%d", &N);
    printf("\n");
	srand(time(0));
    int tab_1[N];
	
	for (int i = 0; i<N; i++){
        tab_1[i] = i_rand(0,9);
    }
 
    for (int i = 0; i<N; i++){
        printf("%d ",tab_1[i]);
    }
    printf("\n\n");
    
    int k = 0;
    for (int i = 0; i<N; i++){
        if(tab_1[i]%2==0){
            tab_1[i] = 0;
            k += 1;
        }
    }
    int roznica = N - k;

    printf("Usuniecie parzystych elementow tabeli: \n");
    printf("Nowy rozmiar tabeli: %d\n", roznica);

    for (int i = 0; i<N; i++){
        printf("%d ", tab_1[i]);
    }

    printf("\n");
    return 0;
}
