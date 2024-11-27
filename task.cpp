#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
 
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "Element at index " << i << ": " << vec[i] << std::endl;
    }
    vec.pop_back();
    std::cout << "After pop_back, size: " << vec.size() << std::endl;
    return 0;
}
//this is comment