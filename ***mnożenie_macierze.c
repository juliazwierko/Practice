#include <stdio.h>

int main() {  

    int macierz_1 [2][2] = {{1, 2}, {3, 4}};
    int macierz_2 [2][2] = {{3, 6}, {5, 9}};
    
    printf("Macierz 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
        printf ("%d ", macierz_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Macierz 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
        printf ("%d ", macierz_2[i][j]);
        }
        printf("\n");
    }

    printf("Mnozenie\n\n");

    /*
    //int macierz_1 [2][2] = {{1, 2}, {3, 4}};
    //int macierz_2 [2][2] = {{3, 6}, {5, 9}};
    int suma;
    int b = 0;
    int macierz_3 [2][2] = {{}, {}};
    for (int i = 0; i < 2; i++){
        for (int h = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            int a = (macierz_1[i][j]) * (macierz_2[j][i]);
            printf ("a - %d\n", a);
            b += a;
            printf ("b - %d\n", b);
            a = 0;
        }
        suma = b;
        printf ("suma - %d\n", suma); 
        macierz_3[i][h] = suma;
        suma = 0;
        b = 0;
        
        }
    }
    */
    
    /*
    printf("\nMacierz 3:\n");
    for (int i = 0; i < 2; i++) {
        for (int i = 2; j > 0; j--){
        printf ("%d ", macierz_3[i][i]);
        }
        printf("\n");
    }
    */
    
    
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++) 
        {
            C[i][j] = 0;
            for(k = 0; k < 2; k++)
            C[i][j] += A[i][k] * B[k][j];
        }

    printf("\nthe result of multiplying\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < ; j++)
            printf("%3d ", C[i][j]);
        printf("\n");
    }

    printf ("\n");
    return 0;
} 
