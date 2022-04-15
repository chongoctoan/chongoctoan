#include<stdio.h>
int main(){
	int n;printf("nhap n =");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]",i);scanf("%d",&a[i]);
	}
	int c=0;int x;scanf("%d",&x); 
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("x co trong day so %d ",x);
			break; 
		}else{
			if(a[i]!=x){
				printf("x khong co trong day so %d",x);
				break; 
			} 
		} 
		
		 
	}
}
