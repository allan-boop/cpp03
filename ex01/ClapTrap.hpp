#pragma once

#include <iostream>

typedef std::string str;

class ClapTrap {
	public:
	ClapTrap(void);
	ClapTrap(str name);
	ClapTrap(const ClapTrap &clapTrap);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &clapTrap);
	void	attack(str const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected:
		str	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};
