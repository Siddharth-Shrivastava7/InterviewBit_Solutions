vector<int> int_vector(int n)
{
    vector<int> res; 
    while(n != 0)
    {
        res.push_back(n%10);
        n = n / 10; 
    }
    
    if( res.size() == 0)
    {
        res.push_back(0);
    }
    reverse(res.begin(), res.end());
    
    return res;
}

int recurse(const vector<int> &A, const vector<int> &C, int B, int pos)
{
    if ( B==0 ) return 0;
    
    int l = A.size();
    int i = 0, count = 0;  
    
    
    for (i = 0; i<l; i++)
    {
        if ( A[i]>= C[pos])
        {
            break;
        }
        count++; 
    }
    
    if ( pos == 0 && A[0] == 0 && B > 1) 
    {
        count--;
    }
    
    int res = count * pow(l, B-1); 
    
    if ( i == l || A[i] != C[pos]) return res; 
    
    return res + recurse(A,C,B-1,pos+1);
}


int Solution::solve(vector<int>& A, int B, int C) {
    
    vector<int> digit_c = int_vector(C);
    
    int l = digit_c.size();
    
    int d = A.size();
    
    int count = 0; 

    if ( B > l || d == 0)
    {
        return 0;   
    }

    if ( B == l )
    {
        int res = recurse(A, digit_c, B, 0);
        return res;
    }

    if ( B < l )
    {   
        if ( A[0] == 0 && B > 1)
        {   
            return  (d-1) * pow(d,B-1) ;
        }
        
        return pow(d,B) ;
        
    }
}









