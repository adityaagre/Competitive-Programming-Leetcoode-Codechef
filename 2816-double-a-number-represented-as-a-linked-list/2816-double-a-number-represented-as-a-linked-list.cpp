/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    //stack<int> digits;
    ListNode* doubleIt(ListNode* head) 
    {
        if(head->val >= 5)
        {
            ListNode* new_node;
            new_node = new ListNode(0,head);
            head = new_node;
        }
        pair<int, ListNode*> p1 = f(head);
        
       
        return p1.second;
    }
    
    pair<int, ListNode*> f(ListNode* head)
    {
        if(head == NULL)
        {
            return {0,NULL};
        }
        else
        {
            pair<int, ListNode*> p1 = f(head->next);
            
            int ans = 2*(head->val) + p1.first;
            int dig = ans%10;
            int carry = ans/10;
            
            ListNode* new_node;
            new_node = new ListNode(dig);
            new_node->next = p1.second;
            
            return {carry, new_node};
            
            
        }
            
    }
    
    /*
    
    int f(ListNode* head)
    {
        if(head == NULL)
        {
            return 0;
        }
        
        else
        {
            int ans = 2*(head->val) + f(head->next);
            int dig = ans%10;
            digits.push(dig);
            
            return ans/10;
        }
    }
    
    */
    
    
};