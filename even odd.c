
#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d", &number);// number input

    if(number%2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }




    return 0;
}
