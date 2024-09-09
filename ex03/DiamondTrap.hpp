#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

typedef std::string str;

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(str his_name);
		DiamondTrap(const DiamondTrap &diamondTrap);
		virtual ~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &diamondTrap);
		void attack(str const &target);
		void whoAmI(void);

	private:
		str name;
};