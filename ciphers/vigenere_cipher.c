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
<<<<<<< HEAD
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


=======
}	

bool Alpha(char sentence[], int len){
	char check_result[5];
	for (int i = 0; i < len; ++i)
	{
		if (isalpha(sentence[i]))
		{
			
			return true;
		}
		else{
		
			return false;
		}
	}

	
}


int main(void){
	char sentence[] = "meet me in the park at eleven am";
	int sentence_length = 32;
	char sentence2[sentence_length];
	char sentence3[sentence_length];
	char key[] = "bacon";
	int key_legnth =  strlen(key);
	int num_ci;
	int count = 0;

>>>>>>> ciphers
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

<<<<<<< HEAD
	
=======
	for (int a = 0; a < sentence_length; ++a)
	{
		char x = (sentence[a] + key[a])%26;

		x += 65;

		sentence2[a] = (char)(x);
	}
	print_array(sentence2, sentence_length);
	printf("\n");
>>>>>>> ciphers
}