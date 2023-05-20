#include <stdio.h>

int main( ){
    
    int basic_salary,allowance,rent,gross_salary;
    /* Here I declared all the necessary variables 
    for requirement of calculating gross salary 
    using the given basic salary */
    
    printf("Enter Basic salary ");
    
    scanf("%d",&basic_salary);
    /* In the above line I stored the input basic salary in the 
    basic_salary variable using & (This operator is used to store the given input into the variable)
    */
    
    allowance=(40*basic_salary)/100;
    /* Calucating allowance which is 40% of the basic salary*/
    
    printf("Allowance = %d\n",allowance);
    /* Calculating rent which is 20% of the basic salary */
    
    rent=(20*basic_salary)/100;
    
    printf("Rent = %d\n",rent);
    /* Calculating the gross_salary which is the combination of basic_salary, allowance and rent
    */
    gross_salary=basic_salary + allowance + rent;
    
    printf("Ramesh gross_salary = %d\n",gross_salary);

}
/* In the above program I used only int data types for the 
round figures If we want exact salary with decimal values 
we can use float data type */

