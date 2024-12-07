#include<iostream>
#include<vector>

using namespace std;

int singleNum(vector<int>& vec){
    int result = 0;
    for(int value: vec){
        result = result^value;
    }

    return result;
}

int main(){
    vector<int> vec = {1,1,2,3,3};
    
    int ans = singleNum(vec);
    cout<<"Single number is: "<<ans<<endl;

    return 0;
}