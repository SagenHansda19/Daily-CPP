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
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* dum = new ListNode();
          ListNode* res = dum;
          int total = 0, carry = 0;
          while(l1 || l2 || carry){
               total = carry;
               if(l1){
                    total += l1->val;
                    l1 = l1->next;
               }
               if(l2){
                    total += l2->val;
                    l2 = l2->next;
               }
               int num = total % 10;
               carry = total / 10;
               dum->next = new ListNode(num);
               dum = dum->next;
          }
          return res->next;
     }
};

int main(){
     Solution sol;
     vector<int> a1, a2;
     int val;
     while(cin>>val){
          a1.push_back(val);
          if(cin.get() == '\n') break;
     }
     while(cin>>val){
          a2.push_back(val);
          if(cin.get() == '\n') break;
     }
     ListNode* l1 = createLinkedList(a1);
     ListNode* l2 = createLinkedList(a2);
     ListNode* head = sol.addTwoNumbers(l1, l2);
     ListNode* temp = head;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}