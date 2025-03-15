#include "health.h"

int main()
{
	int health = 100;
	std::cout << "Your health is " << health << "\n\n";

	// Calling a function with a specified number of repetitions

	RepeatRadiation(health, 5);

	return 0;

}