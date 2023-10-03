
// ******* Approach 1 *****************
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            for(int j = i+1 ; j<nums.size() ; j++)
            {
                if(nums[i] == nums[j])
                    cnt++;
            }
        }

        return cnt;
    }
};
// ******* Approach 2 *****************
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int ans = 0;
        for(auto ele:mp)
        {
            ans +=(ele.second)*(ele.second - 1) / 2;
        }

        return ans;
    }
};
// ******* Approach 3 *****************
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i:nums)
        {
            ans += mp[i];
            mp[i]++;
        }
        return ans;
    }
};