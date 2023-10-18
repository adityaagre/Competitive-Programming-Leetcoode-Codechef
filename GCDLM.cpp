/*

https://www.codechef.com/START104D/problems/GCDLM

GCD and LCM

Problem
Alice and Bob are playing a game. They have two positive integers 
X
X and 
Y
Y.
In one operation:

First Alice would replace exactly one of the numbers with the gcd of current numbers. In words, she would select either 
X
X or 
Y
Y and replace it with 
gcd
⁡
(
X
,
Y
)
gcd(X,Y).
Then Bob would replace exactly one of the numbers with the lcm of current numbers.
Find the minimum sum of numbers they can achieve after 
K
K number of operations.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of three space-separated integers 
X
,
Y
,
X,Y, and 
K
K — denoting the initial numbers and the number of operations.
Output Format
For each test case, output on a new line, the minimum sum of numbers they can achieve after 
K
K operations.

*/


#include<iostream>
using namespace std;

int gcd_hcf_best(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd_hcf_best(b, a%b);
    }
    
}

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test<tests; test++)
    {
        int x,y,k;
        cin>>x>>y>>k;
        
        int gcd = gcd_hcf_best(x,y);
        
        if(k == 1)
        {
            
            int a_min = x;
            if(y<x)
            {
                a_min = y;
            }
            
            cout<< a_min + gcd<<endl;
        }
        
        else 
        {
            
            cout<<2*gcd<<endl;
            
        }
        
        
    }
}