#include<stdio.h>

int main(){
    float angle1,angle2,angle3;

    printf("Enter the First angle:");
    scanf("%f",&angle1);

    printf("Enter the Second angle:");
    scanf("%f",&angle2);

    angle3 = 180 - (angle1 + angle2);

    if(angle3>0){
        printf("The angle is :%.2f \n",angle3);

    }else{
        printf("The sum is less 180 ");
    }
    return 0;
}