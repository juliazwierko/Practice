#include <stdio.h> 
#include <math.h> 

int main (){
//wypisywanie ilosci ujemnych el. z tabeli i ich wartosci;
int n;
printf("Wpisz dlugosć tabeli: ");
scanf("%d", &n);
int tab[n];
printf("\n");

printf("Wpisz elementy taneli: \n");
for (int i = 0; i<n; i++) {
    printf("tab[%d]= ",i);
    scanf("%d", &tab[i]);
}

for (int i = 0; i<n; i ++) {
    printf("%d ", tab[i]);
}

printf("\n");
printf("Liczby ujemne z podanej tabeli: \n");
int k = 0;
for (int i = 0; i<n; i ++) {
    if (tab[i]<0){
        k += 1;
        printf("%d ", tab[i]);
    }
}
printf("\n");
printf("Ilosc ujemnych elementow tabeli: %d\n", k);

printf("\n");

//Wyznaczyc czy jest w tabele liczba ktora wpisal uzytkownik

printf("Wpisz liczbę i sprawdz czy liczba nalezy do tabeli: \n");
int b;
scanf("%d", &b);

int l = 0;
for (int i = 0; i<n; i ++) {
    if (tab[i]==b){
        l = l+1;
    }
}

if(l>=1){
    printf("Zadana liczba istnieje w tabelie");
}

return 0;
}
