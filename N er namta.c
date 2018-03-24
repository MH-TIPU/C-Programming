

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter a number \n");
    scanf("%d", & n);

    for(i=1; i <11; i++){
        printf("%d x %d = %d \n", n, i, i*n);
    }

    return 0;
}
