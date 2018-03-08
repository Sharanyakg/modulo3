#include<stdio.h>
int main(){
int product=0,i,num,j;
printf("enter number\n"):
scanf("%d",&num);
while(i!=0){
j=i%10;
product=product*j;
i=i/10;
}
printf("product of entered number is %d",product);

}
