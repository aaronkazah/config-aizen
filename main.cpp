#include <iostream>
#include "source/config-aizen.hpp"

int main() {
    ConfigAizen configAizen {ConfigAizen()};
    configAizen.parseFile("/Users/aaron/CLionProjects/config-aizen/test.txt");
    std::unordered_map<std::string, std::string> configFile = configAizen.getConfigMap();
    for (auto const& pair: configFile){
        std::cout << "{" << pair.first << ":" << pair.second << "}" << std::endl;
    }
    return 0;
}