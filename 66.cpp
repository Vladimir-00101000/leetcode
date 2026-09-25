#include <iostream>
#include <vector>


// class Solution{
// public:
//     std::vector<int> plusOne(std::vector<int>& digits){
//         digits[digits.size() - 1] += 1;
//         for (size_t i = (digits.size() - 1); i > 0; i--){
//             if (digits[i] != 10){
//                 return digits;
//             }
//             digits[i] = 0;
//             digits[i-1] += 1;

//         }
//         if (digits[0] == 10){
//             digits[0] = 0;
//             digits.insert(digits.begin(), 1);
//         }
//         return digits;
//     }
// };


class Solution{
public:
    std::vector<int> plusOne(std::vector<int>& digits){
        for (size_t i = (digits.size() - 1); i >= 0; i--){
            if (digits[i] + 1 != 10){
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
            if (i == 0){
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};


int main(void){
    Solution s;
    std::vector<int> vec = {};
    std::vector<int> result = s.plusOne(vec);
    return 0;
}