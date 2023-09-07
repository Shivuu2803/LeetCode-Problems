class Solution 
{
public:
    string convertToBase7(int num) 
    {
        if (num == 0) 
        {
           return "0"; 
        }

    string ans = "";
    string sign = "";

    if (num < 0) 
    {
        sign = "-";
        num = -num; 
    }

    while (num) 
    {
        ans = to_string(num % 7) + ans;
        num /= 7;
    }

    return sign + ans;
    }
};
