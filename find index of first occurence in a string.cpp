class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        int a = haystack.length();
        int b= needle.length();
        for(int i=0; i<= a-b; i++){
            for(j =0; j< needle.length(); j++){
                if(haystack[i+j] != needle[j])
                break;
            
        }
        if(j == b) return i;
    }
    return -1;
}
};
