#include<stdio.h>

int max(int a, int b){

    if(a<b){
        return b;
    }
    else
        return a;

}

int main()
{
    int a,b;
    printf("Enter a number \n");
    scanf("%d", &a);

    printf("Enter another number \n");
    scanf("%d", &b);

    printf("\nmax is : %d\n", max(a,b));

    return 0;
}
