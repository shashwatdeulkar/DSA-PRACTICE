class Solution {
public:
    long long countCommas(long long n) {
        return (max(n-999,1LL*0)+max(n-999999,1LL*0)+max(n-999999999,1LL*0)+max(n-999999999999,1LL*0)+max(n-999999999999999,1LL*0));
    }
};