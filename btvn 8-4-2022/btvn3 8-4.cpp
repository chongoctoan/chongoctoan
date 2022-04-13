#include<stdio.h>
int main(){
	int n; printf("nhap n ="); scanf("%d",&n);
	
	int t=0;
	for(int i=n;i>0;i/=10){
		t+=i%10;
	}
	
		printf("tong so nguyen cua n  = %d",t);
		
	

}
