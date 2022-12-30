//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
        int ans=INT_MIN;

    string temp="";

    temp+=s[0];

    for(int i=1;i<s.size();i++)

    {

        int found=temp.find(s[i],0);

        if(found!=string::npos)

        {

            int n=temp.size();

            ans=max(ans,n);

            temp.erase(0,found+1);

            temp+=s[i];

        }

        else temp+=s[i];

    }

    int n=temp.size();

    if(ans>n)return ans;

    else return n;


}
