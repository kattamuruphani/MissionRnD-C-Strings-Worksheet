/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal){
	float x = number;
	int flag = 0;
	int count = 0;
	int temp;
	int i = 0;
	if (number < 0){
		flag = 1;
		for (i; x <= -1; x /= 10, i++){


		}

		number *= -1;
	}
	else{
		for (i; x >= 1; x /= 10, i++);
	}
	count = i;
	i--;
	temp = number;
	for (; i >= 0; i--){
		str[i] = '0' + (temp % 10);
		temp /= 10;
	}
	i = count;

	if (afterdecimal > 0){
		str[count] = '.';
		count++;
		i++;

		for (; i < count + afterdecimal; i++){
			number = (number * 10);
			temp = number;
			temp %= 10;
			str[i] = '0' + temp;
		}
	}
	str[i] = '\0';
	if (flag == 1){

		for (; i >= 0; i--){
			str[i + 1] = str[i];
		}

		i++;
		str[i] = '-';



	}




}
