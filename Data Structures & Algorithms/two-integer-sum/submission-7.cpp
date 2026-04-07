class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       map<int, int > mpp;

       for(int i  = 0; i < nums.size(); i++)
       {
            int num = nums[i];
            int require = target - num;
            if(mpp.find(require) != mpp.end())
            {
                return {mpp[require], i};
            }
            mpp[num] = i;
       }
       
    }
};
