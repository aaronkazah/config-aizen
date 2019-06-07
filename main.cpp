#include <iostream>
#include "source/config-aizen.hpp"

int main() {
    ConfigAizen configAizen {ConfigAizen()};
    configAizen.parseFile("/Users/aaron/CLionProjects/config-aizen/test.txt");
    std::string name = configAizen.getString("NAME");
    int numberVal = configAizen.getInt("VALUE");
    double doubleVal = configAizen.getDouble("DOUBLE");
    bool booleanVal = configAizen.getBoolean("BOOLEAN");
    std::cout << name << std::endl;
    std::cout << numberVal << std::endl;
    std::cout << doubleVal << std::endl;
    std::cout << booleanVal << std::endl;
    return 0;
}