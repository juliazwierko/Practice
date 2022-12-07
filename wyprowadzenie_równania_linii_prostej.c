/*
Znajdź równanie prostej przechodzącej przez dwa określone przez użytkownika punkty na płaszczyźnie współrzędnych.
  
Przykład wykonania kodu:

A(x1; y1): 4,2 -4,8
A(x2; y2): 1,42 9
y = -4,96x + 16,05
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    float x_1;
    float x_2;
    float y_1;
    float y_2;
    
    printf("Wpisz (x1;y1) a dalej (x2,y2): \n");
    
    scanf("%f", &x_1);
    scanf("%f", &y_1);
    scanf("%f", &x_2);
    scanf("%f", &y_2);
    
    printf("(%f;%f) (%f,%f)", x_1, y_1, x_2, y_2);

    float k = (y_1-y_2)/(x_1-x_2);
    float b = (y_2)-(k*x_2);

    printf("Rownanie y=ax+b dla zadanych wspolrzednych: \n\n");
    printf("y = %.2fx + %.2f", k, b);

    return 0;
}
