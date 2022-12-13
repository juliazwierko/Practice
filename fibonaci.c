/*
zadanie ciagu fibonaci dla 10 i n (with rand) elementow;
*/

#include <stdio.h> 
#include <math.h> 

int main (){
  
printf("\n"); 
int f[9];
int i;
f[0]=1;
f[1]=1;
//////////////////////////////////////////////////
printf("Ciag fibonaci dla 10 elementow:\n");
printf("%d %d ", f[0],f[1]);
for(int i=2; i<10; i++){
    f[i]=f[i-1]+f[i-2];
    printf("%d ", f[i]);
    }

printf("\n\n"); 
//////////////////////////////////////////////////          
printf("Ciag fibonaci dla n elementow:\n");
printf("wpisz n: ");
int n;
scanf("%d", &n);
int ff[n];
ff[0]=1;
ff[1]=1;
printf("%d %d ", ff[0],ff[1]);
for(int i=2; i<n; i++){
    ff[i]=ff[i-1]+ff[i-2];
    printf("%d ", ff[i]);
    }
printf("\n");
  
return 0;
}
