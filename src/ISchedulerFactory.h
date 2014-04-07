#ifndef HGPC_Scheduler_FACTORY_H_INCLUDE

#define HGPC_Scheduler_FACTORY_H_INCLUDE 

#include "IFactory.h"
#include "IScheduler.h"
#include "IPartition.h"
#include "HpgcAlgorithm.h"

namespace hpgc{

class ISchedulerFactory:public hpgc::IFactory
{
public:
	virtual IScheduler  * Create() = 0;
};
}
#endif