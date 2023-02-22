//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        int left[n];
        int right[n];
        left[0]=a[0];
        
        for(int i =1; i < n ; i++){
            left[i] = max(left[i-1],a[i]);
        }
        right[n-1]=a[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            right[i]=max(right[i+1],a[i]);
        }
       long long ans = 0 ;
        for(int i = 0 ; i<n ;i++){
            ans = ans + (min(left[i] , right[i]) - a [i]); 
        }
        return  ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends