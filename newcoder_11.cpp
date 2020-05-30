/* 输入一个链表，输出该链表中倒数第k个结点。 */
#include <iostream>
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
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
    {
        if(pListHead == NULL)
            return NULL;
         ListNode *end = pListHead;
        ListNode *fort = pListHead;
        while (k != 0 && end != NULL)
        {
            end = end->next;
            k--;
        }
        if(k != 0)
        {
            return nullptr;
        }
        while (end != NULL)
        {
            end = end->next;
            fort = fort->next;
        }
        //cout << fort->val<<endl;
        return fort;
    }
};