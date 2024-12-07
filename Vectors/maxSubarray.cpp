#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxSum = INT16_MIN;

    for (int st = 0; st < n; st++)
    {
        int cSum = 0;
        for (int end = st; end < n; end++)
        {
            cSum+=arr[end]; 
            maxSum = max(cSum, maxSum);  
        }
    } 

    cout<<"Maximum sum = "<<maxSum<<endl;

    return 0;
}