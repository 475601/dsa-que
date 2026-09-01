class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        set<int> s;
        int sum = 0;
for(int x : nums) {
            if(s.count(x))
                ans[0] = x;
            else {
                s.insert(x);
                sum += x;
            }
        }
 ans[1] = n * (n + 1) / 2 - sum;
 return ans;
    }
};