#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,temp;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("\nEnter second number:");
	scanf("%d",&b);
	printf("\nEnter third number:");
	scanf("%d",&c);
	if(a>b && a>c){
		temp = a;
	}
	else if(b>a && b>c){
		temp = b;
	}
	else{
		temp = c;
	}
	printf("%d is the greatest number among all.",temp);
	getch();
}
