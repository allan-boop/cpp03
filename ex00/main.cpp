#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap("Allan");
	ClapTrap clapTrap2(clapTrap);

	clapTrap.attack("target");
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	return (0);
}