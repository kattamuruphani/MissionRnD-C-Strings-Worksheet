/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i = len - 1;
	int count = 0;
	int j;
	char temp, temp1;
	for (j = 0; i >= len / 2; i--){
		temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		j++;
	}
	j = 0;
	for (i = 0;; i++){
		count++;
		if (input[i] == ' ' || input[i] == '\0'&&input[j] != ' '){
			temp = i;
			i--;
			for (j; j < temp - count / 2; j++, i--){
				temp1 = input[i];
				input[i] = input[j];
				input[j] = temp1;
			}
			i = temp;
			j = i + 1;
			count = 0;
		}
		if (input[i] == '\0')
			break;
	}

}
