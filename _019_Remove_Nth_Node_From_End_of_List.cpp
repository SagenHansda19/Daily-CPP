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
     ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode *fast = head, *slow = head;
          for (int i = 0; i < n; i++)
               fast = fast->next;
          if (!fast)
               return head->next;
          while (fast->next)
               fast = fast->next, slow = slow->next;
          slow->next = slow->next->next;
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
     int n;
     cin>>n;
     ListNode* head = createLinkedList(a1);
     head = sol.removeNthFromEnd(head,n);
     ListNode* temp = head;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}