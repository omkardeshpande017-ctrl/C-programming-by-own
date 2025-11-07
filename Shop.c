#include<stdio.h>

int main(){

    int money,isopen;
    printf("plese enter your money:");
    scanf("%d",&money);
    
    printf("is the shop open(1 for yes/0 for no):");
    scanf("%d",&isopen);

    if (money>=10 && isopen==1){
        printf("you can buy the item\n");

    }else{
        printf("you cannot buy the item\n");
     
        return 0;


    }
    }