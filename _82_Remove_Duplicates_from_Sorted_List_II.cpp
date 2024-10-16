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
    ListNode(int x, ListNode* next) : val(x), next(next) {}
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
          if(head == NULL || head->next == NULL) return head;

          ListNode* temp = new ListNode(0, head);
          ListNode* prev = temp;
          ListNode* curr = head;
          while(curr){
               if(curr->next != NULL && curr->val == curr->next->val){
                    while(curr->next != NULL && curr->val == curr->next->val) curr = curr->next;
                    prev->next = curr->next;
               }
               else{
                    prev = curr;
               }
               curr = curr->next;
          }
          return temp->next;
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