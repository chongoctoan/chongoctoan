#include<stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n ="); scanf("%d",&n);
	int k=0;
	
	while(n!=0){
		if(k>n%10){
			k=n%10;
			
		}
		n=n/10;
	}
	printf("so nguyen duong lon nhat = %d",k);
	
}

