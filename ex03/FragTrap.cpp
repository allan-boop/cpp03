#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap(FragTrap) {
	*this = FragTrap;
	std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " died!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &FragTrap) {
	if (this == &FragTrap)
		return (*this);
	ClapTrap::operator=(FragTrap);
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if (_hitPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " is dead and can't give high fives!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "FragTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "FragTrap " << _name << " gives high fives!" << std::endl;
	return ;
}

int	FragTrap::getHitPoints(void) {
	return (_hitPoints);
}

int FragTrap::getAttackDamage(void) {
	return (_attackDamage);
}