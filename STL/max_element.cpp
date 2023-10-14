#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {12, 7, 21, 14, 9, 35, 42, 5};

    // Use the `std::max_element` algorithm to find the maximum element
    auto max_element = std::max_element(numbers.begin(), numbers.end());

    if (max_element != numbers.end()) {
        std::cout << "The maximum element is: " << *max_element << std::endl;
    } else {
        std::cout << "Vector is empty." << std::endl;
    }

    return 0;
}
