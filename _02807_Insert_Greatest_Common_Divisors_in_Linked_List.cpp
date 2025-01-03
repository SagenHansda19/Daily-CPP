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
     // ListNode(int x, ListNode  next) : val(x), next(next) {}
};
 
class Solution {
public:
     ListNode* insertGreatestCommonDivisors(ListNode* head) {
          if(head == nullptr || head->next == nullptr) return head;
          ListNode* node1 = head;
          ListNode* node2 = head->next;
          while(node2 != nullptr){
               int gcdval = calcgcd(node1->val, node2->val);
               ListNode* gcdnode = new ListNode(gcdval);
               node1->next = gcdnode;
               gcdnode->next = node2;
               node1 = node2;
               node2 = node2->next;
          }
          return head;
     }
private:
     int calcgcd(int a, int b){
          while(b != 0){
               int temp = b;
               b = a % b;
               a = temp;
          }
          return a;
     }
};

int main(){
     ListNode* head = new ListNode(18);
     head->next = new ListNode(6);
     head->next->next = new ListNode(10);
     head->next->next->next = new ListNode(3);
     Solution sol;
     head = sol.insertGreatestCommonDivisors(head);
     ListNode* temp = head;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
}