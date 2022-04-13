#include<stdio.h>
int main(){
	int a,b;
	printf("nhap a , b ="); scanf("%d%d",&a,&b);
	int bc= a*b;
	
	while(a!=b){
		if(a>b){
			a= a-b; 
		}else{
			b= b-a; 
		}
		 
	}
	printf("UCLN = %d\n",a);
	printf("BCNN = %d\n", bc/a);
	 
} 
