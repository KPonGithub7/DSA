#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> ans;
    vector<string> letterCombinations(string digits)
    {
        map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
        string temp = "";
        if (digits.length() > 0)
        {

            combinations(temp, mp, digits, 0);
        }
        return ans;
    }
    void combinations(string temp, map<char, string> mp, string digits, int i)
    {
        if (temp.length() == digits.length())
        {
            ans.push_back(temp);
            return;
        }

        for (auto c : mp[digits[i]])
        {
            combinations(temp + c, mp, digits, i + 1);
        }
    }
};
int main()
{

    return 0;
}