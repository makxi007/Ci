#include <stdio.h>

int* sorting( int *array, int size ){
	for ( int i = 0; i < size - 2 ; ++i ){
		int min = i;
		for (int h = i + 1; i < size - 1; ++h ) {
			if (array[min] > array[h]){
				min = h;			
			} 
		}
		if ( min != i ) {	
			int num = array[min];
			array[min] = array[i];
			array[i] = num;
		}	
	}
	return array;
}

int main(void){
	int array[] = { 3, 5, 2, 6, 4 };	
	int size = sizeof(array) / sizeof(array[0]);
	
	printf("ARRAY SIZE -> %d\n", size);
	printf("\n");
	
	for (int i = 0; i < size - 2; i++){
		int min = i;
		for (int j = i + 1; j < size - 1; ++ j){
			if ( array[min] > array[j] )
				min = j;
		}
		if ( min != i ){
			int number = array[min];
			array[min] = array[i];
			array[i] = number;
		}
		else{
			continue;
		}
	}
		
	
	for (int i = 0; i < size; ++i){
		printf("%d;", array[i]);
	}	
	printf("\n");
	return 0;
}
