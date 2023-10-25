/*
https://www.codechef.com/START105D/problems/TIES

Problem
Believe nothing you hear, and only one half that you see
On a Halloween evening, young Tim embarks on a candy-filled quest with his friends, dressed as ghouls and witches.
There are 
N
N friends, initially the 
i
i-th of them has 
A
i
A 
i
​	
  candies.

To truly savor the spooky spirit, Tim wishes for everyone to have an equal number of candies.
To achieve this, he is armed with a magical operation which is as follows:

First, Tim chooses two integers 
i
i and 
j
j (
1
≤
i
,
j
≤
N
1≤i,j≤N), denoting the indices of two of his friends.
Next, he chooses an integer 
k
k that's at least 
1
1, while also satisfying 
2
k
≤
A
i
2 
k
 ≤A 
i
​	
 .
That is, the inequality 
2
≤
2
k
≤
A
i
2≤2 
k
 ≤A 
i
​	
  should hold.
Finally, Tim takes away 
2
k
2 
k
  candies from friend 
i
i and gives them to the friend 
j
j.
That is, their candy counts change to 
(
A
i
−
2
k
)
(A 
i
​	
 −2 
k
 ) and 
(
A
j
+
2
k
)
(A 
j
​	
 +2 
k
 ) respectively.
Determine whether all of Tim's friends can have an equal number of candies in the end, after some (possibly zero) operations are performed.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer 
N
N — the number of friends.
The next line contains 
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
  — the initial number of candies each friend has.
Output Format
For each test case output the answer on a new line — "Yes" (without quotes) if it is possible to perform operations such that in the end all friends have same number of candies, and "No" (without quotes) otherwise.
Each letter of the output may be printed in either uppercase or lowercase, i.e, "Yes", "YES", and "yEs" will all be treated as equivalent.

Constraints
1
≤
T
≤
1
0
3
1≤T≤10 
3
 
1
≤
N
≤
1
0
5
1≤N≤10 
5
 
1
≤
A
i
≤
1
0
3
1≤A 
i
​	
 ≤10 
3
 
The sum of 
N
N over all test cases does not exceed 
3
⋅
1
0
5
3⋅10 
5
 


*/

#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test < tests; test++)
    {
        int n;
        cin>>n;
        
        int a[n];
        
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        
        bool smooth = true;
        
        int rem = (a[0]) % 2;
        
        int total = 0;
        
        for(int i = 0; i<n; i++)
        {
            if((a[i])%2 != rem)
            {
                smooth = false;
                break;
                
            }
            
            else
            {
                total += a[i];
            }
        }
        
        if(smooth == false)
        {
            cout<<"No"<<endl;
        }
        
        else
        {
            
            if(total % n == 0)
            {
                int div = total / n;
                if(div%2 == rem)
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
                cout<<"No"<<endl;
            }
        }
        
        
        
        
    }
}