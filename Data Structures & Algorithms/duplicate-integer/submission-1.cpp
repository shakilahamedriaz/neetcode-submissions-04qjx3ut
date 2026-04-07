class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        bool ans = false;

        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        

        for(auto it: mp)
        {
            if(it.second > 1)
            ans = true;
        }

        return ans;
    }
};
