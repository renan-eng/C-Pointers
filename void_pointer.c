#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a; // & retorna o endereço de uma variável
    printf("size of integer is %lu, bytes\n",sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);
    // Voide pointer - Generic pointer
    void *p0;
    p0 = p;
    printf("Address = %d\n",p0);