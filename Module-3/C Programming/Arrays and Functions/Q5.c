#include<stdio.h>
int main() {
	int a[2],i,ch;
	for(i = 0; i < 2; i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("\n1.Ascending Order \n2.Descending Order");
	printf("\nEnter your choice :");
	scanf("%d",&ch);
	if(ch == 1){
		if(a[0] > a[1]) {

			a[1] += a[0];
			a[0] = a[1] - a[0];
			a[1] -= a[0];

		}
		else {
			a[0] = a[0];
			a[1] = a[1];
		}
	}
	else if(ch == 2){
		if(a[0] > a[1]) {
			a[0] = a[0];
			a[1] = a[1];
		}
		else{

			a[1] += a[0];
			a[0] = a[1] - a[0];
			a[1] -= a[0];

		}
	}
	for(i = 0; i < 2; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
