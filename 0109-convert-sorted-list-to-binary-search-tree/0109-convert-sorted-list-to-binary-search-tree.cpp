class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> values;
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }
        return buildTree(values, 0, values.size() - 1);
    }
private:
    TreeNode* buildTree(const vector<int>& values, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        int mid = left + (right - left) / 2; 
        TreeNode* root = new TreeNode(values[mid]);
        root->left = buildTree(values, left, mid - 1);
        root->right = buildTree(values, mid + 1, right);
        return root;
    }
};