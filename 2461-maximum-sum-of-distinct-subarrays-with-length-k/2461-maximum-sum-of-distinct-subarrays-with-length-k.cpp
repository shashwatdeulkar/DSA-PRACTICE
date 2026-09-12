class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long maxsum = 0;
        long long currsum = 0;
        unordered_set<int> set;
        
        int j = 0;

      for (int i = 0; i < nums.size(); i++) {

       
        while (set.contains(nums[i]) || set.size() == k) {
            set.erase(nums[j]);
            currsum -= nums[j];
            j++;
        }

        currsum += nums[i];
        set.insert(nums[i]);

        if (set.size() == k) {
            maxsum = max(maxsum, currsum);
        }
    }

        return maxsum;
    }
};