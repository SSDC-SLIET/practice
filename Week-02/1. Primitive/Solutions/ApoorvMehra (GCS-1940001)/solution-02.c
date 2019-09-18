int convertFive(int n) {
    
    int new_number = 0 , reverse = 0;
    int remainder;
    do {
        remainder = n % 10;
        if(remainder == 0)
            remainder = 5;
        new_number = new_number * 10 + remainder;
    }while((n /= 10) != 0);
    
    do {
        remainder = new_number % 10;
        reverse = reverse * 10 + remainder;
    }while((new_number /= 10) != 0);

    return reverse;
}
