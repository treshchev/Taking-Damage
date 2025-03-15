#include "health.h"

int main()
{
	int health = 100;
	std::cout << "Your health is " << health << "\n\n";

	RepeatRadiation(health, 3);

	return 0;

}