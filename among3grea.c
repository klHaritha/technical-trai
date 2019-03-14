#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter num:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 || num1>num3)
    {
        printf("%d is a greater",num1);
    }
    else if(num2>num3)
    {
        printf("%d is a greater",num2);
    }
    else
    {
        printf("%d is a greater",num3);
    }

    return 0;
}

