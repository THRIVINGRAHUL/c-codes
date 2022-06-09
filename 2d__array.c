/*   PENDING :- MULTIPLICATION OF 2 MATRIX (multiplication left)  */

#include <stdio.h>
int main()
{
    int rows1, columns1, rows2, columns2;
    int i, j, k, l;
    printf(" \n*** MULTIPLICATION OF 2 MATRIX ***\n");
    printf("\nENTER THE NUMBER OF ROWS FOR 1st MATRIX :: ");
    scanf("%d", &rows1);
    printf("ENTER THE NUMBER OF COLUMNS FOR 1st MATRIX :: ");
    scanf("%d", &columns1);

    int matrix1[rows1][columns1];

    printf("\nENTER THE NUMBER OF ROWS FOR 2nd MATRIX :: ");
    scanf("%d", &rows2);
    printf("ENTER THE NUMBER OF COLUMNS FOR 2nd MATRIX :: ");
    scanf("%d", &columns2);

    int matrix2[rows2][columns2];

    if (columns1 == rows2)
    {
        printf("\n\n1st matrix\n");
        {
            for (i = 0; i < rows1; i++)

            {
                for (j = 0; j < columns1; j++)

                {
                    printf(" enter the value of %d row and %d column :: ", i + 1, j + 1);
                    scanf("%d", &matrix1[i][j]);
                    getchar();
                }
            }
        }
        printf("\n2st matrix\n");
        for (k = 0; k < rows2; k++)
        {
            for (l = 0; l < columns2; l++)
            {
                printf("enter the value of %d row and %d column :: ", k + 1, l + 1);
                scanf("%d", &matrix2[k][l]);
                getchar();
            }
        }
    }
    else
    {
        printf("** MATRIX CANNOT BE MULTIPLIED , enter the correct columns for 1st matrix and row for 2nd *** \n");
    }
    int matrix3[i][k];          // declaration of 3rd in which the multiplicatiion of 2 matrix stored.
    for (i = 0; i < rows1; i++) // this is for 3rd matrix
    {
        for (k = 0; k < columns2; k++) // this is for 3rd matrix
        {
            matrix3[i][k] = 0;
            for (int p = 0; p < rows2; p++) // rows2 and column1 is equal write any one
            {
                matrix3[i][k] = matrix3[i][k] + matrix1[i][p] * matrix2[p][k];
            }
        }
    }
    for (i = 0; i < rows1; i++)
    {
        printf("\n");
        for (j = 0; j < columns2; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
    }
}