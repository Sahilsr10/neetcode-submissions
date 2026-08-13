class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> ans;

        // last k elements
        for(int i = n-k; i<n; i++)
            ans.push_back(nums[i]);

        // remaining elements
        for(int i = 0; i<n-k; i++)
            ans.push_back(nums[i]);

        nums = ans;
    }
};