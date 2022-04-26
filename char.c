#include<stdio.h>
#include<string.h>
int main()
{
    char c[5];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    c[4] = '\0';
    printf("%s\n", c);

    char name[] = "Renan";    
    printf("%s\n", name);
    printf("Size in bytes = %d\n", sizeof(name));


    int len = strlen(c);
    int lenN = strlen(name);
    printf("Tamanho = %d\n", len);
    printf("Tamanho = %d\n", lenN);

}