/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>
char removeSpaces(char *str) {
	int i = 0, pos, count = 0;
	if (str == NULL)
		return '\0';
	if (str[0] == '\0')
		return NULL;
	for (i = 0; str[i] != '\0'; i++){
		count++;
		if (str[i] == ' '){

			for (i; str[i] == ' '; i++);
			if (str[i] != '\0'){
				count--;
				pos = count;
				for (pos; str[i] != '\0'&&str[i] != ' '; i++){
					str[pos] = str[i];
					pos++;
					count++;
				}
			}
			if (str[i] == '\0'){
				//pos++;
				str[pos] = '\0';
			}
			i--;
		}
	}
	return '1';
}