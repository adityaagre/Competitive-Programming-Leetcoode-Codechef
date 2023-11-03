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

// This code doesnt work for bigger numbers.
// so, we wont actually compute the sum this time.
// just the digits in the sum

/*
class Solution {
public:
    
    stack<int> reverse;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        
        int n1 = rec_traverse(l1,0);
        
        
        int n2 = rec_traverse(l2,0);
        
        // cout<<n1<<n2<<endl;
        
        int ans = n1+n2;
        
        //cout<<ans<<endl;
        
        if(ans == 0)
        {
            
            reverse.push(0);
            
        }
        
        else
        {
            while(ans>0)
            {
                reverse.push(ans%10);
                ans = ans/10;
            }
            
        }
        
        
        
        
        return create_list(NULL);
        
        
        
    }
    
    int rec_traverse(ListNode* l_node, int depth)
    {
        int place_val = (int)(pow(10, depth) + 0.5);
        int value = (l_node->val)*place_val;
        //cout<<value<<endl;
        int total = value;
        depth++;
        
        if(l_node->next)
        {
            total += rec_traverse(l_node->next, depth);
        }
        
        //cout<<total<<endl;
        
        return total;
    }
    
    ListNode* create_list(ListNode* next)
    {
        if(reverse.empty() == false)
        {
            int last_dig = reverse.top();
            reverse.pop();
            
            
            //ListNode* new_node(last_dig, next);
            ListNode* new_node;
            new_node = new ListNode(last_dig, next);
            return create_list(new_node);
            
        }
        
        else
        {
            return next;
        }
    }
};

*/

class Solution {
public:
    
    stack<int> reverse;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        sum(l1,l2);
        return create_list(NULL);  
    }
    
    void sum(ListNode* p1, ListNode* p2)
    {
        
        int local_sum;
        int carry=0;
        
        while((p1 != NULL) && (p2 != NULL))
        {
            local_sum = p1->val + p2->val + carry;
            if(local_sum > 9)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            reverse.push(local_sum%10);
            p1 = p1->next;
            p2=p2->next;
        }
        
        while((p1 == NULL) && (p2 != NULL))
        {
            
            local_sum = p2->val + carry;
            if(local_sum > 9)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            reverse.push(local_sum%10);
            p2=p2->next;
        }
        
        while((p2 == NULL) && (p1 != NULL))
        {
            
            local_sum = p1->val + carry;
            if(local_sum > 9)
            {
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            reverse.push(local_sum%10);
            p1=p1->next;
        }
        
        if(carry)
        {
            reverse.push(carry);
        }
        
        
            
        }
        
       
    
    

    
    ListNode* create_list(ListNode* next)
    {
        if(reverse.empty() == false)
        {
            int last_dig = reverse.top();
            reverse.pop();
            
            
            //ListNode* new_node(last_dig, next);
            ListNode* new_node;
            new_node = new ListNode(last_dig, next);
            return create_list(new_node);
            
        }
        
        else
        {
            return next;
        }
    }
};