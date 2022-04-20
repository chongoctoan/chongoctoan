#include<stdio.h>
#include<string.h>
int main(){
	int n;printf("nhap n =");scanf("%d",&n);
	
	char a[n][20];
	
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(a[j],a[j+1])>0){
				char t[100];
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("sau khi sap xep alphabet \n");
	for(int i=0;i<n;i++){
		printf("%3s \n",a[i]);
	}
	
}
