class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      unordered_map<int, int>mpp;
      for (int num: nums)
      {
        mpp[num]++;
      if (mpp[num] > 1)
      {
        return true;
      }
      }
      return false;
    }
};