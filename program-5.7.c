#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("Enter the number of a :- ");
	scanf("%d",&a);
	printf("Enter the number of b :- ");
	scanf("%d",&b);
	printf("Enter the number of c :- ");
	scanf("%d",&c);
	printf("Enter the number of d :- ");
	scanf("%d",&d);
	printf("Enter the number of e :- ");
	scanf("%d",&e);
	
	
	if(a < b){
		if(a < c){
			if(a < d){
				if(a < e){
					printf("a is minimum");
				}else{
					printf("e is minimum");
				}
				
			}else{
				printf("d is minimum");
			}
			
		}else{
			printf("c is minimum");
		}
		
		
	}
	else{
		if(b < c){
			if(b < d){
				if(b < e){
					printf("b is minimum");
				}else{
					printf("e is minimum");
				}
				
			}else{
				printf("d is minimum");
			}
			
		}else{
			if(c < d){
				if(c < e){
					printf("c is minimum");
				}else{
					printf("e is minimum");
				}
			}else{
				if(d < e){
					printf("d is minimum");
				}else{
					printf("e is minimum");
				}
			}
			
		}
		
	}
		
}
