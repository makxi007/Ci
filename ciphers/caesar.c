#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void char_in_ascii(){
	char ch;
	printf("Print character: \n");
	scanf("%c", &ch );
	printf("ASCII value of %c -> %d \n",ch,ch);
}

void get_name(){
	char user_name[10];
	printf("Input your name: \n");
	fgets(user_name, sizeof(user_name), stdin);
	printf("Name: \n");
	puts(user_name);
	
}

void print_ascii(char var[11]){
	for (int i = 0; i < 11; ++i){
		printf("%c", var[i]);
	}
	printf("\n");
	for (int i = 0; i < 11; ++i)
	{
		printf("%d", var[i]);
	}
	printf("\n");
}

void print_ceasar(char var[], int k){
	int ci;
	int ci_2;
	for (int i = 0; i < 9; ++i)
	{	
		ci_2 = var[i];
		if (ci_2 == 32){
			ci = 32;
		}
		else if (isupper(var[i])){
			ci = (var[i] + k-65) % 26 + 65;
		} else if(islower(var[i])){
			ci = (var[i] + k-97) % 26 + 97;
		} else{
			printf("Not lower and not upper\n");
		}
		printf("%c", ci);
	}
	printf("\n");
}

int main(void){
	int key = 7;
	char name[9] = "Compu ter";
	print_ceasar(name, key);

	return 0;
}