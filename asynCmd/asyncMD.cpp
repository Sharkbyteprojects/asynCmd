#include <iostream>
#include <thread>
void asyncf(const char* hello) {
	system(hello);
}
int main(int argc, char const* argv[]) {
	if (argc > 1) {
		for (int x = 0; x < argc; x++) {
			const char* args = argv[x + 1];
			std::thread full(asyncf, args);
			full.join();
		}
	}
	else {}
	return 0;
}
