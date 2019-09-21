int convertFive(int n)
{ 
    if (n == 0) 
        return 0; 
 
    int digit = n % 10; 
    if (digit == 0) 
        digit = 5; 
  
     return convertFive(n/10)*10 +digit; 
} 
