//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	   long long int max_pro =INT_MIN , pro = 1;
	   
	   for(int i = 0 ; i<n ;i++){
	       pro = pro * arr[i];
	       max_pro = max(pro,max_pro);
	       if(pro==0){
	           pro=1;
	       }
	   }
	   pro = 1;
	   for(int i = n-1 ; i>0 ;i--){
	       pro = pro * arr[i];
	       max_pro = max(pro,max_pro);
	       if(pro==0){
	           pro=1;
	       }
	   }
	   
	    return max_pro;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends