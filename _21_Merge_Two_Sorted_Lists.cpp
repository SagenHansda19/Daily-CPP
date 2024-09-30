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
     ListNode* mergeTwoLists1(ListNode* list1, ListNode* list2) {
          vector<int> ans;
          while(list1 != nullptr){
               ans.push_back(list1->val);
               list1 = list1->next;
          }
          while(list2 != nullptr){
               ans.push_back(list2->val);
               list2 = list2->next;
          }
          sort(ans.begin(), ans.end());
          ListNode* temp = new ListNode(-1);
          ListNode* head = temp;
          for(int i = 0; i < ans.size(); i++){
               temp->next = new ListNode(ans[i]);
               temp = temp->next;
          }
          head = head->next;
          return head;
     }

     ListNode* mergeTwoLists2(ListNode* list1, ListNode* list2) {
          if(list1 == nullptr) return list2;
          if(list2 == nullptr) return list1;
          if(list1->val <= list2->val){
               list1->next = mergeTwoLists2(list1->next, list2);
               return list1;
          }
          else{
               list2->next = mergeTwoLists2(list1, list2->next);
               return list2;
          }
     }
};

// class Solution{
//      public:
//      ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//           if(list1 == nullptr) return list2;
//           if(list2 == nullptr) return list1;
//           if(list1->val <= list2->val){
//                list1->next = mergeTwoLists(list1->next, list2);
//                return list1;
//           }
//           else{
//                list2->next = mergeTwoLists(list1, list2->next);
//                return list2;
//           }
//      }
// };



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
     ListNode* list1 = createLinkedList(a1);
     ListNode* list2 = createLinkedList(a2); 
     ListNode* head = sol.mergeTwoLists2(list1, list2);
     ListNode* temp = head;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}