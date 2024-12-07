#include<iostream>
using namespace std;

int add(int arr[], int size){
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    
    return result;
}

int multiply(int arr[], int size){
    int result = 1; 

    for (int i = 0; i < size; i++)
    {
        result *= arr[i];
    }

    return result;
} 

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int sum = add(arr, size);
    int mul = multiply(arr, size);

    cout<<"The sum is: "<<sum<<endl<<"The multiplication is: "<<mul;

    return 0;
}