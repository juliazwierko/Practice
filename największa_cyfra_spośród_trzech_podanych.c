#include <stdio.h>
#include <math.h> 

int main(void)
{
    printf("\n");

    int a;
    printf("wpisz liczbu: \n");
    scanf("%d", &a);
    

    int b;
    printf("wpisz liczbu: \n");
    scanf("%d", &b);
    

    int c;
    printf("wpisz liczbu: \n");
    scanf("%d", &c);
    
    if (c>b){
        if (c>a)
        printf("Najwieksza liczba: %d", c);
    }

    else if (b>c){
        if (b>a)
        printf("Najwieksza liczba: %d", b);
    }

    else if (c>a){
        if (c>b)
        printf("Najwieksza liczba: %d", c);
    }
    
    return 0;
}
