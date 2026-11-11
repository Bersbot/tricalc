#include <iostream>
#include <cmath>

int main(){
    float nums[3];
    float res = 0;
    std::cout << "Enter the 3 side lengths of a triangle,\nusing zero to indicate the side you wish to find, in the format: \"Leg1-Leg2-Hypotenuse\"\nOr enter all side lengths to determine whether a triangle is a right-angled triangle\n--> ";
    std::cin >> nums[0] >> nums[1] >> nums[2];
    if (nums[0] == 0){
        res = pow(pow(nums[2], 2) - pow(nums[1], 2), 0.5);
    }else if (nums[1] == 0){
        res = pow(pow(nums[2], 2) - pow(nums[0], 2), 0.5);
    }else if (nums[2] == 0){
        res = pow(pow(nums[1], 2) + pow(nums[0], 2), 0.5);
    }
    if (res != 0){
        std::cout << "\nResult: " << res << '\n';
    }else{
        if (pow(pow(nums[1], 2) + pow(nums[0], 2), 0.5) == nums[2]){
            std::cout << "\nYour triangle is a right-angled.";
        }else{
            std::cout << "\nYour triangle isn`t a right-angled.";
        }
    }
}