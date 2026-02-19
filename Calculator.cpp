#include<stdio.h>
int main(){
	int a,b,c,d, num;
	int sum,sub,multi,divide,number;
	printf("\nWelcome in calculator project\n");
	printf("How many digits operation you want 2 or 3 or 4:");
	scanf("%d",&num);
	if(num==2){
		printf("Enter value for A:");
		scanf("%d",&a);
		printf("\nEnter value for B:");
		scanf("%d",&b);
	}
	else if(num==3){
		printf("\nEnter value for A:");
		scanf("%d",&a);
		printf("\nEnter value for B:");
		scanf("%d",&b);
		printf("\nEnter value for C:");
		scanf("%d",&c);
}
else if(num==4){
	printf("\nEnter value for A:");
	scanf("%d",&a);
	printf("\nEnter value for B:");
	scanf("%d",&b);
	printf("\nEnter value for C:");
	scanf("%d",&c);
	printf("\nEnter value for D:");
	scanf("%d",&d);
	}
	else{
		printf("\nSorry this digit in not available please try again\n ");
		}
		
		printf("\nWhich operation you want to perform\n");
		printf("for sum enter 1:");
		printf("\n for sub enter 2:");
		printf("\nfor multi enter 3:");
		printf("\nfor divide enter 4:");
		
		printf("\nEnter your number");
		scanf("%d",&number);
		switch(number)
		{
			case 1:
			if(num==2){
				sum=a+b;
				printf("sum of A and B:%d",sum);
			}
			else if(num==3){
				sum=a+b+c;
				printf("sum of A,B and C:%d",sum);
			}
			else{
				sum=a+b+c+d;
				printf("sum of A,B,C and D:%d",sum);
			}
		break;
		case2:
		if(num==2){
			sub=a-b;
			printf("sub of A and B:%d",sub);
		}
		else if(num==3){
			sub=a-b-c;
			printf("sub of A,B and C:%d",sub);
		}
		else{
			sub=a-b-c-d;
			printf("sub of A,B,C and D:%d",sub);
		}
		break;
		case 3:
		if(num==2){
		multi=a*b;
		printf("multi of A and B:%d",multi);
		}
		else if(num==3){
			multi=a*b*c;
			printf("multi of A,B and C:%d",multi);
		}
		else{
			multi=a*b*c*d;
			printf("multi of A,B,C and D:%d",multi);
		}
		break;
		case 4:
		if(num==2){
			divide=a/b;
			printf("divide A and B:%d",divide);
		}
		else if(num==3){
			divide=a/b/c;
			printf("divide A,B and C:%d",divide);
		}
		else{
			divide=a/b/c/d;
			printf("divide A,B,C and D:%d",divide);
		}
		break;
		default:
		printf("\nSorry number option is not available please try again");
		}
	
		return 0;
}
		
			
	