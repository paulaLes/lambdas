#include <iostream>
#include <vector>
#include <algorithm>

// use STL algorithm to check if all elements are divisible by 3
// implement 3 versions:
// * lambda
// * functor
// * function

struct divisibleBy3 {
    divisibleBy3(int n) : n_{n} {}
    bool operator()(int number) {
    return number % n_ == 0;
}
private: 
int n_;
};

int main() {
    std::vector numbers = {18, 21, 36, 90, 27, 14, 103};
    bool result = std::all_of(numbers.begin(), numbers.end(), divisibleBy3{3});
    return result;
}
