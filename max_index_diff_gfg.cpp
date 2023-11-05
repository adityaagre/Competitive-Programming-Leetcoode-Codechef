// https://practice.geeksforgeeks.org/batch/dsa-sp-gfg-pccoe/track/DSASP-Arrays/problem/maximum-index-1587115620
/*
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
 
*/
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        if(N==1)
        {
            return 0;
        }
        int a[N];
        a[0] = A[0];
        for(int i = 1; i<N; i++)
        {
            if (A[i] < a[i-1])
            {
                a[i] = A[i];
            }
            
            else
            {
                a[i] = a[i-1];
            }
        }
        
        int b[N];
        b[N-1] = A[N-1];
        
        for(int i = N-2; i>=0; i--)
        {
            if(A[i] > b[i+1])
            {
                b[i] = A[i];
            }
            else
            {
                b[i] = b[i+1];
            }
        }
        
        
        
        int p1=0;
        int p2=0;
        int ans = -1;
        
        while(p1<N && p2<N)
        {
            if(a[p1] <= b[p2])
            {
                if (ans < p2-p1)
                {
                    ans = p2-p1;
                }
                p2++;
            }
            else
            {
                p1++;
            }
        }
        
        return ans;
        
        
        
        
        
    }
};
