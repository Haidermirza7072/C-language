#include<stdio.h>

int main(){
    float basesalary,hras,das,tas;
    float hraAmount,daAmount,taAmount,grossalary;

    printf("Enter base salary:");
    scanf("%f",&basesalary);

    printf("Enter HRA precentage:");
    scanf("%f",&hras);

    printf("Enter DA percentage:");
    scanf("%f",&das);

    printf("Enter TA percentage");
    scanf("%f",&tas);

    hraAmount = (hras/100) * basesalary;
    daAmount = (das/100) * basesalary;
    taAmount = (tas/100) * basesalary;

    grossalary = basesalary + hraAmount + daAmount + taAmount;

    printf("\n Gross salary =%.2f\n",grossalary);

    return 0;

}