class Solution {
public:
    bool isAnagram(string s, string t) {
    
    if (s.length() != t.length()){
        return false;
    }

    int tally[26]={0};
    //check s
    for (int i=0; i<s.length(); i++){
    tally[s[i]-'a']++;
    }

    for (int i=0; i<t.length(); i++){
    tally[t[i]-'a']--;
    }

    for (int i=0; i<26; i++){
        
        if(tally[i]!=0){
            return false;
        }

    }
    return true;


    } 
};
