#include "stdlib.h"
#include "string.h"
#include "stdio.h"
 
#define SIZE 80

char* delSpaces(char *arr) {
    char* nArr = (char*)malloc(SIZE);
    int k = 0;
    int i = 0;
    for(; arr[i] == ' '; i++);
    for(int j = i; arr[j] != '\0'; j++) {
        for(;arr[i] == ' ' && arr[i] != '\0'; i++){
            if(arr[i-1] != ' '){
                nArr[k] = ' ';
                k++;
            }
        }
        for(; arr[i] != ' ' && arr[i] != '\0'; i++){
            nArr[k] = arr[i];
            k++;
        }

    }
    if ((int)nArr[k-1] == 10)
    {
        nArr[k-1] = '\0';    }
    return nArr;
}
 
int main(int argc, char ** argv) {        
    char arr[SIZE];
    fgets(arr, SIZE, stdin);
    char *newArr = delSpaces(arr);

    printf("RESULT: %s", newArr);
    free(newArr);
    printf("\n");

    return 0;   
}
