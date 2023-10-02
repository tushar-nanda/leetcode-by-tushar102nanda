class Solution {
public:
    bool winnerOfGame(string colors) {
        int a = 0;
        int b = 0;
        int s_a = 0;
        int s_b=0;
        for(auto ch:colors)
        {
            if(ch == 'A')
            {
                a++;
                if(b>2)
                {
                    s_b += b-2;
                }
                b = 0;
            }
            else 
            {
                b++;
                if(a>2)
                {
                    s_a += a-2;
                }
                a = 0;
            }
        }

        if(a > 2)
        {
                    s_a += a-2;
            
        }
        if(b>2)
                    s_b += b-2;
            
        return s_a>s_b;

    }
};