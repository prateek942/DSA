//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        int res=0,cnt=1;
        for(int i=1;i<size;i++){
            if(arr[res]==arr[i])
              cnt++;
              else
               cnt--;
            if(cnt==0){res=i;cnt=1;}
        }
        cnt=0;
        for(int i=0;i<size;i++)
         if(arr[res]==arr[i])
         cnt++;
         if(cnt<=size/2)
              return -1;
         
         return arr[res];
        }
    
        
    
};
