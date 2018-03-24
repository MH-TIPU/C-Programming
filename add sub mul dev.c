
#include<stdio.h>

int main()
{
    double number1,number2;
    printf("Enter first number \n");
    scanf("%lf", &number1); //first number input

    printf("Enter second number \n");
    scanf("%lf", &number2);//second number input

    printf("%.2lf \n", number1 + number2); // add

    printf("%.2lf \n", number1 - number2); // sub

    printf("%.2lf \n", number1 * number2); // mul

    printf("%.2lf \n", number1 / number2); // div

    return 0;
}
