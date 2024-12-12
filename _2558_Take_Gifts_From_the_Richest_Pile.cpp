#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> heap(gifts.begin(), gifts.end());
        for(int i = 0; i < k; i++) {
            int gift = heap.top();
            heap.pop();
            heap.push(floor(sqrt(gift)));
        }
        long long rem = 0;
        while(!heap.empty()) {
            rem += heap.top();
            heap.pop();
        }
        return rem;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	Solution sol;
  	vector<int> gifts;
  	int val;
  	while(cin >> val) {
  		gifts.push_back(val);
  		if(cin.get() == '\n') break;
  	}  
  	int k; cin >> k;
  	cout << sol.pickGifts(gifts, k);
    return 0;
}
    