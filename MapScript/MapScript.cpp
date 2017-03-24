#include <string>
#include <iostream>
#include <fstream>

int main() {
	for (std::string str; std::getline(std::cin, str);) {
		bool k = true, j = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] > 64 && str[i] < 91) {
				str[i] += 32;
				std::cout << str[i];
				k = false;
				j = true;
			} else if (str[i] > 96 && str[i] < 123) {
				std::cout << str[i];
				k = false;
				j = true;
			} else if (str[i] == 32 && !k) {
				std::cout << '\t' << "1" << '\n';
				k = true;
				j = false;
			} else {
				if (!k) {
					std::cout << '\t' << "1" << '\n';
					k = true;
					j = false;
				}
			}
		}
		if (j) { std::cout << '\t' << "1" << '\n'; }
	}
	return 0;
}