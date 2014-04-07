
#ifndef HGPC_Partition_FACTORY_H_INCLUDE

#define HGPC_Partition_FACTORY_H_INCLUDE 

#include "IFactory.h"
#include "IScheduler.h"
#include "IPartition.h"
#include "HpgcAlgorithm.h"

namespace hpgc{
class IPartitionFactory:public hpgc::IFactory
{
public:
	virtual IPartition * Create() = 0;
};
}
#endif