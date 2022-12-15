#include <stdio.h>

int main() {
///////////////// #1 ////////////////////
int a = 10;
int *pa = &a;
 
int b = 2;
int *pb = &b;

printf("Variable a: address=%p \t value=%d \n", pa, *pa);
printf("Variable b: address=%p \t value=%d \n", pb, *pb);

pa = pb; //теперь указатель pa хранит адрес переменной b

printf("Variable b: address=%p \t value=%d \n", pa, *pa);
printf("\n");

///////////////// #2 ////////////////////
int c = 2;
int k = 3;

int *pc = &c;
int *pk = &k;

if(pc>pk){
    printf("pc(%p) is greater than pk (%p)", pc, pk);
}
else{
    printf("pk(%p) is greater than pc (%p)", pk, pc);
}

printf("\n");
return 0;
}
