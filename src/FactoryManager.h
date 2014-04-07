#ifndef HPGC_FactoryManager_H_INCLUDE

#define HPGC_FactoryManager_H_INCLUDE 

#include "port.designpattern.h"
#include "IFactory.h" 
//#include "AlgFactoryMan.h"
//#include "ParFactoryMan.h"
//#include "SchFactoryMan.h"
#include <list>

namespace hpgc{

	class FactoryManager
	{
	public:
		void * FindFactory(const char *);
		void AddFactory(void * );
		void RemoveFactory(const char * );
	};	
}

#endif