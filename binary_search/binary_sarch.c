// C programm to implement recursive binary search
#include <stdio.h>


// A recursive binary function. It return given _x_ in range arr[l..size]
// otherwise it return -1, what means find nothing
int binary_search(int array[], int l__, int size, int number){
	
	if ( size >= l__ ){
		int mid = l__ + (size - 1) / 2;
		if ( array[mid] == number ) {
			return mid;
		}

		if ( array[mid] > number ){
			return binary_search(array, l__, mid - 1, number);
		}
		
		//if ( array[mid] < number ){
		return binary_search(array, mid + 1, size, number);
		//}
	
	}

	return -1;
} 

void print_from_user(){
	int array[100];
	int size_numbers;
	int start_ = 0;
	int find_value;
	printf("Print size of array\n");
	scanf("%d", &size_numbers);
	printf("Alright.. Print %d consecutive values! \n", size_numbers);
	for (int i = 0; i < size_numbers; i++){
		scanf("%d", &array[i]);
	}
	printf("Type value to type ");
	scanf("%d", &find_value);
	
	int result = binary_search(array, start_, size_numbers , find_value);	
	(result == -1) ? printf("I find nothing!\n") : 
			printf("Element on position -> %d\n", result );	
}

// A iterative (with while loop) function
int binarySearch(int array[], int start_point, int array_size, int find_number){
	
	while ( start_point <= array_size ) {
		int middle = start_point + ( array_size - start_point ) / 2;

		if ( array[middle] == find_number ){
			return middle;
		} 
		if ( array[middle] < find_number ) {
			start_point = middle + 1;
		}
		else
			array_size = middle - 1;
		
	}
	return -1;
}

int main(void){
	int array[] = { 2, 3, 4, 10, 40 };
	int size_numbers = sizeof(array) / sizeof(array[0]);
	int find_number = 10;
	int l = 0;
	int result = binarySearch(array, l, size_numbers - 1, find_number);	
	//(result == -1) ? printf("Find nothing\n") :
	//		printf("Element in pos -> %d\n", result);
	
	printf("%ld", sizeof(array[0]));
	return 0;
}
