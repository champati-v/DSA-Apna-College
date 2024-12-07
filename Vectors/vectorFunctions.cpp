#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;

    //vector functions
    //size
    cout<<vec.size()<<endl;

    //push_back
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    for(int value : vec){
        cout<< value <<endl;
    }
    cout<< "After push_back, size: "<<vec.size()<<endl;

    //pop_back
    vec.pop_back();
    for(int value : vec){
        cout<<value<<endl;
    }

    cout<< "After pop_back, size: "<<vec.size()<<endl;

    //front and back
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    //at
    cout<< vec.at(1)<<endl;
    return 0;
}