#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap() {
	this->name = "Default";
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(str his_name) : ClapTrap(his_name + "_clap_name"), ScavTrap(his_name), FragTrap(his_name) {
	this->name = his_name;
	_hitPoints = FragTrap::getHitPoints();
	_energyPoints = ScavTrap::getEnergyPoints();
	_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << this->name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap) {
	*this = diamondTrap;
	std::cout << "DiamondTrap " << name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " died!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this == &diamondTrap)
		return (*this);
	ScavTrap::operator=(diamondTrap);
	FragTrap::operator=(diamondTrap);
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	if (_hitPoints <= 0)
	{
		std::cout << "DiamondTrap " << name << " is dead and can't tell who he is!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "DiamondTrap " << name << " has no energy points!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(str const &target) {
	ScavTrap::attack(target);
}
