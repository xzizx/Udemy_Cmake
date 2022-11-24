#include <iostream>
#include <cxxopts.hpp>
#include <fmt/core.h>
#include <nlohmann/json.hpp>
#include "my_lib.h"

int main(int argc, char **argv)
{
    cxxopts::Options options(project_name.data());
    options.add_options("argument")("h,help","Print usage");
    auto result = options.parse(argc,argv);
    if(result.count("help"))
    {
        std::cout << options.help() << '\n';
    }



    fmt::print("fmt fetch git !\n");
    std::cout << "json external git :"
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";
    print_hello_world();

    return 0;
}
