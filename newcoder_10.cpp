/* 输入一个链表，反转链表后，输出新链表的表头。 */

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr)
    {
    }
};
class Solution
{
public:
    ListNode *ReverseList(ListNode *pHead)
    {
        if(pHead == nullptr)
            return pHead;
        ListNode *head = pHead;
        ListNode *next = pHead->next;
        ListNode *pre = pHead;
        while (next != nullptr)
        {
            pre->next = next->next;
            next->next = head;
            head = next;
            next = pre->next;
        }
        pHead = head;
        return pHead;
    }
};