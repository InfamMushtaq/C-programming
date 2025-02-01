#include<stdio.h>
int main(){
    int salary, gross_salary;
    printf("enter salary");
    scanf("%d",&salary);
    float da = 0.4* salary, hra = 0.2*salary;
    gross_salary = salary + da + hra;
    printf("gross_salary is %d\n",gross_salary);
    return 0;
}


