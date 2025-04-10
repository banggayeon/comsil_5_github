#include<stdio.h>
int mult(int a, int b){
	printf("%d x %d = %d\n", a, b, a*b);
}
int main(void){
	int i,j;
	printf("Test Program\n");
	for(i = 2; i < 10 ; i++){
		for(j = 2; j < 10; j++){
			mult(i,j);
		}
		printf("\n");
	}
}

