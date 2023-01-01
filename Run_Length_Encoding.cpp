//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  //Your code here 

  int n=src.length();

  string ans="";

  int cnt=0;

  for(int i=0;i<n;i++){

      

      cnt++;

      if(src[i]!=src[i+1])

      {

          ans+=src[i];

          ans+=to_string(cnt);

          cnt=0;

      }

      

  }

  return ans;
}     
 
