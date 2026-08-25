class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
       vector<vector<int>> ans;
       vector<int> temp;
       
       sort(nums.begin() , nums.end());

            
      
        for(int i = 0 ; i<nums.size() ; i++){
            int s=i+1;
            int e= nums.size() -1 ;

             if (i > 0 && nums[i] == nums[i - 1]) continue;

        while(s<e){
          
                if(nums[s]+nums[e]+nums[i] < 0){

                     s++;
               }else if(nums[s]+nums[e]+nums[i] > 0){
                         e--;

                 } else {
                      ans.push_back({nums[s],nums[e],nums[i]});
                      s++;
                        e--;
                 while (s<e && nums[s] == nums[s - 1]) s++;
                  }
                     

        }
        }

        return ans;
    }
};