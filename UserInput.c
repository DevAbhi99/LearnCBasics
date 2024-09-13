//Code for voting eligibility checker


#include <stdio.h>

int main(){


int age;

printf("Enter age:\n");

scanf("%d", &age);

if(age<0){
    printf("\n\nInvalid input!");
}
else{
    if(age>=18){
        printf("\n\nYou can vote!");
    }
    else{
        printf("\n\nYou cannot vote!");
    }
}

    return 0;
}