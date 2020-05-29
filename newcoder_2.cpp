/*
    输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
*/

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(nullptr)
    {
    }
};

#include <iostream>
#include <vector>
using namespace std;

vector<int> printListFromTailToHead(ListNode *head)
{
    vector<int> i_vec;
    vector<int> i_vec_1;
    while (head != nullptr)
    {
        i_vec.push_back(head->val);
        head = head->next;
    }
    auto iter = i_vec.rbegin();
    while (iter != i_vec.rend())
    {
        i_vec_1.push_back(*iter);
        ++iter;
    }
    return i_vec_1;
}
