class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>freq;
        int n = nums.size();

        for(auto ch:nums){
            freq[ch]++;
        }
        for(auto maj:freq){
            if(maj.second > n/2){
                return maj.first;
            }
        }
        return 0;
    }
};