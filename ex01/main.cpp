#include "ScavTrap.hpp"

int main(void) {
	ScavTrap scavTrap("Allan");
	ScavTrap scavTrap2(scavTrap);

	scavTrap.attack("target");
	scavTrap.takeDamage(50);
	scavTrap.beRepaired(20);
	scavTrap.guardGate();
	scavTrap.guardGate();
	scavTrap.takeDamage(50);
	scavTrap2.attack("target");
	return (0);
}