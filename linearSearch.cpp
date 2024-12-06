#include<iostream>
using namespace std;

int linear(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int target = 1;

    int targetIndex = linear(arr, size, target);
    if (targetIndex == -1)
    {
        cout<<endl<<"Target not found"<<endl;
    }

    else{
        cout<<endl<<"Target is found at: "<<targetIndex<<endl;
    }

    return 0;
}