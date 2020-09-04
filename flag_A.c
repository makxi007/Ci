#include <stdio.h>

void printStr(char str[]){
	printf("%s", str);
}

int main(void){
	char str[] = "*********_________________________________________\n";
	for (int i=0;i<13;i++){

		if (i>=1 && i<=6){
			printStr(str);
		}
		else{
		for(int j=0;j<50;j++){
			printf("_");
		}
		printf("\n");
	}
	}
}