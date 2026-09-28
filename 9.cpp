#include <iostream>
#include <string>
#include <vector>

// class Solution {
// public:
//     bool isPalindrome(int x){
//         if (x < 0){return false;}
//         std::vector<int> tmp;
//         while (x != 0){
//             tmp.push_back(x % 10);
//             x = x / 10;
//         }
//         int l = 0, r = tmp.size() - 1;
//         while (l < r) {
//             if (tmp[l] != tmp[r]){
//                 return false;
//             }
//             l++;
//             r--;
//         }
//         return true;
//     }
// };


class Solution {
public:
    bool isPalindrome(int x){
        if (x < 0){
            return false;
        }
        uint reverse = 0;
        int xcopy = x;
        while (x > 0){
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }
        return reverse == xcopy;
    }
};


int main(void){
    Solution s;
    std::cout << s.isPalindrome(890098) << std::endl;
    return 0;
}
