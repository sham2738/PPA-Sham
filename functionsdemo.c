#include <stdio.h>

int main()
{
    int value1 = 0, value2 = 0, Ret = 0;

    printf("Enter First Number :   \n");
    scanf("%d",&value1);

    printf("Enter Second Number :   \n");
    scanf("%d",&value2);

    Ret = value1 * value2 ;

    printf("Multiplication is :   %d\n",Ret);

    return 0;
}