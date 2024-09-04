class Solution {
public:
    double nthPersonGetsNthSeat(int n) 
    {
        double half = 0.5;
        if(n>1)
            return half;
        return n;
        
    }
};