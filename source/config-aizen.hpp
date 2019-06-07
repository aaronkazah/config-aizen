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
public:
    std::string getString(std::string variableName);
    int getInt(std::string variableName);
    double getDouble(std::string variableName);
    bool getBoolean(std::string variableName);
public:
    std::unordered_map<std::string, std::string> getConfigMap();
private:
    std::unordered_map<std::string, std::string> configMap {};
    std::unordered_map<std::string, std::string>::const_iterator findKey(std::string variableName);


};
#endif //CONFIG_AIZEN_CONFIG_AIZEN_HPP
