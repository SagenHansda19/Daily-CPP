#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<vector<int>> adj;
    vector<int> dist;
    int n;

    int find(int start, int parent, int time, int bob, vector<int>& amount) {
        int income = 0, child = INT_MIN;
        if(start == bob) dist[start] = 0;
        else dist[start] = n;
        for(int a : adj[start]) {
            if(a != parent) {
                child = max(child, find(a, start, time + 1, bob, amount));
                dist[start] = min(dist[start], dist[a] + 1);
            }
        }
        if(dist[start] > time) income += amount[start];
        else if(dist[start] == time) income += amount[start] / 2;
        if(child == INT_MIN) return income;
        else return income + child;
    }
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        n = amount.size();
        adj.resize(n, vector<int>());
        for(vector<int> a : edges) {
            adj[a[0]].push_back(a[1]);
            adj[a[1]].push_back(a[0]);
        }
        dist.resize(n);
        return find(0, 0, 0, bob, amount);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

