//
// Created by Aaron Kazah on 2019-06-07.
//

#include "config-aizen.hpp"


void ConfigAizen::parseFile(const char *fileName) {
    std::ifstream configFile (fileName);
    if (configFile.is_open()){
        std::string line;
        while(getline(configFile, line)) {
            // Remove all whitespaces
            line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
            // Ignore all comments
            if (line[0] == '#' || line.empty()){
                continue;
            }
            // Grab name and value, separated by assignment operator
            // Insert it into our map file
            auto delimiterPos { line.find('=') };
            std::string key { line.substr(0, delimiterPos) };
            std::string value { line.substr(delimiterPos + 1) };
            configMap.insert({key, value});
        }
    } else {
        std::cerr << "Couldn't open config file";
    }
}

std::unordered_map<std::string, std::string>::const_iterator ConfigAizen::findKey(std::string variableName) {
    std::unordered_map<std::string, std::string>::const_iterator key = configMap.find(variableName);
    if (key == configMap.end()){
        std::cerr << "Key does not exist";
    }
    return key;
}

std::string ConfigAizen::getString(std::string variableName) {
    auto key { findKey(variableName) };
    std::string value { key -> second };
    return value;
};

int ConfigAizen::getInt(std::string variableName) {
    auto key { findKey(variableName) };
    int number { std::stoi(key -> second) };
    return number;
};

double ConfigAizen::getDouble(std::string variableName) {
    auto key { findKey(variableName) };
    double number {std::stof(key -> second)};
    return number;

};

bool ConfigAizen::getBoolean(std::string variableName){
    auto key = findKey(variableName);
    std::string keyValue = key -> second;
    if (keyValue == "true") {
        return true;
    } else if (keyValue == "false"){
        return false;
    } else {
        std::cerr << "Boolean value must either be 'true' or 'false'. We'll default to false";
    }
    return false;
};

std::unordered_map<std::string, std::string> ConfigAizen::getConfigMap() {
    return configMap;
}