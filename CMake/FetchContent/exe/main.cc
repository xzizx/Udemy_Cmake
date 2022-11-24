#include <iostream>
#include <nlohmann/json.hpp>
#include <fmt/core.h>
#include "my_lib.h"

int main()
{
    fmt::print("fmt fetch git !\n");
    std::cout << "json external git :"
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";
    print_hello_world();

    return 0;
}
