#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 34, 23, 15, 45};
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
  
    for(int i= 0; i<5; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout<<endl<<"The smallest value is " << smallest << endl;
    cout<<endl<<"The largest value is " << largest << endl;
    return 0;
}
