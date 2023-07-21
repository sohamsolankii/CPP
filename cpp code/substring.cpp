#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";
    std::string substring = s.substr(7, 5); // Extracts "World"
    std::cout << substring << std::endl;

    return 0;
}
/*
    string substr (size_t pos, size_t len);

*/