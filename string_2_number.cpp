

int titleToNumber(string A) {
    
    int res=0, mul;
    int l;
    l = A.length();
    
    for ( int i = 0; i<l ; i++)
    {
        mul = ( int (A[i]) - 64);
        
        res = res + pow(26,l-1-i)*mul;
        
    }
    return  res;
}
