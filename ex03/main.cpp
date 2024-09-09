#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamondTrap("Allan");
	DiamondTrap diamondTrap2(DiamondTrap);

	diamondTrap.attack("target");
	diamondTrap.takeDamage(50);
	diamondTrap.beRepaired(20);
	// diamondTrap.takeDamage(70);
	diamondTrap.highFivesGuys();
	diamondTrap.guardGate();
	diamondTrap.guardGate();
	diamondTrap.whoAmI();
	diamondTrap.whoAmI();
	diamondTrap.attack("target");
	return (0);
}