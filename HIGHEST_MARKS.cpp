#include <iostream>
using namespace std;
void printKMax(int arr[], int N, int K)
{
    int j, max;
 
    for (int i = 0; i <= N - K; i++) {
        max = arr[i];
 
        for (j = 1; j < K; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
        
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	    }
	    int K;
	    cin>>K;
	   
	    printKMax(arr, N, K);
	}
	return 0;
}
