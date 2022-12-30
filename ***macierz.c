#include <stdio.h>
#include <stdlib.h>
 
void get_error(int key)
{
    fprintf(stderr, "%s\n", (key == 1)? "input error" : "error allocate memory");
    exit(key);
}
 
int main (void)
{
    int size;
    if ((printf("array size = ") && scanf("%d", &size) != 1) || size < 1)
        get_error(1);
 
    int * a = (int *) calloc(size, sizeof(int));
    if (a == NULL)
        get_error(2);
 
    int min = -1;
    for (int i = 0; i < size; i++)
    {
        if (printf("a[%d] = ", i) && scanf("%d", &a[i]) != 1)
        {
            free(a);
            get_error(1);
        }
        if (a[i] > 0 && (min < 0 || a[i] < a[min]))
            min = i;
    }
 
    if (min < 0)
        puts("There are no positive values in the array");
    else
        printf("min: a[%d] = %d", min, a[min]);
 
    return 0;
}
