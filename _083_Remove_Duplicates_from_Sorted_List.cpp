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
     ListNode* deleteDuplicates(ListNode* head) {
          ListNode* temp = head;
          while(temp != nullptr && temp->next != nullptr){
               if(temp->val == temp->next->val){
                    temp->next = temp->next->next;
               }else{
                    temp = temp->next;
               }
          }
          return head;
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
     head = sol.deleteDuplicates(head);
     ListNode* temp = head;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}