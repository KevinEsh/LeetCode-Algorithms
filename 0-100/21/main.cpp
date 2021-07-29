//Definition for singly-linked list.
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *head, *tail, *rehead, *temp;

        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;

        if (l1->val < l2->val)
        {
            head = l1;   // point to the lowest head
            tail = l1;   // save the same lowest head unmodified
            rehead = l2; // save the other head for comparing
        }
        else
        {
            head = l2;
            tail = l2;
            rehead = l1;
        }

        while (head->next && rehead)
        {
            if (head->next->val > rehead->val)
            { // merge head and retail but swap retail to the head->next
                temp = head->next;
                head->next = rehead;
                rehead = temp;
            }
            // move the head to the next position
            head = head->next;
        }

        // merge next with the rest rehead in case the rehead's list is larger than head's
        head->next = rehead;

        return tail;
    }
};