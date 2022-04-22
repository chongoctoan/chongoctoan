#include<stdio.h>
int uocChung(int a,int b){
	if(a==b){
		return a; 
	}
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a; 
		} 
		 
	}
	return a; 
}
int boiChung(int a,int b){
	int c=a*b;
	if(a==b){
		return a; 
	}
	while(a!=b){
		if(a>b){
			a=a-b; 
		}else{
			b=b-a; 
		} 
	}
	return c/a; 
} 




int main(){
	int a ,b ;printf("nhap a,b =");scanf("%d %d",&a,&b);
	printf("UCLN la : %d\n",uocChung(a,b));
	printf("BCNN la: %d\n",boiChung(a,b)); 
} 
