#ifndef HPGC_ALGORITHM_H_INCLUDE

#define HPGC_ALGORITHM_H_INCLUDE 
#include "IPartition.h"
#include "IScheduler.h"
#include "IData.h"
#include "IGeoAlgorithm.h"

namespace hpgc { 

class HpgcAlgorithm
{
private:
	IPartition *m_Partition;
	IScheduler *m_Scheduler;
	IGeoAlgorithm *m_GeoAlgorithm;
	Cellar * m_Cellar;

public:
	HpgcAlgorithm();

	IPartition *GetPartition();
	void SetPartition(IPartition *);

	IScheduler *GetScheduler();
	void SetScheduler(IScheduler *);

	IGeoAlgorithm *GetGeoAlgorithm();
	void SetGeoAlgorithm(IGeoAlgorithm *);

	virtual bool Run();
};


}

#endif