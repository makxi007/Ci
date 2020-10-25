// Buble Sort algorithm implementation
#include <stdio.h>

// Implimentation with only for loop
void buble_sort(int array[], int size){
	
	
	for (int i = 0; i < size - 1; ++i){
		for (int j = i + 1; j < size - i - 1; ++j){
			if (array[j] > array[j+1]){
				int number = array[j];
				array[j] = array[j+1];
				array[i] = number;	
			}
		}
	}

	for (int n = 0; n < size; ++n){
		printf("%d; ", array[n]);
	}
	printf("\n");
}

// Buble sort with do..while loop
void buble_sort_do_while(int array[], int size){
	int counter, temp, i;
	do{
		counter = 0;
		for (i = 0; i < size - 1; ++i){
			if (array[i] > array[i+1]){
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;	
				counter++;
			}
		}

	}while (counter > 0);			

	for (i = 0; i < size; ++i){
		printf("%d; ", array[i]);
		
		}
	printf("\n");


}

int main(void){
	int array[] = {101,100,1,3,5,6,2,1,5,8,10};
	int size_of_array = sizeof(array) / sizeof(array[0]);

	buble_sort_do_while(array, size_of_array);
}
