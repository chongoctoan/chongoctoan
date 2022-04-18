#include<stdio.h>
int main(){
	int n; printf("nhap n ="); scanf("%d",&n);
	int a[n];
	int min=0;
	int max=0;
	for(int i=0;i<n;i++){
		printf("a[%d] ",i);scanf("%d",&a[i]);	 
	}
	for(int i=0;i<n;i++){
		if(i==0){
			min=a[i];
			max=a[i]; 
		}else if(min>a[i]){
			min=a[i]; 
		}if(max<a[i]){
			max=a[i]; 
		} 
	}
	printf("doan [a,b] %d %d ",min,max); 
	 
} 
