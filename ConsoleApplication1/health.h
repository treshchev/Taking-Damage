#ifndef HEALTH_H // Restart protection
#define HEALTH_H

#include <iostream>

// Function to reduce health
inline int radiation(int health);

// Function to repeat the process of decreasing health
void RepeatRadiation(int& health, int times);

#endif // HEALTH_H

