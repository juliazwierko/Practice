/*
    wyświetlić maksymalną liczbę zer występujących w rzędzie
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}
int main()
{
	srand(time(0));
	int tab[10] = {0};
	
    
	for (int i = 0; i<10; i++){
        tab[i] = i_rand(0, 1);
    }

    for (int i = 0; i<10; i++){
        printf("%d",tab[i]);
    }
    printf("\n");
    
    int max_j = 0;
    int j = 0;
    for(int i = 0; i<10; i++){
        j = 0;
        while (tab[i]==0 && i<10){
            i+=1;
            j+=1;
        }
        if (j>max_j){
            max_j=j;
        }
    }
    printf ("najwieksza ilosc zer w jednym rzadzie: %d\n", max_j);

	return 0;
}
