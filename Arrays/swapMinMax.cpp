#include<iostream>
using namespace std;

int swapMinMax(int arr[],int size){
    int max = INT16_MIN, min = INT16_MAX, minInedx = 0, maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            maxIndex = i;
        }

        if(arr[i]<min){
            min = arr[i];
            minInedx = i;
        }
        
    }

    swap(arr[minInedx], arr[maxIndex]);
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    swapMinMax(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}