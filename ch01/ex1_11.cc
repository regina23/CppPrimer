#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int min = 0, max = 0;
	if(v1 < v2) {
		min = v1;
		max = v2;
	} else {
		min = v2;
		max = v1;
	}
	while( min <= max) {
		std::cout << min << " ";
		++min;
	}
	return 0;
}