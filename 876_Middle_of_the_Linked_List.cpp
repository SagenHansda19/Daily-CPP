#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
     ListNode* middleNode(ListNode* head) {
          ListNode* temp = head;
          int len = 1;
          while(temp != nullptr){
               temp = temp->next;
               len++;
          }
          int mid = len % 2 == 0 ? len / 2 : len / 2 + 1;
          ListNode* temp1 = head;
          for(int i = 1; i < mid ; i++){
               temp1 = temp1->next;
          }
          return temp1;
     }
};

int main(){
     ListNode* head = new ListNode(1);
     head->next = new ListNode(2);
     head->next->next = new ListNode(3);
     head->next->next->next = new ListNode(4);
     head->next->next->next->next = new ListNode(5);
     head->next->next->next->next->next = new ListNode(6);
     Solution sol;
     ListNode* mid = sol.middleNode(head);
     while(mid != nullptr){
          cout << mid->val << " ";
          mid = mid->next;
     }
     return 0;
}