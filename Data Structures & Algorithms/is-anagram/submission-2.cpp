class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
    return false;

    vector<int> chs(26, 0);

    for(int i=0;i<s.size();i++){

        chs[s[i] - 'a']++;
        chs[t[i] - 'a']--;
    }

    for(auto it: chs){
        if(it!=0) return false;

    }
    return true;

        
    }
};
