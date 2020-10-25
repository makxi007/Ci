// An algorithm of implementation of selection sort in C
#include <stdio.h>

int main(void){
	int array[] = { 7, 10, 9, 3, 5, 2, 6, 4 };	
	int size = sizeof(array) / sizeof(array[0]);
	
	printf("ARRAY SIZE -> %d\n", size);
	printf("\n");
	
	for (int i = 0; i < size - 1; ++i){
		int min = i;
		for (int j = i+1; j < size; ++j){
			// check if min value more than next, then min = next
			if (array[min] > array[j]){
				min = j;
			}
		}	
		// if next more then we replace numbers
		if (min >= i){
			int number = array[min];
			array[min] = array[i];
			array[i] = number;		
		}	
	}
	
	for (int i = 0; i < size; ++i){
		printf("%d;", array[i]);
	}	
	printf("\n");
	return 0;
}
