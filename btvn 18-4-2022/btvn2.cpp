#include<stdio.h>
#include<string.h>
int main(){
	int n;printf("nhap n =");scanf("%d",&n);
	char a[n][50];
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	char x[50];printf("nhap x =");scanf("%s",x);
	int c=0;
	for(int i=0;i<n;i++){
		if(strcmp(a[i],x)==0){
			c++;
			break;
		}
		}if(c!=0){
			
			printf("x co trong mang \n ",x);
			
		}else{
			printf("x khong co trong mang \n  ",x);
			
	}
	
	
}
