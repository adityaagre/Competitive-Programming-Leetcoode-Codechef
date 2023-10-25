/*

https://www.codechef.com/START105D/problems/DUPLET

Problem
Be afraid, be very afraid.
On Halloween, Chef is in a somber mood.
Chef has an odd integer 
N
N that he has to decode.
To do so, Chef would like to find a pair of integers 
x
x and 
y
y (
0
≤
x
,
y
<
2
30
0≤x,y<2 
30
 ) such that:

(
x
∣
y
)
⋅
(
x
⊕
y
)
=
N
(x∣y)⋅(x⊕y)=N
Help Chef find any such pair!
It can be proved that a valid pair always exists.

Here, 
∣
∣ represents the bitwise OR operation, and 
⊕
⊕ represents the bitwise XOR operation.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
The first and only line of each test case contains a single odd integer 
N
N.
Output Format
For each test case, output on a new line two space-separated integers 
x
x and 
y
y such that 
0
≤
x
,
y
<
2
30
0≤x,y<2 
30
 , and
(
x
∣
y
)
⋅
(
x
⊕
y
)
=
N
(x∣y)⋅(x⊕y)=N
If multiple solutions exist, you may print any of them.
It can be proved that a solution always exists under the given constraints.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
1
0
9
1≤N≤10 
9
 
N
N is odd.

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
        cout<<n<<" "<<n-1<<endl;
    }
}