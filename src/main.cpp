#include "hpgc.h"
#include "port.h"

using namespace hpgc;

/// @brief ���в��е����㷨ͳһ����ǰ��
///
/// -np ���̸�����-hostfile ����ڵ���Ϣ��-alg �㷨���ƣ�
/// -par ���ֲ��ԣ�-sch ���Ȳ��ԣ�[options...]�����㷨������
///
/// @ref AlgFactoryMan����-alg������@ref ParFactory����-par������
/// @ref SchFactory����-sch������@ref AlgFactory������Щ������
/// �㷨������������㷨�����������
/// 
/// hpgc framework��������ָ������ִ����Ӧ�����㷨��
/// ����Ӧ��Ϣû��ָ����ʹ��Ĭ��ֵ�������������˳�ִ�С�

void main(int argc, char ** argv)
{
	char * pstrScheduler=NULL;
	hpgc::IScheduler* pScheduler=NULL;

	char * pstrPartition=NULL;
	hpgc::IPartition* pPartition=NULL;

	char * pstrGeoAlgorithm=NULL;
	IGeoAlgorithm * pGeoAlgorithm =NULL;

	for(int i = 1; i < argc; i++)
		if (EQUAL(argv[i], "-par") && i < argc - 1)
			if (pstrPartition==NULL)
				pstrPartition = argv[++i];
			else if (EQUAL(argv[i], "-sch") && i < argc - 1)
				if(pstrScheduler==NULL)
					pstrScheduler = argv[++i];
			else if (EQUAL(argv[i], "-alg") && i < argc - 1)
				if (pstrGeoAlgorithm==NULL)
				{
					pstrGeoAlgorithm = argv[++i];
					if (pstrGeoAlgorithm==NULL || pstrGeoAlgorithm =="")
						continue;
					else
						break;
				}

	if (pstrGeoAlgorithm=NULL)
		exit(1);

	SchFactoryMan * pSchFactoryMan=SchFactoryMan::GetInstance();
	pScheduler=pSchFactoryMan->FindFactory(pstrScheduler)->Create();

	ParFactoryMan * pParFactoryMan=ParFactoryMan::GetInstance();
	pPartition=pParFactoryMan->FindFactory(pstrPartition)->Create();

	AlgFactoryMan * pAlgFactoryMan=AlgFactoryMan::GetInstance();
	pGeoAlgorithm=pAlgFactoryMan->FindFactory(pstrGeoAlgorithm)->Create(argc,argv);

	HpgcAlgorithm *pHpgcAlg=new HpgcAlgorithm();
	pHpgcAlg->SetScheduler(pScheduler);
	pHpgcAlg->SetPartition(pPartition);
	pHpgcAlg->SetGeoAlgorithm(pGeoAlgorithm);
	pHpgcAlg->Run();
}