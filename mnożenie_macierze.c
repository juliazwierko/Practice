#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int macierz_1 [3][2] = {{1, 4},{2, 5},{3, 6}};
    int macierz_2 [2][3] = {{7, 8, 9},{10, 11, 12}};
    int macierz_3 [3][3] = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};

    //wypisywanie macierzy:
    printf("Macierz 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("%d ", macierz_1[i][j]);
        }
        printf("\n");
    }

    printf("\nMacierz 2:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf ("%d ", macierz_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Mnozenie macierzy:
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            for (int inner = 0; inner < 2; inner++)
            {
                macierz_3[row][col] += (macierz_1[row][inner]) * (macierz_2[inner][col]);
            }
            printf ("macierz_3[row][col] = %d\n", macierz_3[row][col]);
        }
        printf ("\n");
    }
    
    return 0;
}

/*
Macierz 1:
1 4 
2 5 
3 6 

Macierz 2:
7 8 9 
10 11 12 

macierz_3[row][col] = 47
macierz_3[row][col] = 52
macierz_3[row][col] = 57

macierz_3[row][col] = 64
macierz_3[row][col] = 71
macierz_3[row][col] = 78

macierz_3[row][col] = 81
macierz_3[row][col] = 90
macierz_3[row][col] = 99
*/
