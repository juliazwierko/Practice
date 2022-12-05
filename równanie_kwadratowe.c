/*
Trudno znaleźć osobę, która lubi rozwiązywać monotonne zadania matematyczne. 
Ostatnio stało się to łatwiejsze dla uczniów, 
ponieważ wraz z pojawieniem się komputerów w prawie każdym mieszkaniu znacznie 
łatwiej było się sprawdzić.

Ale programy, w których rozwiązywanie równań jest standardową funkcją, nie są 
instalowane wszędzie. Napisz program, który rozwiąże to równanie

ax2 + bx + c = 0

dla danych współczynników a, b i c.

przykładowe input i output:
1 -3 2

2
1.000000
2.000000
*/

/*
ROZWIĄZANIE RÓWNANIA ax^3+bx^2+cx+d=0 ZOSTANIE DODANE W NAJBLIŻSZYM CZASIE:
*/

#include <stdio.h>
#include <math.h> 

int main( )
{
    float a, b, c; //ax^2+bx+c=0
    printf("wpisz koeficyjenty a, b, c dla rownania kwadratowego: \n");

    printf("a:");
    scanf("%f", &a);
    
    printf("b:");
    scanf("%f", &b);
    
    printf("c:");
    scanf("%f", &c);
    
    float p, o; //x1 i x2
    float D; //sigma

    D=((b*b)-(4*(a*c)));
    printf("Sigma wynosi: %.2f\n",D);

    if (D==0){
        printf("Istnieje tylko 1 rozwiązanie:\n");
        
        float q = (-b)/(2*a);
        printf("Pierwiastek rownania: %.2f\n", q);
    }
    else if (D>0){
        printf("Istnieje tylko 2 rozwiązania:\n");
        float pierwiastek_kwadratowy =sqrt(D);
        p=(-b-pierwiastek_kwadratowy)/(2*a);
        o=(-b+pierwiastek_kwadratowy)/(2*a);
        printf("Pierwiastki rownania: %.2f,%.2f", p, o);
    }
    else if (D<0){
        printf("Nie ma rozwiazan");
    }
    
    return 0;
}
