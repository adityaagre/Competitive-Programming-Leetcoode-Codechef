/*

https://www.codechef.com/START104D/problems/SANTACHOC
Santa and Chocolates


Problem
This Christmas, Santa has a list of 
N
N children for gift distribution.
Initially, he decides to gift 
A
i
A 
i
​	
  chocolates to the 
i
t
h
i 
th
  child. However, children are not happy with this distribution.
He then decides to redistribute the chocolates in a way, such that:
Each child has at least one chocolate;
The difference of chocolates between any pair of children is not more than 
K
K.
Find whether such distribution is possible.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
N
N and 
K
K — the number of children and the maximum difference of chocolates between any two children.
The next line of each test case contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​	
 ,A 
2
​	
 ,…,A 
N
​	
 , denoting the initial distribution of chocolates.
Output Format
For each test case, output on a new line, YES, if Chef can redistribute the chocolates in the above mentioned way. Otherwise, output NO.
Note that you may print each character in uppercase or lowercase. For example, the strings NO, no, No, and nO are considered the same.

*/



#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test<tests; test++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int total = 0;
        
        for (int i = 0; i<n; i++)
        {
            cin>>a[i]; 
        }
        
        for (int i = 0; i<n; i++)
        {
            
            total += a[i];
           
        }
        
        total = total - n;
        
        
        if(total < 0)
        {
            cout<<"No"<<endl;
        }
        else if(total == 0)
        {
            cout<<"Yes"<<endl;
        }
        else if(k == 0)
        {
            if(total%n == 0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
    
    }
}