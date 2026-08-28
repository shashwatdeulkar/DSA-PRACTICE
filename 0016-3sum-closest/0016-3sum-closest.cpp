class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++) {

            int s = i + 1;
            int e = nums.size() - 1;

            while (s < e) {

                int sum = nums[i] + nums[s] + nums[e];

               
                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                if (sum < target) {
                    s++;
                }
                else if (sum > target) {
                    e--;
                }
                else {
                    return sum;
                }
            }
        }

        return ans;
    }
};