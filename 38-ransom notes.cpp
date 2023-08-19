class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        // map to store character frequencies in the magazine.
        unordered_map<char, int> myMap;

        for (const char c : magazine) 
        {
            myMap[c]++;
        }

        for (const char c : ransomNote) 
        {
            if (myMap.find(c) == myMap.end() || myMap[c] <= 0) 
            {
                return false;
            }
            myMap[c]--;
        }
        return true;
    }
};
