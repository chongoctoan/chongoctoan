#include<stdio.h>
 int main(){
 	int n;printf("nhap n =");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	int x;printf("nhap x =");scanf("%d",&x);
	int max=a[0]; 
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			 
		} 
	}
	printf("%d",max); 
	int max2=max;
	for(int i=0;i<n;i++){
		if(a[i]<max){
			max2=a[i];
			break; 
	}
		for(int i=0;i<n;i++){
			if(a[i]<max2 &&a[i]>max){
				max2=a[i]; 
			} 
		} 
	}
 	max2<max; 
	printf("so gan lon nhat: %d\n",max2) ;
 }

