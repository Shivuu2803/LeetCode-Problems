class Solution 
{
public:
    string addStrings(string num1, string num2) 
    {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result;

    while (i >= 0 || j >= 0 || carry > 0) 
    {
        int digit_sum = carry;

        if (i >= 0) 
        {
            digit_sum += num1[i] - '0';
            i--;
        }

        if (j >= 0) 
        {
            digit_sum += num2[j] - '0';
            j--;
        }

        carry = digit_sum / 10;
        int digit = digit_sum % 10;
        result = to_string(digit) + result;
    }

    return result;
    }
};
