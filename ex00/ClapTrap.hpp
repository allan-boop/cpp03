#pragma once

#include <iostream>

typedef std::string str;

class ClapTrap {
	public:
	ClapTrap(str name);
	~ClapTrap();

	void	attack(str const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setName(str name);
	str		getName(void) const;
	int		getHitPoints(void) const;
	int		getEnergyPoints(void) const;
	int		getAttackDamage(void) const;

	private:
	str	_name;
	int	_hitPoints;
	int	_energyPoints;
	int	_attackDamage;
};
