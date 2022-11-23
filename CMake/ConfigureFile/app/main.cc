#include <iostream>
#include "my_lib.h"
#include "config.hpp"

int main()
{
    std::cout << project_version_major << '\n';
    std::cout << project_version_minor << '\n';
    std::cout << project_version_patch << '\n';

    print_hello_world();

    return 0;
}
