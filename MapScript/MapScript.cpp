#include <iostream>
#include <string>
#include <fstream>

int main() {
	bool spec;
	for (std::string str; std::getline(std::cin, str);) {
		spec = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] > 64 && str[i] < 91) {
				str[i] += 32;
				std::cout << str[i];
				spec = false;
			} else if (str[i] > 96 && str[i] < 123) {
				std::cout << str[i];
				spec = false;
			} else if (!spec) {
				std::cout << '\t' << "1" << '\n';
				spec = true;
			}
		}
		if (!spec) { std::cout << '\t' << "1" << '\n'; }
	}
	return 0;
}