class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string res="";
        if(str1+str2==str2+str1){
            res=str1.substr(0,gcd(size(str1),size(str2)));
        }
        else{
            res="";
        }
        return res;     
    }
};