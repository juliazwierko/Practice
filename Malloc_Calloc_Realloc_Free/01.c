/*
  OUTPUT
[0]= 1
[1]= 2
[2]= 3
[3]= 4
[4]= 5
1       2       3       4       5
[0]= 1
[1]= 2
[2]= 3
[3]= 4
[4]= 5
[5]= 6
[6]= 7
[7]= 8
[8]= 9
[9]= 10
1       2       3       4       5       6       7       8       9       10       
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

 
int main(void)
{   
    int n = 5; //rozmiar tablicy
    int *arr = malloc (n*sizeof(int));
    int wartosc;

    for(int i=0; i<5; i++)
    {
        printf("[%d]= ",i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("%d\t",  arr[i]);
    }

    printf("\n");

    //////////////#2//////////////
    arr = realloc(arr, (2*n)*sizeof(int)); 
    
    for(int i=0; i<(2*n)*(sizeof(*arr)/sizeof(int)); i++)
    {
        printf("[%d]= ",i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<(2*n); i++)
    {
        printf("%d\t",  arr[i]);
    }

    free(arr);
    return 0;
}
