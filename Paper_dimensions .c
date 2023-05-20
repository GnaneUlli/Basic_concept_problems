#include<stdio.h>

int main() { 
    //declare variables for width and height of paper.
    
    int width, height;
    
    //initialize width and height with dimensions of A0 paper
    width = 841;
    height = 1189;
    
    //declare a loop variable
    int i;
    //use a for loop to iterate from 0 to 8
    for(i = 0; i <= 8; i++)
    {
    //print the paper size and dimensions
    printf("A%d: %d x %d\n", i, width, height);

    //swap width and height
    int temp = width;
    width = height;
    height = temp;

    //divide width by 2 to get the next paper size
    width = width / 2;
        
    }

}
