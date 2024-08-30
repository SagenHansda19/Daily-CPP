#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich = 0;
        for(int i = 0; i < accounts.size(); i++){       //nums.size = rows
            int sum = 0;
            for(int j = 0; j < accounts[0].size(); j++){        //nums[0].size = columns
                sum += accounts[i][j];
                rich = max(rich, sum);
            }
        }
        return rich;
    }
};

int main(){
     Solution sol;
     vector<vector<int>> accounts {{1,2,3},{3,2,1}};
     cout << sol.maximumWealth(accounts) << endl;
     return 0;
}