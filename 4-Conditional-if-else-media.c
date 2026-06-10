//2- Conditional
#include<stdio.h>

int main()
{
    int media;

    printf("Digite sua media: ");
    scanf("%d", &media);

    if(media>=0 && media<=4)
    {
        printf("Situacao: Reprovado\n");
    }
    else if (media>=5 && media<=6)
    {
        printf("Situacao: Recuperacao\n");
    }
    else
    {
        printf("Situacao: Aprovado\n");
    }
    
    return 0;
}