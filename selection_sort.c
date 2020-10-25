// Implementation of selection sort in C-language
#include <stdio.h>


void selection(int array[], int size){
	int i, j, start_element;
	for (i = 0; i < size ; ++i){
		start_element = array[i];
		j = i;
		// In subarray
		// We move list if next less than prev
		// Move before prev more than next
		while (j > 0 && (array[j - 1] > start_element)){
			// Replace number with next			
			array[j] = array[j-1];
			// Minus one by index
			j = j - 1;
			// Prev number equil start_element
			array[j] = start_element;	
		}
	}
	
	for (i = 0; i < size; ++i){
		printf("%d;  ", array[i]);	
	}
	printf("\n");
}



int main(void){
	int array[] = {3,2,4,6,5, 1, 0 ,15, 1, 3, 3};
	int size_of_array = sizeof(array) / sizeof(array[0]);
	selection(array, size_of_array);
}
