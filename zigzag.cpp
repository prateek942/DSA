//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
            for(int i=1;i<n;i+=2){

            if(i>0 && i<n-1)
            {
                int a,b,c;

                a=arr[i-1];

                b=arr[i];

                c=arr[i+1];

                if(b>a && b>c)

                continue;
                if(a>b || c>b){
                    if(a>c)
                    swap(arr[i],arr[i-1]);
                    else
                    swap(arr[i],arr[i+1]);
                }

            }

        }

        

        if(n&1)

        return ;

        

                int a,b;

                a=arr[n-1];

                b=arr[n-2];

                if(a<b)

                swap(arr[n-1],arr[n-2]);

    
    }
};

//{ Driver Code Starts.

bool isZigzag(int arr[], int n){
    int f=1;
    
    for(int i=1; i<n; i++){
        if(f){
            if(arr[i-1]>arr[i]) return 0;
        }
        else{
            if(arr[i-1]<arr[i]) return 0;
        }
        f=f^1;
    }
    
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        bool check=1;
        check=isZigzag(arr,n);
        
        if(check) cout<<"1\n";
        else cout<<"0\n";
        
    }
    return 0;
}

// } Driver Code Ends
