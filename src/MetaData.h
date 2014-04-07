
#ifndef HPGC_MetaData_H_INCLUDE

#define HPGC_MetaData_H_INCLUDE 

#include <stack>

namespace hpgc{
class MetaData
{
public:
	char *GetDataSource();
	char ** GetLayers();
	long GetFeatCount();
protected:
private:
	char *m_DataSource;
	char ** m_Layers;

};
}
#endif