#include "FragTrap.hpp"

int main(void) {
	FragTrap fragTrap("Allan");
	FragTrap fragTrap2(fragTrap);

	fragTrap.attack("target");
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(20);
	fragTrap.takeDamage(70);
	fragTrap.attack("target");
	return (0);
}