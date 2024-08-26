#include <iostream>
#include <set>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        int maxLen=0;
        int left=0;
        int right=0;
        set<char> MyChars;
        for(right=0; right<s.size(); right++){
            while(MyChars.count(s[right])){
                MyChars.erase(s[left]);
                left++;
            }
            MyChars.insert(s[right]);

            maxLen=max(maxLen,right-left+1);
        }
        for(auto i: MyChars){
            std::cout<<i<<" ";
        }
        return maxLen;

    }
};