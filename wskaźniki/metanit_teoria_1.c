#include <stdio.h>

int main() {

///////////////// #1 ////////////////////
int x = 10; 
int *p;
p = &x;

printf("Adres = %p \n", p);
printf("x = %d",*p);

int y = *p; //10
//printf("x = %d \n", y); // 10

*p = 45;
printf("Adres = %p \n", p);
printf("x = %d\n",*p);

///////////////// #2 ////////////////////

char c = 'N';
int d = 10;
short s = 2;

char *pc = &c;
int *pd = &d;
short *ps = &s;

printf("Variable c: address=%p \t value=%c \n", pc, *pc);
printf("Variable d: address=%p \t value=%d \n", pd, *pd);
printf("Variable s: address=%p \t value=%hd \n", ps, *ps);
    
printf("\n");
return 0;
}
