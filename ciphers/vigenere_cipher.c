#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

void print_array(char array[], int length){
	for (int i = 0; i < length; ++i)
	{
		printf("%c", array[i]);
	}
}

int main(void){
	char sentence[] = "cubik Hello";
	int len_sentence = strlen(sentence);
	char sentence2[len_sentence];
	char key[] = "zero";
	int len_key = strlen(key);
	int ci;
	
	for (int i = 0; i < len_sentence; ++i)
	{
		if (isalpha(sentence[i])){
			
			sentence2[i] = key[i%len_key];
 		}
 		else{
 			sentence2[i] = 32;
 		}
 		//ci = (sentence[i] + key[i] - 65 ) % 26 + 65;		
	}

	print_array(sentence2, len_sentence);
	printf("\n");


	/* Print key in alhabetic order 
	char temp;
	int i, j;
	for (i = 0; i < key_legnth-1; ++i)
	{
		for (j = i + 1; j < key_legnth; ++j)
		{
		if (key[i] > key[j]){
				temp = key[i];
				key[i] = key[j];
				key[j] = temp;
			}
		}
	}
	print_array(key, 5);
	*/

	
}