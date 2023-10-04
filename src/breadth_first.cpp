#include "tree_algorithms.h"
#include <queue>

void _breadth_first(TreeNode* root, vector<int>& answer){
if (root == nullptr) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        answer.push_back(current->data);

        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }
}

vector<int> breadth_first(TreeNode* node){
    vector<int> answer;
    _breadth_first(node, answer);

    return answer;
}
