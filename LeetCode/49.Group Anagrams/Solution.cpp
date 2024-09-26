class Solution {
public:
   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,list<string>> myMap;
        vector<vector<string>> answer;
        for(auto str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            myMap[temp].push_back(str);
        }

        for(auto pair:myMap){
            answer.push_back(vector<string>(pair.second.begin(),pair.second.end()));

        }
    return answer;
    }
};