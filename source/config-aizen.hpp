//
// Created by Aaron Kazah on 2019-06-07.
//

#ifndef CONFIG_AIZEN_CONFIG_AIZEN_HPP
#define CONFIG_AIZEN_CONFIG_AIZEN_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <unordered_map>


class ConfigAizen {
public:
    void parseFile(const char* fileName);
    std::unordered_map<std::string, std::string> getConfigMap();

public:
    std::unordered_map<std::string, std::string> configMap {};
};
#endif //CONFIG_AIZEN_CONFIG_AIZEN_HPP
