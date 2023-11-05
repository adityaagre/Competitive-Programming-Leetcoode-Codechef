//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    
    bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
        return(desc_n_rotated(arr,num) || asc_n_rotated(arr,num));
        
    }
   
   
    bool desc_n_rotated(int arr[],int num)
    {
        int max1 = arr[0];
        int min1 = arr[num-1];
        
        int i=1;
        
        while(arr[i] <= arr[i-1] && i<num)
        {
            i++;
            
        }
        
        if(i==num)
        {
            return false;
        }
        
        else
        {
            i=i+1;
            if(min1>=max1)
            {
                while(arr[i] <= arr[i-1] && i<num)
                {
                    i++;
                }
            }
            
            else
            {
                return false;
            }
            if(i != num)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
    
    
    
    
    
    
    
    
    bool asc_n_rotated(int arr[], int num)
    {
        int min1 = arr[0];
        int max1 = arr[num-1];
        
        int i=1;
        
        while(arr[i] > arr[i-1] && i<num)
        {
            
            i++;
        }
        
        if(i==num)
        {
            return false;
        }
        
        else
        {
            if(max1 <= min1)
            {
                i=i+1;
                while(arr[i] >= arr[i-1] && i<num)
                {
                    i++;
                }
            }
            else
            {
                return false;
            }
            
            if(i != num)
            {
                return false;
            }
            
            else
            {
                return true;
            }
        }
        
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}
// } Driver Code Ends
