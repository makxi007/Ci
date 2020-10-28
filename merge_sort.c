#include <stdio.h>

int merge_sorting(int array[], int array_size, int start, int end);
int merge_arrays(int array[], int array_size, int start_1, int end_1, int start_2, int end_2);

int merge_sorting(int array[], int array_size, int start, int end){
	int middle;
	if ( array_size < 2 ){
		for (int i = 0; i < array_size; ++i){
			printf( "%d", array[i] );
		}
		printf("\n");
	}
	if ( end > start ) {
		middle = end + (start - end) / 2;

		merge_sorting(array, array_size, start, middle);
		merge_sorting(array, array_size, middle+1, end);
 		
		merge_arrays(array, array_size, start, middle, middle+1, end);
	}
	printf("\n");
	return 0;
	
}

int merge_arrays(int array[], int array_size, int start_1, int end_1, int start_2, int end_2){
	int start = start_1 + end_1;
	int end = start_2 + end_2;
	int middle = (end + start) / 2;
	int i = start, j = end, c = 0 ;
	int array2[array_size];
	
	while (start <= i && j <= end){
		if ( array[i] <= array[j] ) {
			array2[c] = array[i];
			i++;
		}
		else{
			array2[c] = array[j];
			j++;
		}
		c++;
	}

	for (int h = 0; h < c; ++h){
		array[start + h] = array2[h];		
	}
	return 0;

}


int main(void){
	int array[] = { 2, 4, 1, 7, 3, 10, 11, 5, 6, 8, 9 };
	int array_size = sizeof(array) / sizeof(array[0]);
	printf("%d\n", array_size);
	int start_ = 0;
	int end_ = array_size;
	merge_sorting(array, array_size, start_, end_);
	return 0;
}
