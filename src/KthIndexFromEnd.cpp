/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include <stdio.h>
char KthIndexFromEnd(char *str, int K) {

	int i;

	if (K < 0 || str == '\0' || str == NULL){
		return '\0';
	}
	for (i = 0; str[i] != '\0'; i++);

	if (K >= i){
		return '\0';
	}
	else{
		i--;

		return str[i - K];
	}
}