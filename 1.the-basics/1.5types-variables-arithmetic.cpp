#include <iostream>
#include <cstdint>
#include <bitset>

int main()
{
    // Clear intent: This is a raw 8-bit chunk of data, not a character
    std::uint8_t flags = 0b00000100;

    // Setting bit 0 (bitwise OR)
    flags |= (1 << 0); // 0b00000101

    // Printing std:uint8_t requires a cast, because cout still sees it as char
    std::cout << "Numeric value: " << static_cast<int>(flags) << std::endl;

    // Printing the number as binary
    std::cout << "Binary value: " << std::bitset<8>(flags) << std::endl;

    return 0;
}