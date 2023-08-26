class Solution 
{
public:
    bool judgeCircle(string moves) 
    {
        int right = 0;
        int up = 0;

        for (char x : moves) 
        {
            switch (x) 
            {
                case 'R': 
                {
                    ++right;
                    break;
                }
                case 'L': 
                {
                    --right;
                    break;
                }
                case 'U': 
                {
                    ++up;
                    break;
                }
                case 'D': 
                {
                    --up;
                    break;
                }
            }
        }

        return right == 0 && up == 0;
    }
};
