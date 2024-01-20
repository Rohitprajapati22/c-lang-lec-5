#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the number of a :- ");
	scanf("%d",&a);
	printf("Enter the number of b :- ");
	scanf("%d",&b);
	printf("Enter the number of c :- ");
	scanf("%d",&c);
	
	if(a < b){
		if(a < c){
			printf("a is minimum");	
		}
		else{
			printf("c is minimum");
		}
		
	}
	else{
		if(b < c){
			printf("b is minimum");	
		}
		else{
			printf("c is minimum");
		}
	}
	
}
