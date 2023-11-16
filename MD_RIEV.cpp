//https://www.codechef.com/problems/MD_RIEV
/*
A palindromic prime number is a positive integer that is both a prime number (meaning it has exactly two divisors: 
1
1 and itself) and a palindrome in base 
10
10 (meaning it reads the same both backwards and forwards).
Leading zeros are not considered when determining if a number is a palindrome (so 
20
20 is not a palindrome, even though it can be written as 
020
020).

You are given an integer 
�
N.
Consider the first 
�
N palindromic prime numbers. How many of them have an even number of digits, and how many of them have an odd number of digits
*/

#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test<tests; test++)
    {
        int n;
        cin>>n;
        
        if(n<5)
        {
            cout<<0<<" "<<n<<endl;
        }
        else
        {
            cout<<1<<" "<<n-1<<endl;
        }
        
        
    }
}