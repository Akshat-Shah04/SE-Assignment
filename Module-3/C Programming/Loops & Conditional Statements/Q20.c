#include<stdio.h>
int main() {
	int i,j,k=1;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++){
			if(k<10) {
				printf("0%d ",k);
			}
			else{
				printf("%d ",k);
			}
			k++;
		}
		printf("\n");
	}

	return 0;
}

