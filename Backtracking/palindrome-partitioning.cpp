#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s)
    {
        vector<string> temp;
        helper(s, 0, temp);
        return ans;
    }

private:
    bool checkPal(string &str, int i, int j)
    {
        while (i < j)
        {
            if (str[i] != str[j])
            {
                return false;
            }
            i += 1;
            j -= 1;
        }
        return true;
    }
    void helper(string s, int i, vector<string> &temp)
    {
        if (i == s.length())
        {
            ans.push_back(temp);
        }

        for (int j = i; j < s.length(); j++)
        {
            if (checkPal(s, i, j))
            {
                string sub = s.substr(i, j - i + 1);
                temp.push_back(sub);
                helper(s, j + 1, temp);
                temp.pop_back();
            }
        }
    }
};
int main()
{

    return 0;
}