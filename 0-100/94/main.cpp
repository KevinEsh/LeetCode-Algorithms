#include <vector>
#include <stack>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> inorder;          // solution vector
        stack<TreeNode *> stacknodes; // stack to keep track of nodes

        while (root != nullptr || !stacknodes.empty())
        {
            // from 'root' travel directly to the most left node but collect all
            // nodes on the fly
            while (root != nullptr)
            {
                stacknodes.push(root);
                root = root->left;
            }

            // Only collect the node when there is no more nodes to the left
            // That's the top node in stack. Go to the right and redo the lefty search
            root = stacknodes.top();
            stacknodes.pop();
            inorder.push_back(root->val);
            root = root->right;
        }

        return inorder;
    }
};