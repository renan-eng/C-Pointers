# INTRODUÇÃO A PONTEIROS EM C/C++
## O que são ponteiros?
Ponteiros são variáveis especiais que são utilizadas para armazenar endereços de memória.
## Sintaxe de ponteiros em C
### Como declarar ponteiros
```c
    int* p;
```
Declaramos o ponteiro `p` do tipo `int`.

Há outras maneiras de declarar ponteiros:

```c
    int *p;
    int * p2;
```
***
Observe o exemplo abaixo.
```c
    int* p1, p2;
```
Aqui declaramos o ponteiro `p1` e uma variável do tipo int normal `p2`.
***
## Atribuindo endereço ao um Ponteiro
Exemplo:
```c
    int* pc, c;
    c = 5;
    pc = &c;
```
Aqui atribuimos o valor 5 à variável `c` e o endereço da variável `c` foi designado ao ponteiro `pc`.
***
## Acesse o valor da variável através de um ponteiro
Para acessar o valor da váriavel que um ponteiro aponta devemos usar o operador `*`. Por exemplo:
```c
    int* pc, c;
    c = 5;
    pc = &c;
    printf("%d", *pc);   // Output: 5
```