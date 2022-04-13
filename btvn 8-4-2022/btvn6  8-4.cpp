#include<stdio.h>
#include<iostream>
int main(){
	int n; printf("nhap n ="); scanf("%d",&n);
	bool kt = true;
	while(n!=0){
		if((n%10)%2==0){
			kt=false;
			break; 
		}
		n/=10; 
	}
		if(kt==true){
			printf("KQ la le : yes "); 
		}else{
			printf("KQ co so chan : no"); 
		} 
} 
