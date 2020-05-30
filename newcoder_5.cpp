/* 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和
中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。 */

#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *Tree(vector<int> pre, vector<int> vin, int font, int end, int mid)
{
    TreeNode *node = new TreeNode(pre[font]);
    if (mid != font)
    {
       // node->left = Tree(pre, vin, font + 1, mid);
    }
    node->left = nullptr;
    if (mid != end)
    {
        //node->right = Tree(pre, vin, mid + 1, end);
    }
    node->right = nullptr;
    return node;
}

TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
    if (pre.size() == 0)
        return 0;
    int mid = 0;
    while (pre[0] != vin[mid])
    {
        mid++;
    }
    return Tree(pre, vin, 0, pre.size() - 1, mid);
}


TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
    int pLen = pre.size();
    int vLen = vin.size();
    if (pLen == 0 || vLen == 0)
        return NULL;
    return btBinaryTree(pre, vin, 0, pLen - 1, 0, vLen - 1);
}
TreeNode *btBinaryTree(vector<int> pre, vector<int> vin, int pre_start, int pre_end, int vin_start, int vin_end)
{
    TreeNode *Node = new TreeNode(pre[pre_start]);
    Node->left = NULL;
    Node->right = NULL;
    if (pre_start == pre_end)
        return Node;
    int root = 0;
    for (root = vin_start; root < vin_end; ++root)
    {
        if (pre[pre_start] == vin[root])
            break;
    }

    int leftLen = root - vin_start;
    int rightLen = vin_end - root;

    if (leftLen > 0)
    {
        Node->left = btBinaryTree(pre, vin, pre_start + 1, pre_start + leftLen, vin_start, root - 1);
    }
    if (rightLen > 0)
    {
        Node->right = btBinaryTree(pre, vin, pre_start + leftLen + 1, pre_end, root + 1, vin_end);
    }
    return Node;
}