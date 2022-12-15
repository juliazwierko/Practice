#include <stdio.h> 

int main() {
    int num = 0;
    int * pNum = &num;
    printf("%p - %p\n", pNum, &num);

    printf("%d\n", num  ); //0
    printf("%d\n", *pNum); //0 (to samo)

    //przez wyznacznik mozemy zmienic wartosc zmiennej 
    *pNum = 10; //nowa wartosc num;
    printf("%d - %d\n", *pNum, num);

    

    printf("\n");
    return(0);
}
