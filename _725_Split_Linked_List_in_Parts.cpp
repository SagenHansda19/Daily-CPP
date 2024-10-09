#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode* next) : val(x), next(next) {}
};
ListNode* createLinkedList(vector<int>& arr) {
     if (arr.empty()) return nullptr;
     ListNode* head = new ListNode(arr[0]);
     ListNode* current = head;
     for (int i = 1; i < arr.size(); ++i) {
          current->next = new ListNode(arr[i]);
          current = current->next;
     }
     return head;
}

class Solution {
public:
     vector<ListNode*> splitListToParts(ListNode* head, int k) {
          vector<ListNode*> ans(k);
          ListNode* temp = head;
          int l = 0;
          while(temp){
               l++;
               temp = temp->next;
          }
          int part = l / k;
          int rem = l % k;
          temp = head;
          ListNode* prev = temp;
          for(int i = 0; i < k; i++){
               ListNode* newp = temp;
               int currsz = part;
               if(rem > 0){
                    rem--;
                    currsz++;
               }
               int j = 0;
               while(j < currsz){
                    prev = temp;
                    if(temp != nullptr) temp = temp->next;
                    j++;
               }
               if(prev != nullptr) prev->next = nullptr;
               ans[i] = newp;
          }
          return ans;
     }
};

int main(){
     Solution sol;
     vector<int> a1;
     int val;
     while(cin>>val){
          a1.push_back(val);
          if(cin.get() == '\n') break;
     }
     int k;
     cin>>k;
     ListNode* head = createLinkedList(a1);
     vector<ListNode*> ans(k);
     ans = sol.splitListToParts(head, k);
     ListNode* temp = head;
     // while(temp != nullptr){
     //      cout<<temp->val<<" ";
     //      temp = temp->next;
     // }
     cout<<endl;
}