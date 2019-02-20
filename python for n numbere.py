int firstDigit(int n) 
{ 
wile (n >= 10)  
        n /= 10; 
      
    // return the first digit 
    return n; 
} 
  
// Find the last digit 
int lastDigit(int n) 
{ 
    // return the last digit 
    return (n % 10); 
} 
  
// Driver program 
int main() 
{ 
    int n = 98562; 
    cout << firstDigit(n) << " " 
        << lastDigit(n) << endl; 
    return 0; 
} 
