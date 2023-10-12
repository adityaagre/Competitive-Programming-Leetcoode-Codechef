#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests;
    cin>>tests;
    
    for(int test = 0; test<tests; test++)
    {
        int a1,a2,a3, b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        
        vector<int> A;
        A.push_back(a1);
        A.push_back(a2);
        A.push_back(a3);
        
        int a = 0;
        
        a1 = *max_element(A.begin(), A.end());
        
        auto it1 = find(A.begin(), A.end(),
                   a1);
                   
        if (it1 != A.end()) {
        A.erase(it1);}
        
        a2 = *max_element(A.begin(), A.end());
        
        auto it2 = find(A.begin(), A.end(),
                   a2);
                   
        if (it2 != A.end()) {
        A.erase(it2);}
        
        
        a3 = *max_element(A.begin(), A.end());
        
        auto it3 = find(A.begin(), A.end(),
                   a3);
                   
        if (it3 != A.end()) {
        A.erase(it3);
    }
    
    a = 100*a1 + 10*a2 + a3;
    
    //cout<<a1<<a2<<a3;
        
        

        
        
        int b = 0;
        
        A.push_back(b1);
        A.push_back(b2);
        A.push_back(b3);
        
        a1 = *max_element(A.begin(), A.end());
        
        auto it12 = find(A.begin(), A.end(),
                   a1);
                   
        if (it12 != A.end()) {
        A.erase(it12);}
        
        a2 = *max_element(A.begin(), A.end());
        
        auto it22 = find(A.begin(), A.end(),
                   a2);
                   
        if (it22 != A.end()) {
        A.erase(it22);}
        
        
        a3 = *max_element(A.begin(), A.end());
        
        auto it32 = find(A.begin(), A.end(),
                   a3);
                   
        if (it3 != A.end()) {
        A.erase(it32);
    }
    
    b = 100*a1 + 10*a2 + a3;
    
    //cout<<a<<b<<endl;
    
    if(a>b)
    {
        cout<<"Alice"<<endl;
    }
    else if(a==b)
    {
        cout<<"Tie"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }
    

        
        
        
        
        
      
        
        

        
        
        
    
       
        
        //cout<<a<<b<<endl;
    }
}