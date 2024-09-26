#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guardGateMode = false;
	std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(str name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guardGateMode = false;
	std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	*this = scavTrap;
	std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " died!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap) {
	if (this == &scavTrap)
		return (*this);
	ClapTrap::operator=(scavTrap);
	this->_guardGateMode = scavTrap._guardGateMode;
	return (*this);
}

void	ScavTrap::attack(str const & target) {
	if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and can't attack!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and can't enter in Gate keeper mode!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy points!" << std::endl;
		return ;
	}
	if (_guardGateMode == true)
	{
		_guardGateMode = false;
		std::cout << "ScavTrap " << _name << " has left Gate keeper mode!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_guardGateMode = true;
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode!" << std::endl;
}