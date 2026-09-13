class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
          if (arr.size() < 3) {
        return false;
    }

    int n = arr.size();
    bool increasing = true;

    for (int i = 1; i < n; i++) {

    
        if (arr[i] == arr[i - 1]) {
            return false;
        }

        if (increasing) {

            if (arr[i] > arr[i - 1]) {
                continue;
            }

            
            if (i == 1) {
                return false;
            }

            
            increasing = false;
        }

        
        else {
            if (arr[i] >= arr[i - 1]) {
                return false;
            }
        }
    }

    if (increasing) {
        return false;
    }

    return true;
    }
};