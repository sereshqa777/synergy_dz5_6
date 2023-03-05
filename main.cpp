#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int mas[100][100];
    int n, m;

    printf("n=");
    scanf("%d", &n);
    
    printf("m=");
    scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%i", &mas[i][j]);
        }
    }
    printf("=================VVOD=================\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%3d", mas[i][j]);
        }
        printf("\n\n");
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m - 1; j++)
        {
            for(int k = 0; k < m - j - 1; k++)
            {
                if(mas[i][k] > mas[i][k+1])
                {
                    int tmp = mas[i][k];
                    mas[i][k] = mas[i][k+1];
                    mas[i][k+1] = tmp;
                }
            }
        }
    }
    printf("\n\n\n\n");
    printf("=================TASK 1=================\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%3d", mas[i][j]);
        }
        printf("\n\n");
    }
    for(int i = 0; i < n; i++)
    {
        int tmp = mas[i][0];
        mas[i][0] = mas[i][m-1];
        mas[i][m-1] = tmp;
    }
    printf("=================TASK 2=================\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%3d", mas[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
