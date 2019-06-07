#include <iostream>
#include "source/config-aizen.hpp"

int main() {
    // Instantiate class and load file.
    ConfigAizen configAizen {ConfigAizen()};
    configAizen.parseFile("./test.ini");

    // Load variable from test file
    std::string name {configAizen.getString("NAME")};
    int numberVal {configAizen.getInt("INTEGER")};
    double doubleVal {configAizen.getDouble("DOUBLE")};
    bool booleanVal {configAizen.getBoolean("BOOLEAN")};

    // Output variables to console
    std::cout << "NAME: " << name << std::endl;
    std::cout << "INTEGER: " <<numberVal << std::endl;
    std::cout << "DOUBLE: " <<doubleVal << std::endl;
    std::cout << "BOOLEAN: " <<booleanVal << std::endl;

    /* Name: JACK, INTEGER: 43, DOUBLE: 43.6, booleanVal: 1*/
    return 0;
}