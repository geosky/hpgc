#ifndef HPGC_IGeoAlgorithm_H_INCLUDE

#define HPGC_IGeoAlgorithm_H_INCLUDE 
#include "IPartition.h"
#include "IScheduler.h"
#include "IData.h"

namespace hpgc { 

	class IGeoAlgorithm
	{
	public:
		virtual Barrel * GetBarrel()=0;
		virtual void SetBarrel(Barrel*)=0;
		virtual bool Computing() = 0;
		virtual void init(int argc, char ** argv)=0;
		virtual void help()=0;
	};

}

#endif