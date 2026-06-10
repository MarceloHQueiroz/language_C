//Menu with Switch - Calculator

# include<stdio.h>

int main()
{
    int option;

    printf("1 - Add\n ");
    printf("2- Subtract\n");
    printf("3- Multiply\n");
    printf("4- Divide\n");

    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("You chose Add \n");
            break;

        case 2:
            printf("You chose Subtract \n");
            break;

        case 3:
            printf("You chose Multiply \n");
            break;

        case 4:
            printf("You chose Divide \n");
            break;

        default:
            printf("Invalid option \n");
    }

    return 0;

}