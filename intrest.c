#include<stdio.h>

int main(){
    float p, r, t, intrest;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest:");
    scanf("%f", &r);
    printf("Enter time in years:");
    scanf("%f", &t);
    intrest = calculate_simple_intrest(p, r, t);
    printf("Simple Intrest is: %.2f\n", intrest);
    return 0;
}

float calculate_simple_intrest(float principal, float rate, float time){
    return (principal * rate * time) / 100;
}