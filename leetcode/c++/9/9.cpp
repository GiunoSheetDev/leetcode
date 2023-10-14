#include <iostream>
#include <string>

using namespace std;


void reverseString(string& str){
    int n = str.length();
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n- i- 1]); //swappa i caratteri partendo dai due estremi

    }
}


class Solution {
public:
    bool isPalindrome(int x) {
    
        string s1 = to_string(x);
        string s2 = to_string(x);

        reverseString(s1);

        return s1 == s2;

        
        

    }
};
