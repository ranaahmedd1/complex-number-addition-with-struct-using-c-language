#include <stdio.h>

typedef struct nmber{
int img;
int real;
}number;
void main(){
number num1;
number num2;
printf("enter the real and imaginary part of 1st number\n");
scanf("%d\n%d",&num1.real,&num1.img);

printf("enter the real and imaginary part of 2nd number\n");
scanf("%d\n%d",&num2.real,&num2.img);

printf("the sum: %d + %di",num2.real+num1.real,num1.img+num2.img);

}
