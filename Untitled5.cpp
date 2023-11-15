#include<stdio.h>
int main(){
	int n;
	printf("so phan tu có trong array?");
	scanf("%d",&n) ;
	int Numbers[n];
	for(int i=0; i<n ;i++) {
		printf("Number[i] %d",i) ;
		scanf("%d", &Numbers[i]); 
	}
	for(int i =0; i<n ; i++){
		printf("array có cac phan tu %d", Numbers [i]) ;
	} 
} 
