#include<stdio.h>
#include<math.h>

int isPrime(int a){   // prime checker function
    int i;

    for(i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;

    printf("Enter a number \n");
    scanf("%d", &a);
    if(a == 1 || a == 2){
        printf("Yes \n");
    }
    else
    {
        if(isPrime(a) == 0){
            printf("No \n");
        }
        else
            printf("Yes  \n");
    }


    return 0;
}
