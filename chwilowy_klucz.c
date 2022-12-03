/*
    napisać program, który po wprowadzeniu hasła generuje nowe, 
    które będzie sumą Twojego hasła i liczby jedynek w liczbie
    Twojego hasła zapisanej w systemie binarnym (składającej się z 1 i 0)
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("\n");
    printf("Podaj haslo(liczbu): ");
    int  a;
    scanf("%d", &a);
    printf("YOUR PASSSWORD IS: %d\n\n",a);

    int i = 0;
    int reszta = 0;
    int binar = 2;
    int poczatkowe_a = a;

    while(a>0){
        int tmp = a;
        a = (a/binar);
        printf("nowe a: %d\n",a);
        reszta = tmp-(a*2);
        printf("reszta: %d\n\n",reszta);

        if(reszta==1){
            i += 1;
        }
    }
    printf("Suma jedynek-reszt wynosi: %d\n\n", i);
    int nowe_haslo = poczatkowe_a+i;
    printf("Nowe haslo: %d",nowe_haslo);
    return 0;
}
