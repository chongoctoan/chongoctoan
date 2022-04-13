#include<stdio.h>
int main(){
	int a,b;
	do{
		printf("nhap a < b ="); scanf("%d%d",&a,&b);
		
		
	}while(a>b);
	int i ,c,t ;
	printf("cac so nguyen to trong khoang a va b : ");
	for(i=a+1;i<=b;i++){
		t= 1;
		
		for(c=2;c<i/2;c++){
			if(i%c==0){
				
				break;
			}
		}
		if(t==1){
			printf("%d ",i);
			
	}
	
	}
	 
	
} 
