#include <stdio.h>
#include <stdbool.h>

int main(){

//Single Dimensional Array

int num[]={1,2,3,4,5,6,7,8};

int n=sizeof(num)/sizeof(num[0]);
 

for(int i=0;i<n;i++){
  printf("%d", num[i]);
}

//Multidimensional Array


int arr[2][3]={{1,2,3},{4,5,6}};


printf("\n%d", arr[0][1]);


printf("\n\n");

int i,j;

for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d", arr[i][j]);
    }
}


    return 0;
}