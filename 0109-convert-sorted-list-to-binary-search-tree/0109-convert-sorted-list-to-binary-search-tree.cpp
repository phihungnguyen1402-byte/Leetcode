class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return buildTree(head, nullptr);
    }   
private:
    TreeNode* buildTree(ListNode* start, ListNode* end) {
        if (start == end) {
            return nullptr;
        }
        ListNode* slow = start;
        ListNode* fast = start;
        while (fast != end && fast->next != end) {
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode* root = new TreeNode(slow->val);
        root->left = buildTree(start, slow);
        root->right = buildTree(slow->next, end);  
        return root;
    }
};