class Solution 
{
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        queue<int> q;

        int j=0;
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==sandwiches[j])
            {
                j++;
            }
            else
            {
                q.push(students[i]);
            }
        }

        int count=0;
        while(j<sandwiches.size() && !q.empty())
        {
            if(q.front()==sandwiches[j])
            {
                q.pop();
                j++;
                count=0;
            }
            else
            {
                int x = q.front();
                q.pop();
                q.push(x);
                count++;
                if(count == q.size())
                {
                    return count;
                }
            }
        }
        return 0;
    }
};
