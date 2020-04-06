void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l = A.size();
    
    vector<int> p;
    
    for(int i=0; i<l; i++) 
    {
        p.push_back(A[A[i]]);
    }
    
    A = p; 
    
}

    for(int i=0; i<A.size(); i++ )
    {
        // A[i] = (A[i] % l) + (A[A[i]] * l) ;
        A[i] += (A[A[i]]%A.size())*A.size();
        
        // encoding two x & y by x = x + (y%n)*n... using modulo to get back original x 
        // while iternating whole array
    }
    
    for( int i = 0; i<A.size(); i++)
    {
        A[i] /= A.size(); // decoding the array to get back y in place of x 
    }
    
    // O(1) for space complexity