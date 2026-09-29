#include <iostream>


// class Solution {
// public:
//     int mySqrt(int x) {
//         int min_result = 0;
//         for (uint i = 0; i <= x; i++){
//             if (i * i > x){
//                 return min_result;
//             }
//             min_result = i;
//         }
//         return min_result;
//     }
// };


class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int l = 0, r = x / 2;
        
        while (l <= r){
            int mid = l + (r - l) / 2;
            long long square = (long long) mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return r;
    }
};



int main(void){
    Solution s;
    std::cout << s.mySqrt(1) << std::endl;
    return 0;
}