#include <iostream>
#include <bitset>

void func() 
{
	int i = 5;
}

using u8_t = unsigned char;
using u16_t = unsigned char;
using u32_t = unsigned char;

int main()
{
	int i = 0;
	i = i + 5;

	if (i != 10)
	{
		i = 0;
	}

	func();

	u8_t b1 = 0b11110000;
	u8_t b2 = 0b00001111;

	//0xf;

	std::cout << std::bitset<8>{b1} << std::endl;
	std::cout << std::bitset<8>{b2} << std::endl;
	std::cout << std::bitset<8>(b1 | b2) << std::endl;
	std::cout << std::bitset<8>(b1 & b2) << std::endl;
	std::cout << std::bitset<8>(b1 & ~b2) << std::endl;

	u8_t upper = 0b10101111;
	u8_t lower = 0b00111101;

	u16_t ul = (upper << 8) | lower;

	std::cout << std::bitset<16>{ul} << std::endl;

	u8_t r = 120;
	u8_t g = 0;
	u8_t b = 20;
	u8_t a = 255;
	u32_t color = (r << 24) | (g << 16) | (b << 8) | a;
	std::cout << std::bitset<32>{color} << std::endl;

	b = (color >> 8) & 0xff;

}