#include <stdio.h>
#include <math.h> 

int main(void)
{
    int a;
    printf("prosze podac 1 liczbe: ");
    scanf("%d", &a);
    printf("Podana 1 cyfra: %d\n",a);

    int b;
    printf("prosze podac 2 liczbe: ");
    scanf("%d", &b);
    printf("Podana 2 cyfra: %d\n",b);   

    int D;
    D=b-a;
    printf("Różnicy podanych liczb: %d\n",D);

    int n;
    printf("prosze podac numer elementu ciaga: ");
    scanf("%d", &n);
    printf("Podany numer: %d\n",n);

    int c;
    c=a+(D*(n-1));
    printf("Element: %d\n",c);

return 0;
}

