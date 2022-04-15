#include<stdio.h>
int main(){
	int n;printf("nhap n =");scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++){
		printf("a[%d]",i);scanf("%d",&a[i]); 
	}
	int min=1000000;
	int i=0;
	for(;i<n;i++){
		if(a[i]<min){ 
			min=a[i];
			 
		}
		
	}
	
	printf("so duong nho nhat la : %d ",min);
} 
