#ifndef HGPC_IGeoAlgFactory_FACTORY_H_INCLUDE

#define HGPC_IGeoAlgFactory_FACTORY_H_INCLUDE 

#include "IFactory.h"
#include "IScheduler.h"
#include "IPartition.h"
#include "HpgcAlgorithm.h"

namespace hpgc{

class IGeoAlgFactory:public IFactory
{
public:
	virtual IGeoAlgorithm  * Create(int argc, char ** argv) = 0;
	//virtual IGeoAlgFactory()=0;
};
}
#endif