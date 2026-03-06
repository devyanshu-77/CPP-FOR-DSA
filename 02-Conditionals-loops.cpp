#include <iostream>

int main() {
	// if-else
	int x;
	std::cout << "Enter a number";
	std::cin >> x;
	if(x == 0) {
		std::cout << "ZERO";
	} else if(x > 0) {
		std::cout << "POSITIVE";
	} else {
		std::cout << "NEGATIVE";
	}
	return 0;
}

