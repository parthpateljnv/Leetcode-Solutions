class Solution {
public:
    int trailingZeroes(int n) {
        int p = 5, ans = 0;
    while (n / p)
    {
        ans += n / p;
        p *= 5;
    }
    return ans;
    }
};