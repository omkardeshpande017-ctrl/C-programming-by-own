#include<stdio.h>

int main (){
    int n, product =1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i=1; i<=n; ++i){
        product *= i;
    }
    {
        printf("product =%d", product);
        return 0;

    }
    }
