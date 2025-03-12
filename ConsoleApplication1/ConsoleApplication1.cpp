// Program Taking Damage
// Describes function substitution
#include <iostream>
int radiation(int health);
int main()
{
	int health = 100;
	std::cout << "Your health is " << health << "\n\n";
	health = radiation(health);
	std::cout << "After radiation exposure your health is " << health << "\n\n";
	health = radiation(health);
	std::cout << "After radiation exposure your health is " << health << "\n\n";
	health = radiation(health);
	std::cout << "After radiation exposure your health is " << health << "\n\n";
	return 0;	
}
inline int radiation(int health)
{
	return (health - 20);
}
