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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    ListNode *head;
    int l = 0;
    Solution(ListNode *head)
    {
        this->head = head;
        ListNode *temp = head;
        while (temp)
        {
            l++;
            temp = temp->next;
        }
    }

    /** Returns a random node's value. */
    int getRandom()
    {
        int random = 1 + (rand() % this->l);
        ListNode *temp = this->head;
        int x = 1;
        while (x < random)
        {
            temp = temp->next;
            x++;
        }
        return temp->val;
    }
};