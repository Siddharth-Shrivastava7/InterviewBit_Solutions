int isPalindrome(int A) { 
    
    if ( A< 0 ) return false;
    
    if (A<=9) return true;
    
    string str = to_string(A) ;
    
    int l;
    
    l = str.length() ; 
    
    for ( int i = 0; i < l/2 ; i++) 
    {
        if ( str[i] != str[l-1-i]) return false; 
    } 
    
    return true;
 }