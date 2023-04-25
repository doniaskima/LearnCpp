class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string output ="";
        int n =strs.size();
        m=str[0],L=strs=[n-1];
        for(int i=0;i<m.size();i++){
            if(m[i]==L[i]){
                output+=m[i];
            }else break;
        }        
        return output;
    }
};