class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        unordered_map<int,int> mp;
        int ans =0;
        for(int i=0;i<n;i++)
        ans+=mp[arr[i]%k]++;
        
        return ans;
        
    }
};
