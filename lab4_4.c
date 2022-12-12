#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

#define N 3 

void hex(int p){ 
    char tab[N+1];
    //TU EDYTOWAC
    //sprawdzanie czy liczba nalezy do przedzilu:
    if (p<0 || p>4095) {
        printf("Liczba %d jest poza zakresem [0, 4095]\n", p);
        return;
    }

    //wypisywanie w systemie 16:
    int i = p;
    char znak;
            for(int j=2; j>=0;j--){            //wypelnienie tanbeli z numerem elementa "j"
                int tmp = i;
                int reszta = i%16;
                i = i/16;
                //int reszta = tmp-(i*16);

                if(reszta<10){
                    znak = reszta + '0';
                }
                else
                    znak = reszta - 10 + 'A';

                tab[j]=znak;
            }

    tab[3]='\0';                               //lancuchi
    printf("%4d = %s\n", p, tab); 
} 

int main(void){
    for(int i=-2; i<=4097; i++) 
        if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0) 
            hex(i); 
    return 0; 
} 
