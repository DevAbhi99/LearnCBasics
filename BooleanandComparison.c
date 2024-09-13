// We dont have default boolean data type in c for that we need to include stdbool.h 


#include <stdio.h>
#include <stdbool.h>

int main(){

bool x=true; //1=true
bool y=false; //0=false

printf("%d",x+y);


//Comparison 

int a=20;

int b=20;

printf("\n\n%d",a>=b);

return 0;
}



