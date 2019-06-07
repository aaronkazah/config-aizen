//
// Created by Aaron Kazah on 2019-06-07.
//

#include "config-aizen.hpp"
#include <unordered_map>

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
            auto delimiterPos = line.find('=');
            std::string key = line.substr(0, delimiterPos);
            std::string value = line.substr(delimiterPos + 1);
            configMap.insert({key, value});
        }
    } else {
        std::cerr << "Couldn't open config file";
    }
}

std::unordered_map<std::string, std::string> ConfigAizen::getConfigMap() {
    return configMap;
}