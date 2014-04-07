#include "hpgc.h"
#include "cvct2gdal.h"
#include "HpgcAlgorithm.h"
#include "IGeoAlgFactory.h"
#include "IGeoAlgorithm.h"

const char * cvct2gdal_Factory::GetName()
{
	return "cvct2gdal";
}
const char * cvct2gdal_Factory::GetDescription()
{
	return "���й���������ʸ��������ʽVCTת��GDAL֧�ֵ����ݸ�ʽ";
}


hpgc::IGeoAlgorithm * cvct2gdal_Factory::Create(int argc, char ** argv)
{
	hpgc::IGeoAlgorithm *pIGeoAlgorithm=new cvct2gdal();
	pIGeoAlgorithm->init(argc,argv);
	return pIGeoAlgorithm;
}
cvct2gdal_Factory::cvct2gdal_Factory()
{
}