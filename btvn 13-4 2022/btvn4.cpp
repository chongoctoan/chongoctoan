#include<stdio.h>
int main(){
	int n;printf("nhap n = "); scanf("%d",&n);
	int a[n]; 
	for(int i=0;i<n;i++){
		printf("a[%d]",i);scanf("%d",&a[i]); 
	}
	for(int i=n-1;i<=n;i--){
		if(a[i]%2!=0){
			printf("so le cuoi cung la: %d",a[i]);
			break; 
		}else{
			if(a[i]%2==0){
				printf("khong co so le cuoi cung ");
				break; 
			} 
		} 
	} 
} 
