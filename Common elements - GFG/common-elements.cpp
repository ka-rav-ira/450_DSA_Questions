//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
        {
           //intialize the three pointers 
           int i = 0 , j = 0 , k = 0;
           //Intialize the vector where we will store the result
           vector<int>ans;
           
           int prev1 , prev2 ,prev3;
           prev1 = prev2 = prev3 = INT_MIN;
           
           while(i<n1 && j<n2 && k<n3){
               
               while(arr1[i]==prev1 &&i<n1)
                   i++;
               
               while(arr2[j]==prev2 &&j<n2)
                   j++;
               
               while(arr3[k]==prev3 &&k<n3)
                   k++;
               
               
               if(arr1[i]==arr2[j]&&arr2[j]==arr3[k]){
                   ans.push_back(arr1[i]);
                   prev1=arr1[i];
                   prev2=arr2[j];
                   prev3=arr3[k];
                   i++;j++;k++;
               }
               
               else if(arr1[i]<arr2[j]){
                   prev1=arr1[i];
                   i++;
               }
               
               else if(arr2[j]<arr3[k]){
                   prev2=arr2[j];
                   j++;
               }
               
                else {
                   prev3=arr3[k];
                   k++;
               }
           }
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends