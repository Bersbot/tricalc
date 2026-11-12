#include <iostream>
#include <cmath>

int main(){
    float nums[3];
    float res = 0;
    const char* R = "";
    std::cout << "Enter the 3 side lengths of a triangle,\nusing zero to indicate the side you wish to find, in the format: \"Leg-Leg-Hypotenuse\"\nOr enter all side lengths to determine whether a triangle is a right-angled triangle\n--> ";
    std::cin >> nums[0] >> nums[1] >> nums[2];
    if (nums[0] == 0 && nums[1] != 0 && nums[2] != 0){
        res = pow(pow(nums[2], 2) - pow(nums[1], 2), 0.5);
        R = "The leg is equal to: ";
    }else if (nums[1] == 0 && nums[0] != 0 && nums[2] != 0){
        res = pow(pow(nums[2], 2) - pow(nums[0], 2), 0.5);
        R = "The leg is equal to: ";
    }else if (nums[2] == 0 && nums[0] != 0 && nums[1] != 0){
        res = pow(pow(nums[1], 2) + pow(nums[0], 2), 0.5);
        R = "The hypotenuse is equal to: ";
    }else {
        res = 0;
    }
    if (res != 0){
        std::cout << '\n' << R << res << '\n';
    }else{
        if (pow(nums[1], 2) + pow(nums[0], 2) == pow(nums[2], 2)){
            std::cout << "\nYour triangle is a right-angled.";
        }else{
            std::cout << "\nYour triangle isn`t a right-angled.";
        }
    }
}