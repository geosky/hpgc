#ifndef HPGC_ParFactoryMan_H_INCLUDE

#define HPGC_ParFactoryMan_H_INCLUDE 

#include "port.designpattern.h"
#include "IFactory.h" 
#include "FactoryManager.h"
#include "IPartitionFactory.h"

#include <list>

namespace hpgc{
	class ParFactoryMan:public FactoryManager
	{
	public:
		IPartitionFactory * FindFactory(const char	*);

		void AddFactory(IPartitionFactory * );

		void RemoveFactory(const char * );

		static ParFactoryMan * GetInstance();

		static void DestoryInstance();

	private:
		static ParFactoryMan * m_instance;

		std::list<IPartitionFactory *> factories;

		ParFactoryMan(){};

		ParFactoryMan(const ParFactoryMan &);

		~ParFactoryMan();
	};
}
#endif