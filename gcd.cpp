int gcd(int A, int B) { 
    
    for (int i = min( A,B ); i >= 1 ; i--)
    {
        if ( A==0 ) return B; 
        
        if ( B == 0) return A; 
        
        if ( (A % i == 0) && (B % i == 0))  return i;
                   
    }
}