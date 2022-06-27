#include<stdio.h>
float calucetforce(float mass);
int main(){
    float mass ;
    printf("Enter your mass in kg\n");
    scanf("%f",     & mass);
    calucetforce(mass );
    printf("The force is %f",calucetforce(mass));

    return 0;
} float calucetforce(float mass){
    float force;
    force=mass*9.8;
    return force;
}