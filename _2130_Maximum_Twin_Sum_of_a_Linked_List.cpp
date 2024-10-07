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
     ListNode* reverse(ListNode* head){
          ListNode* curr = head, *prev = nullptr, *next;
          while(curr != nullptr){
               next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = next;
          }
          return prev;
     }
public:
     int pairSum(ListNode* head) {
          ListNode* temp = head;
          int s = 0, ans = INT_MIN;
          while(temp != NULL){
               s++;
               temp = temp->next;
          }
          ListNode* rev = head;
          for(int i = 0; i < s / 2; i++) rev = rev->next;
          rev = reverse(rev);
          for(int i = 0; i < s / 2; i++){
               int sum = rev->val + head->val;
               ans = max(ans, sum);
               rev = rev->next;
               head = head->next;
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
     ListNode* head = createLinkedList(a1);
     cout<<sol.pairSum(head);
     cout<<endl;
}