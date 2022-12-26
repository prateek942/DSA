class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int N)
    {
       //Your code here
       int jumps=0,res=0;
       for(int i=1; i<N; i++){
           if(arr[i-1]<arr[i]){
                jumps++;
                res=max(jumps,res);
           }
           if(arr[i]==arr[i+1] || arr[i]>arr[i+1]) jumps=0;
       }
       return res;
    }
};
