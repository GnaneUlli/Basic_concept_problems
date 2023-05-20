#include <stdio.h>

int main() {
    
    int subject1, subject2, subject3, subject4, subject5;
    /* In this program, we declare variables subject1, subject2, subject3, subject4,
    and subject5 to store the marks obtained in each subject */
    
    //We also declare aggregate to store the total marks and percentage to store the percentage marks.
    
    float aggregate, percentage;

    // We use the printf and scanf functions to display prompts and input the marks for each subject
    printf("Enter marks for Subject 1: ");
    
    scanf("%d", &subject1);
    
    
    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);
    
    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);
    
    printf("Enter marks for Subject 4: ");
    scanf("%d", &subject4);
    
    printf("Enter marks for Subject 5: ");
    scanf("%d", &subject5);

    // we calculate the aggregate marks by adding up the marks in all subjects. 
    
    aggregate = subject1 + subject2 + subject3 + subject4 + subject5;

    /* Finally, we calculate the percentage by dividing the aggregate marks
    by the maximum marks (500 in this case) and multiplying by 100.*/
    
    percentage = (aggregate / 500) * 100;

    // Display the results
    printf("Aggregate marks: %.2f\n", aggregate);
    
    printf("Percentage marks: %.2f%%\n", percentage);
    /* The .2f format specifier is used to display the floating-point values with 
    two decimal places, and %% is used to print a literal percentage symbol. */
}

