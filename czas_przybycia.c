/*
Podano czas odjazdu pociągu i czas dojazdu do stacji końcowej.
Należy napisać program, który znajdzie czas przyjazdu tego pociągu (być może innego dnia).

Dane wejściowe
Plik wejściowy INPUT.TXT zawiera dwa wiersze. 
Pierwszy wiersz to czas odjazdu, a drugi to czas podróży. 
Godzina odjazdu podawana jest w formacie „GG:MM”, ​​gdzie HH to czas w godzinach, 
który przyjmuje wartość od 00 do 23, MM to czas w minutach, który przyjmuje wartość od 00 do 59. 
Podawany jest czas podróży przez dwie nieujemne liczby całkowite - liczbę godzin i liczbę minut. 
Liczby są oddzielone jedną spacją. Liczba godzin nie przekracza 120, minut - 59.

Wyjście
Plik wyjściowy OUTPUT.TXT powinien zawierać jedną linię - czas przyjazdu pociągu do stacji końcowej. 
Format wyjściowy tego czasu jest taki sam jak format wejściowy czasu odjazdu.


11:00 | 09:00
22 0  |
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{
    int g;
    int m;
    printf("O której godzinie rozpoczęła się podróż?: \n");
    scanf("%d", &g);
    printf("O której minucie rozpoczęła się podróż?: \n");
    scanf("%d", &m);
    printf("paczatek podrozy o: %02d:%02d\n\n", g,m);

    int G;
    int M;
    printf("Wpisz ilość godzin podróży: \n");
    scanf("%d", &G);
    printf("Wpisz ilość minut podróży: \n");
    scanf("%d", &M);
    printf("cały czas podróży: %02d:%02d\n\n", G,M);
 
    int godzina; 
    godzina = g+G;
    int H = 0;
    H = godzina % 24;

    int minuta; 
    minuta = m+M; 
    int MIN = 0;
    MIN = (minuta % 60);

    int MINN;
    MINN = (minuta / 60);
    int F = (H+MINN);

    printf("Arrive at: %02d:%02d\n",F,MIN);
    
return 0;
}
