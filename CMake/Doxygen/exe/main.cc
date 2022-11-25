#include <iostream>
#include <nlohmann/json.hpp>
#include "my_lib.h"

int main()
{
    std::cout << "JSON_Lib_VERSION:"
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";
    print_hello_world();

    return 0;
}
