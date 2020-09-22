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

int main(int argc, char **argv){
	char sentence[] = "Meet me at the park at eleven am";
	int len_sentence = strlen(sentence);
	char *key;
	int ci;
	int al;
	
	if (argc != 2){
		return 0;
	}

	key = argv[1];
	
	for (int i = 0, j = 0, len_key = strlen(key); i < len_sentence; ++i)
	{	
		if (isalpha(sentence[i])){
			//printf("%c", key[j]); //print sentence like a key
			al = 97;
			if (isupper(sentence[i])){
				al = 65;
			}
			ci = ((sentence[i]-al)+(tolower(key[j])-97)) % 26 + al; //cipher
			j = (j+1) % len_key;
			printf("%c", ci);
		}
		else{
			printf("%c", sentence[i]);
		}
	}
	printf("\n");
	print_array(sentence, len_sentence);
	printf("\n");

	
	
}