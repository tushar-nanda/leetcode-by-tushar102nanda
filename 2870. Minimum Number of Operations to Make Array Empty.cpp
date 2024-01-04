class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto ele:nums)  mp[ele]++;
        int cnt = 0;
        for(auto ele:mp)
        {
            if(ele.second == 1)
                return -1;    
            int rem = ele.second % 3;
            cnt +=ele.second / 3;
            if(rem%2 == 0)  cnt += (rem/2);
            else cnt = cnt+1;
        }

        return cnt;
    }
};