#include <stdio.h>

int main() {
  
//arytmetyka wskaznikow 
///////////////// #1 ////////////////////
int n = 10;

int *ptr = &n;
printf("address=%p \t value=%d \n", ptr, *ptr);

ptr++;
printf("address=%p \t value=%d \n", ptr, *ptr);

ptr--;
printf("address=%p \t value=%d \n", ptr, *ptr);

///////////////// #2 ////////////////////
printf("Nowa operacja z literka: \n");
double d = 10.6;
double *pd = &d;
printf("Pointer pd: address=%p \n", pd);
pd++;
printf("Pointer pd: address=%p \n", pd);

char c = 'J';
char *pc = &c;
printf("Pointer pc: address=%p \n", pc);
pc++;
printf("Pointer pc: address=%p \n", pc);

printf("\n");
return 0;
}
