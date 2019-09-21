#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
   
    int cents, first = 0, second = 0, third = 0, fourth = 0;
    float dollars ;
    
    dollars = get_float("enter dollars");//ask user to enter value 
    while (dollars < 0) 
    {
        dollars = get_int("enter dollars");
    }
    
    //printf("b%f\n" ,dollars);
    cents = round(dollars * 100);

    printf("by cents %i\n ", cents);
    
    int i = cents ;//99
    
    while (i >= 25)
    {
        first++ ;
        i -= 25;
    }
    
    int n = i ;//24
    
    while (n >= 10)
    {
        second++ ;
        n -= 10;
    }
    
    
    int b = n ;//4
    
    while (b >= 5)
    {
        third++ ;
        b -= 5;
    }
    
    
    int c = b ;
    
    while (c >= 1)
    {
        fourth++ ;
        c -= 1;
    }
    
  
    int sum = first + second + third + fourth;

    printf("%i\n", sum);//masseg that show how many coins will pay
   
}
