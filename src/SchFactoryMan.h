#ifndef HPGC_SchFactoryMan_H_INCLUDE

#define HPGC_SchFactoryMan_H_INCLUDE 

#include "port.designpattern.h"
#include "IFactory.h" 
#include "FactoryManager.h"
#include "ISchedulerFactory.h"
#include <list>

namespace hpgc{
class SchFactoryMan:public FactoryManager
{
public:
	ISchedulerFactory * FindFactory(const char	*);

	void AddFactory(ISchedulerFactory * );

	void RemoveFactory(const char * );

	static SchFactoryMan * GetInstance();

	static void DestoryInstance();

private:
	static SchFactoryMan * m_instance;

	std::list<ISchedulerFactory *> factories;

	SchFactoryMan(){};

	SchFactoryMan(const SchFactoryMan &);

	~SchFactoryMan();
};
}
#endif