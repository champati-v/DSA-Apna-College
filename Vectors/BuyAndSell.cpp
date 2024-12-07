#include<iostream>
#include<vector>

//best time to buy and sell stock

using namespace std;

int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            else if(prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
        }
        return profit;
    }

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);

    cout<<"The maximum profit is: "<<result<<endl;

    return 0;
}