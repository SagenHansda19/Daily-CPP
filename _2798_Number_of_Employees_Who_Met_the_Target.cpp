#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int result = 0;
        for(int i = 0; i < hours.size(); i++){
            if(hours[i] >= target){
                result++;
            }
        }
        return result;
    }
};

int main(){
     Solution sol;
     vector<int> hours= {0,1,2,3,4};
     int target = 2;
     cout<<sol.numberOfEmployeesWhoMetTarget(hours, target);
     return 0;
}