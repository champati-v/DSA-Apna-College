#include<iostream>
#include<vector>

using namespace std;

int missingNum(vector<int>& num){
    int size = num.size();
    int sum = size*(size+1)/2;
    int total = 0;

    for(int value:num){
        total += value;
    }

    return sum-total;
}

int main(){
    vector<int> num = {3,0,1};
    int ans = missingNum(num);

    cout<<"The missing Number is: "<<ans<<endl;
    return 0;
}