/**
This Code is under the MIT-License
<c> Sharkbyteprojects
*/
#include <iostream>
#include <cstdlib>
#include <thread>
#include "text.h"
void asyncf(const char* hello) {
	system(hello);
}
int main(int argc, char const* argv[]) {
	std::cout << init << std::endl;
	if (argc > 1) {
			const char* args = argv[1];
			std::thread full(asyncf, args);
			if (argc > 2) {
				const char* args = argv[2];
				std::thread fulls(asyncf, args);
				fulls.join();
			}
			else {
				std::cerr << noSecArg << std::endl;
			}
			full.join();
	}
	else {
		std::cout << helps << std::endl;
	}
	return 0;
}
