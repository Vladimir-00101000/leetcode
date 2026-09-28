#include <iostream>
#include <vector>
#include <algorithm>


class Solution{
public:
    std::vector<int> plusOne(std::vector<int>& digits){
        uint64_t number = 0;
        for (size_t i = 0; i < digits.size(); ++i){
            number = (number * 10) + digits[i];
        }
        number += 1;

        std::vector<int> results;
        while (number > 0){
            results.push_back(number % 10);
            number /= 10;
        }
        std::reverse(results.begin(), results.end());
        return results;
    }
};


int main(void){
    // Solution s;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> res = s.plusOne(vec);
    return 0;
}
