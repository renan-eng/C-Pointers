#include<stdio.h>
int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    int *p = a;
    printf("%d\n", a); // retona o endereço do primeiro elemento do array
    printf("%d\n", &a[0]); // também retorna o endereço do primeiro elemento do array
    printf("%d\n", a[0]); // retorna o valor do primero elemento do array a
    printf("%d\n", *a); // também retorna o valor do primero elemento do array a
}