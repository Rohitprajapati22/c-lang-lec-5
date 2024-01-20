#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the number of a :- ");
	scanf("%d",&a);
	printf("Enter the number of b :- ");
	scanf("%d",&b);
	printf("Enter the number of c :- ");
	scanf("%d",&c);
	printf("Enter the number of d :- ");
	scanf("%d",&d);
	
	if(a < b){
		if(a < c){
			if(a < d){
				printf("a is minimum");
			}else{
				printf("d is minimum");
			}
		}
		else{
			printf("c is minimum");
		}
	}
	else{
		if(b < c){
			if(b < d){
				printf("b is minimum");
			}else{
				printf("d is minimum");
			}
		}else{
			if(c < d){
			printf("c is minimum");
		}else{
			printf("d is minimum");
		}
	}
		
		
	}
}
