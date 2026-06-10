//Condicional

#include<stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >=18)
    {
        printf("Pode dirigir\n");
    }
    else
    {
        printf("Nao pode dirigir\n");
    }

    return 0;

}