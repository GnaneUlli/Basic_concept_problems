#include<stdio.h>
int main(){
    /* The main aim of this program is to convert given distance which is in 
    kilometers into differnt parametrs of distance */
    float km, m, cm, ft, inch;
    /* In this I declared neccesary variables to store given 
    input and to print required data */
    
    printf("Enter the distance in kilo meters ");
    
    scanf("%f",&km);
    /* storing of  Kilometers in km variable */
    
    m = km * 1000;
    /* we know that kilometers can be converted into 
    meters by multiplying kilometers and thousand */
    
    printf("Distance in meters = %f\n",m);
    
    cm = 100 * m;
    /* 1m = 100cm */
    
    printf("Distance in centimeters = %f\n",cm);
    
    inch = cm / 2.54;
    /* inches can be calculated by dividing centimetrs by 2.54 */
   
    printf("Distance in inches = %f\n",inch);
    
    ft = inch/12;
    /* 1inch = 12ft */
    printf("Distance in feets = %f\n",ft);
    
}
