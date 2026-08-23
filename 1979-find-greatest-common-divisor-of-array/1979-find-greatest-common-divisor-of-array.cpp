class Solution {
public:

    int findgcd(int a , int b){
            if(a==0){
                return b;
            }

            return gcd(b , a%b);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
       int ans = findgcd(nums[0] , nums[n-1]);
       return ans;

    }
};