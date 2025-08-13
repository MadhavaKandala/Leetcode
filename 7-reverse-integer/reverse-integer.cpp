class Solution {                      
public:
    int reverse(int x) {
        long rev=0;      // decleare r 
        while(x){
            long rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;            
        //  r=r*10+x%10; // find remainder and add its to r
        //  x=x/10;     // Update the value of x
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0; // check range if r is outside the range then return 0  
        return int(rev);  // if r in the 32 bit range then return r
    }
}; 


// 123

// 1.    rem = 3,   rev = 3
// 2.    rem = 2    rev = 32
// 3.    rem = 1    rev = 321;