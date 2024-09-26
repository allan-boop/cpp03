#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(str name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap){
	*this = clapTrap;
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " died!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this == &clapTrap)
		return *this;
	_name = clapTrap._name;
	_hitPoints = clapTrap._hitPoints;
	_energyPoints = clapTrap._energyPoints;
	_attackDamage = clapTrap._attackDamage;
	return *this;
}

void	ClapTrap::attack(str const & target) {
	if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can't attack!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " died from damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can't be repaired!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
	_hitPoints += amount;
}