#include <stdio.h>
#include <stdlib.h>

int main(){
    int AmountOfInts; 
    printf("How many ints would you like to allocate");
    scanf("%d", &AmountOfInts); //Get userinput. 

    //Allocate memory to use. 
    int *ptr = calloc(AmountOfInts, sizeof(int)); 

    if(ptr == NULL){
        printf("Failed to allocate memory!"); 
    }
    else{
        for (int i = 0; i < AmountOfInts; i++)
        {
            ptr[i] += i + 1; 
            printf("\n%d", ptr[i]); //The value in the array
            printf("\n%p", &ptr[i]);//The memory address of the value
        }
        //free the memory
        free(ptr); 
        //exit the program
        return 0;
    }
}
