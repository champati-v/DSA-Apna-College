#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int majorityElement(vector<int>& nums) {
        int maxOccur = 0;
        int element = -1;

        unordered_map<int, int> map;

        for(auto value: nums){
            map[value]++;
        }

        for(auto freq: map){
            if(freq.second > maxOccur){
                maxOccur = freq.second;
                element = freq.first;
            }
        }

        return element;
    }

int main(){
    vector<int> nums = {1,1,2,2,2,3,3};
    int maxElement  = majorityElement(nums);

    cout<<"The majority element is: "<<maxElement<<endl;

    return 0;
}