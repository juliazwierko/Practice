/*
Korzystając ze współrzędnych całkowitych wierzchołków trójkąta (x1,y1), (x2,y2) i (x3,y3), 
musisz obliczyć jego pole.

Dane wejściowe

Plik wejściowy INPUT.TXT zawiera 6 liczb całkowitych x1,y1,x2,y2,x3,y3 
– współrzędne wierzchołków trójkąta.
Wszystkie liczby nie przekraczają 106 w wartości bezwzględnej.

Wyjście

Wypisz dokładną wartość pola danego trójkąta do pliku wyjściowego OUTPUT.TXT.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Podaj współrzędne 1 punktu: \n");
    int  x_1;
    scanf("%d", &x_1);
    int  y_1;
    scanf("%d", &y_1);
    printf("współrzędne 1 punktu: (%d;%d)\n\n",x_1,y_1);

    printf("Podaj współrzędne 2 punktu: \n");
    int  x_2;
    scanf("%d", &x_2);
    int  y_2;
    scanf("%d", &y_2);
    printf("współrzędne 1 punktu: (%d;%d)\n\n",x_2,y_2);

    printf("Podaj współrzędne 3 punktu: \n");
    int  x_3;
    scanf("%d", &x_3);
    int  y_3;
    scanf("%d", &y_3);
    printf("współrzędne 1 punktu: (%d;%d)\n\n",x_3,y_3);

    int  l_1;
    int  l_2;
    int  l_3;

    l_1 = ((x_2-x_1)*(x_2-x_1)) + ((y_2-y_1)*(y_2-y_1));
    l_2 = ((x_2-x_3)*(x_2-x_3)) + ((y_2-y_3)*(y_2-y_3));
    l_3 = ((x_3-x_1)*(x_3-x_1)) + ((y_3-y_1)*(y_3-y_1));
    
    printf("dlugosc 1 odcinka: %d\n",l_1);
    printf("dlugosc 2 odcinka: %d\n",l_2);
    printf("dlugosc 3 odcinka: %d\n\n",l_3);

    int  p;
    p = (l_1+l_2+l_3)/2;
    printf("1/2 Perimetra: %d\n\n",p);

    int q = (p- (sqrt (l_1)));
    printf("(1) %d\n", q);
    int w = (p- (sqrt (l_2)));
    printf("(2) %d\n", w);
    int e = (p- (sqrt (l_3)));
    printf("(3) %d\n", e);
    int u = (q*w*e);
    printf("(mnozenie nawiasow) %d\n\n", u);
    
    int S;
    S = (p*u);
    printf("S bez pierwiastka= %d\n", S);

    float powierzchnia = sqrt (S);
    printf("Powierzchnia trojkata wynosi= %f\n", powierzchnia);
   
    return 0;
}
