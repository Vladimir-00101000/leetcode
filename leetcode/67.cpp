#include <iostream>
#include <string>
#include <algorithm>


class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
         std::string result;
         int i = a.size() - 1, j = b.size() - 1;
         int carry = 0;
         while (i >= 0 || j >= 0 || carry == 1){
            if (i >= 0){carry += a[i--] - '0';}
            if (j >= 0){carry += b[j--] - '0';}
            result += carry % 2 + '0';
            carry /= 2;
        }     
        std::reverse(result.begin(), result.end());
        return result;
    }
};


int main(void){
    Solution s;
    std::cout << s.addBinary("11", "1") << std::endl;
    return 0;
}
