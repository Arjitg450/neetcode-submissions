class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>ans;
        unordered_map<string, vector<int>> mp;//string, indexes

           for(int i=0;i<strs.size();i++){

           string s = strs[i];
           sort(s.begin(), s.end());

           mp[s].push_back(i); //adding the indexes agaisnt sorted word
           } 
    for(auto it: mp){

        vector<string>v;
     for(auto it1: it.second){

        v.push_back(strs[it1]);
     }  
     ans.push_back(v);
     
    }
        return ans;    
        
    }
};
