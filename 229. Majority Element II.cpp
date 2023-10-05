class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0 , a = -1 , b = -1;

        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i] == a)
            {
                cnt1++;
            }
            else if(nums[i] == b)
            {
                cnt2++;
            }
            else if(cnt1==0)
                {
                    cnt1 = 1;
                    a = nums[i];

                }
            else if(cnt2==0)
                {
                    cnt2 = 1;
                    b = nums[i];

                }
                else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0 ; cnt2 = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i] == a)
            {
                cnt1++;
            }
            else if(nums[i] == b)
                cnt2++;
        }

        vector<int> ans;
        if(cnt1 > n/3)
        ans.push_back(a);
        if(cnt2 > n/3)
        ans.push_back(b);
        return ans;

    }
};