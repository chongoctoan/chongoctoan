# include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(int i=0;i<n; i++){
		printf("\n a[%d]=",i);
		scanf("%d", &a[i]);
		
	}
	for(int i=0;i<n;i++){
		
		
		for(int j=i+1;j<n-1;j++){
			if(a[i]%2!=0&&a[i]>a[j]){
				int temp =a[i];
				a[i]=a[j];
				a[j]= temp;
			}
			
		}
		printf("%d	", a[i]);				
		}
}
