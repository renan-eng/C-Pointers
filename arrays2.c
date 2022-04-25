#include<stdio.h>
int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    int i;
    for(i=0;i<5;i++)
    {
    printf("Address = %d\n", a+i); // retona o endereço do primeiro elemento do array
    printf("Address = %d\n", &a[i]); // também retorna o endereço do primeiro elemento do array
    printf("value = %d\n", a[i]); // retorna o valor do primero elemento do array a
    printf("value = %d\n", *(a+i)); // também retorna o valor do primero elemento do array a
    }
}