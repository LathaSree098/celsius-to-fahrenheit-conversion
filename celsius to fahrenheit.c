#include <stdio.h>
int main() 
{
    float fahrenheit,celsius;
    celsius=printf("enter value: ");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("Temperature in farhreneit : %.2f",fahrenheit);
    
}
