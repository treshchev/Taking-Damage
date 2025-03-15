#include <iostream>

// Function to reduce health

inline int radiation(int health)
{
	return (health - 20);
}

// This is a function to repeat the health reduction a certain number of times.

void RepeatRadiation(int& health, int times)
{
	for (int i = 0; i < times; i++)
	{
		health = radiation(health);
		std::cout << "After radiation exposure your health is " << health << "\n\n";

	}
}