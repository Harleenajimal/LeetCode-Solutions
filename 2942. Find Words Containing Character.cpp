class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
int count = 0;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].length(); j++){
                if(words[i][j]==x){
                   count++;
                   break;
                }
            }
        
            }   
            vector<int>re(count);
            int n=0;
            for(int i=0; i<words.size();i++){
                for(int j =0; j<words[i].length(); j++){
                    if(words[i][j] == x){
                        re[n] = i;
                        n++;
                        break;
                    }
                }
            }     
            return re;
        }
    
};
