#include<stdio.h>
int main(){
	int n;printf("nhap n =");scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);scanf("%d",&a[i]);	 
	}
	int count =0; // dem so duong lien tiep 
	int max=0; //so luot lien tiep nhieu nhat 
	
	for(int i=0;i<n;i++){
		if(a[i]>0){
			count++;
			if(count > max){
				max= count; 
			} 
		}else{
			count = 0; 
		} 
	} 
 	printf("so duong lien tiep nhieu nhat la : %d", max); 
} 
