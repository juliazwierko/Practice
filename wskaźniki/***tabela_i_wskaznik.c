#include <stdio.h>

int main() {

int tablica[5] = {10,20,30,40,50};
int *wsk_tb;

wsk_tb = &tablica[0];

printf("Pierwszy element tablicy to: %d \n", *wsk_tb);
wsk_tb = wsk_tb+1;

printf("Drugi element tablicy to: %d \n", *wsk_tb);
wsk_tb++;

printf("Trzeci element tablicy to: %d \n", *wsk_tb);
wsk_tb = wsk_tb + 1;
*wsk_tb = 60;

printf("Czwarty element tablicy to: %d \n", *wsk_tb);
//getchar();

printf("\n");
return 0;
} 
