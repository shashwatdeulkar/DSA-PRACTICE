class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int s=0;
        int e=height.size() -1;
        int ans =0;

        int width;
        int heigh;

        while(s<e){

            width = e-s;

            heigh = min(height[e],height[s]);

            ans = max(ans , heigh * width);
            if(height[e] >height[s]){
                s++;
            }else{
                e--;
            }
        }

        return ans;

    }
};