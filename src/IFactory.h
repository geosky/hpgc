#ifndef HGPC_ABSTRACT_FACTORY_H_INCLUDE

#define HGPC_ABSTRACT_FACTORY_H_INCLUDE 

//#include "ISchedulerFactory.h"
//#include "IGeoAlgFactory.h"
//#include "IPartitionFactory.h"
#include "IScheduler.h"
#include "IPartition.h"
#include "HpgcAlgorithm.h"

namespace hpgc{

	class IFactory 
	{
	public:
		virtual const char * GetName() = 0;
		virtual const char * GetDescription()=0;
	};
}

#endif