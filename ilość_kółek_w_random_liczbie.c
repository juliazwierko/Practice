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
	srand(time(0));
	int tab[10] = {0};
	
    
	for (int i = 0; i<10; i++){
        tab[i] = i_rand(0, 9);
    }
    printf("Tablica przed sortowaniem: \n");

    for (int i = 0; i<10; i++){
        printf("%d",tab[i]);
    }
    printf("\n");
    
    int kolka=0;
    for (int i = 0; i<10; i++){
        if (tab[i] == 0){
            kolka += 1;
        }

        else if (tab[i] == 6){
            kolka += 1;
        }

        else if (tab[i] == 9){
            kolka += 1;
        }
    
        else if (tab[i] == 8){
            kolka +=2;
        }
    }
    printf ("ilosc 'kolek' w liczbe wynosi: %d",kolka);

	return 0;
}
