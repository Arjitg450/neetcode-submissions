class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>ans;
        unordered_map<string, vector<string>> mp;//string, indexes

           for(int i=0;i<strs.size();i++){

           string s = strs[i];
           sort(s.begin(), s.end());

           mp[s].push_back(strs[i]); //adding the indexes agaisnt sorted word
           } 
    for(auto it: mp){

        // vector<string>v;


      ans.push_back(it.second);
     
    }
        return ans;    
        
    }
};
