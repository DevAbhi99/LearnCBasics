//Data types and ways to print them

//int (prints integer value) = "%d"
//double (prints double value) = "%lf"
//float (prints float value) = "%f"
//char (prints char value) = "%c"


#include <stdio.h>

int main(){

printf("%d",100); //int
printf("\n%.3lf",100.999); //double (taking upto 3 decimal places)
printf("\n%.3f",100.999f); //float (taking upto 3 decimal places)
printf("\n%c",'z'); //char
printf("\n%d", 'a'); //converting char value into its equivalent ascii value



    return 0;
}