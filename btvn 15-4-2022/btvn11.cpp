#include<stdio.h>
 int main(){
 	int n;printf("nhap n =");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	int x;printf("nhap x =");scanf("%d",&x);
	int max=x-a[0];
	for(int i=0;i<n;i++){
		if(x-a[i]<max){
			max=x-a[i]; 
		} 
	}
	int b=x-max;
	printf("gia tri xa nhat cua x la %d \n",b); 
 } 
