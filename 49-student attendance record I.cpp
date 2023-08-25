class Solution 
{
 public:
  bool checkRecord(string s) 
  {
    int cntA = 0;
    int cntL = 0;

    for (const char c : s) 
    {
      if (c == 'A' && ++cntA > 1)
      {
          return false;
      }
      if (c != 'L')
      {
          cntL = 0;
      }
      else if (++cntL > 2)
      {
          return false;
      }
    }

      return true;
  }
};
