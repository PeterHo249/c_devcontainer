#include <iostream>

int main(int, char **)
{
    long long signedInt = 134217728;
    uint64_t unsignedInt = 2065727;

    std::cout << sizeof(long long) << std::endl;
    std::cout << sizeof(uint64_t) << std::endl;

    if (signedInt < unsignedInt)
        std::cout << signedInt << " < " << unsignedInt << std::endl;
    else
        std::cout << signedInt << " >= " << unsignedInt << std::endl;

    return 0;
}
