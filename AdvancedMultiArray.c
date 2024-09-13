#include <stdio.h>
#include <stdbool.h>

int main(){


int r,c;

printf("Enter a row\n");

scanf("%d", &r);


printf("Enter a column\n");
scanf("%d", &c);


printf("\n\nEnter datas for the matrix");

int arr[r][c];

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d", &arr[i][j]);
    }
}

//printing array

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d", arr[i][j]);
    }
}
    return 0;

}