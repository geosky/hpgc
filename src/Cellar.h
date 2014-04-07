#ifndef HPGC_Cellar_H_INCLUDE

#define HPGC_Cellar_H_INCLUDE 

#include <stack>

namespace hpgc
{

	class Cellar
	{
	private:
		std::stack<hpgc::Barrel *> m_barrel_stack;

	public:
		int Count();
		void AddBarrel(hpgc::Barrel *);
		hpgc::Barrel * PopBarrel();
	};
}
#endif