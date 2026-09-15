class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        

         int str = 1;
        int last = arr.size() - 2;

        while (str <= last) {

            int mid = str + (last - str) / 2;

            if (arr[mid] > arr[mid + 1]) {
             
                last = mid - 1;
            }
            else {
               
                str = mid + 1;
            }
        }

        return str;
    }
};