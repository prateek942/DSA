//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
      bool isValid(string x)
  {
      int n=x.size();

      if(n==0 ||n>3 || stoi(x)>255 || (x[0]=='0' && n>1))
       return false;
       
      return true; 
  }
    vector<string> genIp(string &s) {
        // Your code here
         vector<string>ans;
       
       int n=s.size();
       
       for(int i=0;i<n-3;i++)
       {
           for(int j=i+1;j<n-2;j++)
           {
               for(int k=j+1;k<n-1;k++)
               {
                   string a=s.substr(0,i+1);
                   string b=s.substr(i+1,j-i);
                   string c=s.substr(j+1,k-j);
                   string d=s.substr(k+1,n-1-k);
                   
                 if(isValid(a) && isValid(b) && isValid(c) && isValid(d))
                   {
                     string s1=a+"."+b+"."+c+"."+d;
                     ans.push_back(s1);
                   }
               }   
           }
       }
    
    
     if(ans.empty())
     {
         ans.push_back("-1");
     }
     
     else
      return ans;
    
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends
