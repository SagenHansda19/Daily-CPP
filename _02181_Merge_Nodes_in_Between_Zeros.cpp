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

ListNode* createLL(vector<int>& a){
     ListNode* head = new ListNode(a[0]);
     ListNode* mover = head;
     for(int i = 1; i < a.size(); i++){
          ListNode* temp = new ListNode(a[i]);
          mover->next = temp;
          mover = temp;
     }
     return head;
}

class Solution {
public:
     ListNode* mergeNodes(ListNode* head) {
          ListNode* temp = head->next;
          ListNode* ans = new ListNode(0);
          ListNode* anstemp = ans;
          int sum = 0;
          while(temp != nullptr){
               if(temp->val != 0){
                    sum += temp->val;
               }
               else if(temp->val == 0){
                    ListNode* an = new ListNode(sum);
                    anstemp->next = an;
                    anstemp = anstemp->next;
                    sum = 0;
               }
               temp = temp->next;
          }
          return ans->next;
     }
};

int main(){
     Solution sol;
     vector<int> a;
     int val;
     while(cin >> val){
          a.push_back(val);
          if(cin.get() == '\n') break;
     }
     ListNode* head = createLL(a);
     ListNode* ans = sol.mergeNodes(head);
     ListNode* temp = ans;
     while(temp != nullptr){
          cout<<temp->val<<" ";
          temp = temp->next;
     }
     cout<<endl;
}