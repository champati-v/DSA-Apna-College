#include<iostream>
using namespace std;

void channgeArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
}

int main(){
    int arr[] = {1,2,3};
    int size = 3;

    channgeArr(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}