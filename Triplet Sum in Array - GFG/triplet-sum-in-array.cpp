//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        sort(a,a+n);
        for(int i = 0 ; i<n ;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = a[i] + a[j] + a[k];
                if(sum==X){
                    return 1;
                }
                else if(sum<X){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends