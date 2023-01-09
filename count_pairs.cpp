//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
          unordered_map<int , int>m;
          int ans=0;
          for(int i=0;i<n;i++){
              int val = k-arr[i];
              if(m[val]){
                  ans+=m[val];
              }
              m[arr[i]]++;
          }
          return ans;
    }
};
