
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *tail = l1;

        while (true)
        {
            int sum = l1->val + l2->val + carry;
            l1->val = sum % 10;
            carry = sum / 10;
            if (!l1->next)
                break;
            if (!l2->next)
                break;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l2->next)
        {
            l1->next = l2->next;
        }

        while (carry)
        {
            if (!l1->next)
            {
                l1->next = new ListNode();
            }
            int sum = l1->next->val + carry;
            l1->next->val = sum % 10;
            carry = sum / 10;
            l1 = l1->next;
        }

        return tail;
    }
};