class Solution {
 public:
  int singleNumber(vector<int>& nums) {
  int n=0;
  for(int val:nums ){
    n=n^val;
  }
  return n;
  }
};