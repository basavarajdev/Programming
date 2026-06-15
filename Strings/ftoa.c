
/* C Program to implement of ftoa() */

#include <stdio.h>
#include <math.h>
# include <stdlib.h>

/* Reverses a string str of length len */
void reverse(char *str, int len) {

	int i = 0, j = len - 1, temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

/* Converts a given integer x to string str */
int intToStr(int x, char str[], int d) {

	int i = 0;
	while(x) {
		str[i++] = (x % 10) + '0';
		x = x/10;
	}
	while (i < d) 
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}

/* Convert floating point number to string */
void ftoa(float num, char *res, int afterpoint) {

	int ipart = (int)num;
	float fpart = num - (float)ipart;

	int i = intToStr(ipart, res, 0);

	if (afterpoint != 0) {
		res[i] = '.';
		fpart = fpart * pow(10, afterpoint);
		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}

int main(void) {
	char res[20];
	float num = 233.007;

	ftoa(num, res, 4);
	printf("%s \n", res);

	return 0;
}

