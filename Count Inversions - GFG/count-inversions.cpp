//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long a[] , long long int s , long long int e , long long int &count)
{
    long long int mid = s+(e-s)/2;
    long long int len1 = mid-s+1;
    long long int len2 = e-mid;

    //creating the first array of size len1
    long long int left[len1];
    //creating the second array of size len2
    long long int right[len2];;

    long long int start = s;
    for(long long int i = 0 ; i<len1 ; i++){
        left[i]=a[start++];
    }

    start = mid+1;
    for(long long int i = 0 ; i<len2 ; i++){
        right[i]=a[start++];
    }

    long long int mainindex = s;
    long long int i = 0 ;
    long long int j = 0;

    while(i<len1 && j<len2){
        if(left[i]<=right[j]){
            a[mainindex++]=left[i++];
        }
        else{
            count = count + len1 - i;
            a[mainindex++]=right[j++];

        }
    }

    while(i<len1){
        a[mainindex++]=left[i++];
    }
    while(j<len2){
        a[mainindex++]=right[j++];
    }



}


void mergesort(long long a[] , long long int s , long long int e , long long int &count){
    if(s>=e){
        return;
    }

    long long int mid = s+(e-s)/2;
    mergesort(a,s,mid,count);
    mergesort(a,mid+1,e,count);
    merge(a,s,e,count);
}



long long int inversionCount(long long arr[] , long long N){
    long long int count = 0 ;
    mergesort(arr,0,N-1,count);
    return count;
}
  


};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends