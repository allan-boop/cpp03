#pragma once

#include "ClapTrap.hpp"
#include <iostream>

typedef std::string str;

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(str name);
		ScavTrap(const ScavTrap &scavTrap);
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap &scavTrap);

		void	attack(str const &target);
		void	guardGate(void);
		int		getEnergyPoints(void);

	protected:
		bool _guardGateMode;
};