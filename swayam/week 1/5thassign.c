#include<stdio.h>
int main(){
        int radius;
    float pi=3.14;
    printf("enter the radius of the circle\n");
    scanf("%d",&radius);
    printf("the circumference is given as  :%f\n ",2*pi*radius);
    printf("the area of the circle is  :%f\n  ",pi*radius*radius);
    return 0;
}