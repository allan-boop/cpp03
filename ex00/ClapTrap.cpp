#include "ClapTrap.hpp"

ClapTrap::ClapTrap(str name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
}

void	ClapTrap::attack(str const & target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	target.takeDamage(_attackDamage);
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
	this->_hitPoints += amount;
}

void	ClapTrap::setName(str name) {
	_name = name;
}

str		ClapTrap::getName(void) const {
	return _name;
}

int		ClapTrap::getHitPoints(void) const {
	return _hitPoints;
}

int		ClapTrap::getEnergyPoints(void) const {
	return _energyPoints;
}

int		ClapTrap::getAttackDamage(void) const {
	return _attackDamage;
}