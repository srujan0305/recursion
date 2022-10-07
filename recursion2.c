#include<stdio.h>
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
void main()  
{  
  int m;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &m);   
   
  fact = factorial(m);  
  printf("Factorial of %d is %ld\n", m, fact);  
  return 0;  
}  