int main() {
    /* In this program, we declare variables fahrenheit and celsius 
    to store the input temperature in Fahrenheit and 
    the converted temperature in Celsius, respectively.*/
    
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    
    printf("Enter temperature in Fahrenheit: ");
    /*  we use the scanf function to read the 
    input temperature from the keyboard 
    and store it in the fahrenheit variable. */
    
    scanf("%f", &fahrenheit);

    /* To convert Fahrenheit to Celsius, we use the formula (F - 32) * 5 / 9,
    where F is the temperature in Fahrenheit.
    We apply this formula and store the result in the celsius variable. */
    
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the converted temperature
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
