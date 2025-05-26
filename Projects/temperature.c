#include<stdio.h>


int main(){
    float c,f;

    printf("Enter celsuis temperature:");
    scanf("%f",&c);

    f = (c*9/5) + 32;

    printf("Temperature in fahrenheit: %.2f\n",f);

    return 0;

}