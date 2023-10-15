#include <iostream>
#include <string>
#include <vector>
#include <bitset>



class Solution {
public:
    int hammingWeight(uint32_t n) {
        using namespace std;        
        bitset<32> container{n};
       
        string cont;
        int count = 0;

        cont = container.to_string();

        for (char&c: cont){
            if (c == '1'){
                count +=1 ;
            } 
            else {continue;}

        } 
        
        return count;

    }


};
