#include <iostream>
#include <time.h>

int main() {
	std::cout << "Hello World!" << std::endl;
	int count = 0;
	int inCircleCount = 0;
	srand(time(NULL));
	for (int i = 0; i < 1000000; i++) {
		double x = (double)rand() / RAND_MAX;
		double y = (double)rand() / RAND_MAX;
		double c = sqrt(x * x + y * y);
		if (c <= 1) {
			inCircleCount++;
		}
		count++;
	}
	std::cout << ((double)4*inCircleCount/count) << std::endl;

	return 0;
}








