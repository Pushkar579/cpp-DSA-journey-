#include <iostream>
#include <string>

int main() {
    std::string haystack = "hello";
    std::string needle = "xyz";

    // 1. Direct output (size_t / 64-bit unsigned)
    std::cout << haystack.find(needle) << std::endl; 
    // Output: 18446744073709551615

    // 2. Converted to a standard 32-bit signed int
    int result = haystack.find(needle);
    std::cout << result << std::endl; 
    // Output: -1
}
