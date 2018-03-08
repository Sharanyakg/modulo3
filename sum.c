#include<stdio.h>
int main(){
int product=1,i,num,j;
printf("enter number\n"):
scanf("%d",&num);
while(num!=0){
j=num%10;
product=product*j;
num=num/10;
}
printf("product of entered number is %d",product);

}
