#ifndef HPGC_AlgFactoryMan_H_INCLUDE

#define HPGC_AlgFactoryMan_H_INCLUDE 

#include "port.designpattern.h"
#include "IFactory.h" 
#include "FactoryManager.h"
#include "IGeoAlgFactory.h"

#include <list>
namespace hpgc{
class AlgFactoryMan:public FactoryManager
{
public:
	IGeoAlgFactory * FindFactory(const char	*);

	void AddFactory(IGeoAlgFactory * );

	void RemoveFactory(const char * );

	static AlgFactoryMan * GetInstance();

	static void DestoryInstance();

private:
	static AlgFactoryMan * m_instance;

	std::list<IGeoAlgFactory *> factories;

	AlgFactoryMan(){};

	AlgFactoryMan(const AlgFactoryMan &);

	~AlgFactoryMan();
};
}
#endif