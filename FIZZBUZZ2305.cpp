// https://www.codechef.com/problems/FIZZBUZZ2305
#include<iostream>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
     for(int test=0; test<tests; test++)
     {
         int n;
         cin>>n;
         
         if(n==1)
         {
             
             cout<<"Bob"<<endl;
             
         }
         
         else if(n%2 == 0)
         {
             cout<<"Bob"<<endl;
         }
         
         else
         {
             cout<<"Alice"<<endl;
         }
     }
}