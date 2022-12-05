#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}

int main( )
{
    int tab_1[10] = {0};
    for (int i = 0; i<10; i++){
        tab_1[i] = i_rand(0,1);
    }
    printf("  ");
    for (int i = 0; i<10; i++){
        printf("%d",tab_1[i]);
    }

    printf("\n");

    int j = 0;
    for (int i = 0; i<9; i++){
        if(tab_1[i]==0)
            j += 1;
    }
    printf ("%d",j);

    return 0;
}
