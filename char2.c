#include<stdio.h>
#include<string.h>
void print(const char c[]) // char c
{
    //c[0] = 'A'; // por causa do const no parâmetro da função não é possível modificar o array dentro da função
    while(*c != '\0')
    {
        printf("%c",*c);
        c++;
    }
    printf("\n");
}
int main()  
{
    char c[] = "Hello";
    // char* c = "Hello"; cria o array pode ele é considerado como uma constante (nao pode ser alterado)
    //c[0] = 'A';
    print(c);
}   