#include <iostream> 
#include <cmath> 
#include <new>
#include <vector>

using namespace std; 

class Solution
{

public:

    vector<int> primesum(int A) { 
    
        vector <int> s;
   
            for ( int i = 2; i <=A/2; i++) 
            {   
                if ( prime(i) && prime(A-i))
                {
                    s.push_back(i); 
                    s.push_back(A-i);
                    return s;             
                }
            
            }
    }   

    bool prime( int n )
    {
        for ( int i = 2 ; i <= sqrt(n); i ++ )
        {  
            if ( n % i == 0) return false;
        }
    return true;

    }
};


int main()
{   
    int n; 
    cout<<"Enter a number";
    cin>>n; 
    vector <int> res; 
    Solution ps;
    res = ps.primesum(n);
    cout<<res[0]<<" "<<res[1];
    return 0;

}
