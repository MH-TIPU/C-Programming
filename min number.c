#include<stdio.h>

int min(int a, int b){

    if(a<b){
        return a;
    }
    else
        return b;

}

int main()
{
    int a,b;
    printf("Enter a number \n");
    scanf("%d", &a);

    printf("Enter another number \n");
    scanf("%d", &b);

    printf("\nmin is : %d\n", min(a,b));

    return 0;
}
