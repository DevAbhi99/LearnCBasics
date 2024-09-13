#include <stdio.h>
#include <stdbool.h>


int main(){


char c[]="HelloBro!";

int n=sizeof(c)/sizeof(c[0]);

for(int i=0;i<n;i++){
    printf("\n%c", c[i]);
}

    return 0;
}