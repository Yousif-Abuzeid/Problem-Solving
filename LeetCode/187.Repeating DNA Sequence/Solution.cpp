class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mySequences;
        vector<string>valid;
        string seq;
        for(int i =0; i<s.size(); i++){
            seq=s.substr(i,10);
            mySequences[seq]++;
            
        }
        for(auto it = mySequences.begin(); it!=mySequences.end(); it++){
            if(it->second>1){
                valid.push_back(it->first);
            }
        }
        return valid;
    }
};