#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};


class Solution {
public:
    long long int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;

        q.push({root, 0});
        int width = 0;

        while(!q.empty()){
            int n = q.size();
            int mini = INT_MAX, maxi = INT_MIN;
            int mmin = q.front().second;

            for(int i=0; i<n; ++i){
                TreeNode* node = q.front().first;
                int x = q.front().second - mmin;

                q.pop();
                mini = min(mini, x);
                maxi = max(maxi, x);

                if(node->left) q.push({node->left, 2*x+1});
                if(node->right) q.push({node->right, 2*x+2});

            }
            width = max(width, maxi-mini+1);
        }

        return width;

    }
};

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution sol;

    int maxWidth = sol.widthOfBinaryTree(root);

    cout << maxWidth << endl;

    return 0;
}