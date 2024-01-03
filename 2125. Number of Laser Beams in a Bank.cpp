class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = count(bank[0].begin() , bank[0].end() , '1');
        int sum = 0 ;
        
        for(int i = 1 ; i < bank.size(); i++)
        {
            string &ele = bank[i];
            int curr = count(ele.begin(), ele.end() , '1');
            sum +=(prev*curr);
           if(curr!=0)
            prev = curr;
        }
        return sum;
    }
};