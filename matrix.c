#include<stdio.h>
int main()
{
    int matriz[3][3] = {{12,23,34},{34,45,32},{32,31,78}};
    int matriz2[2][2] = {{12,23},{34,45}};
    int transpose[10][10];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("-----------\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",matriz2[i][j]);
        }
        printf("\n");
    }
      // computing the transpose
    for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j) 
    {
        transpose[j][i] = matriz[i][j];
    }
     printf("-----------\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}   