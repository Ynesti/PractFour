#define DEC_BASE 10
#include <stdio.h>
int main() {
//987 = 9*100+8*10+7
//987*10 = 7
//987%10
//98
//98%10
//Set number
	 int number = 987;
	 int copyNumber = number;
	 int digit0;
	 int digit1;
	 int digit2;
	 int sumDigits = 0;
//Analyse number: give digits
	 digit0 = copyNumber%DEC_BASE;
	 copyNumber /=DEC_BASE;
//Calculate sum of digits
	 digit1 = copyNumber%DEC_BASE; 
	 digit2 = copyNumber/DEC_BASE; 
	 sumDigits = digit0 + digit1 + digit2;
//print result.
	 printf ("Sum digits of number %d is: %d\n", number, sumDigits);
	 return  0;
}
