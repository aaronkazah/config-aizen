# Config Aizen
Config Aizen is a simple lightweight c++ library that allows you to parse config files similar to the .ini file format.


### Prerequisites

* A C++ Compiler
* CMake

### Getting Started

Download the source files listed here by clicking this link [Download config-aizen]()

Use include to add it to your project. Here's an example of how it's used in the main.cpp

```
#include <iostream>
#include "source/config-aizen.hpp"

int main() {
    // Instantiate class and load file.
    ConfigAizen configAizen {ConfigAizen()};
    configAizen.parseFile("../test.ini");
    // Load variable from test file
    std::string name = configAizen.getString("NAME");
    int numberVal = configAizen.getInt("INTEGER");
    double doubleVal = configAizen.getDouble("DOUBLE");
    bool booleanVal = configAizen.getBoolean("BOOLEAN");
    // Output variables to console
    std::cout << "NAME: " << name << std::endl;
    std::cout << "INTEGER: " <<numberVal << std::endl;
    std::cout << "DOUBLE: " <<doubleVal << std::endl;
    std::cout << "BOOLEAN: " <<booleanVal << std::endl;
    /* Name: JACK, INTEGER: 43, DOUBLE: 43.6, booleanVal: 1*/
    return 0;
}
```

## Installation & Building
Ensure you're in the root directory for this project. It lives in the same level as the ```main.cpp``` file.

```
$ git clone https://github.com/AaronKazah/config-aizen.git

$ cd config-aizen 

$ mkdir build

$ cd build 

$ cmake ..

$ make

$ ./config_aizen # Run the program

```

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details