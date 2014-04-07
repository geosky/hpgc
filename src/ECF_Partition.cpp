#include "IPartition.h"
#include <string>

hpgc::MetaData * hpgc::EFC_Partition::GetMetaData()
{
	return m_Metadata;
};
hpgc::Cellar * hpgc::EFC_Partition::Partitioning()
{
	//��������Դֻ��һ��ͼ��,ÿһǧ��Ҫ��һ��Ͱ
	int TOP=1000;
	int numBarrels=m_Metadata->GetFeatCount()/TOP+1;
	unsigned long counter=0;

	hpgc::Cellar * myCeller=new hpgc::Cellar();

	for (int i=0; i<numBarrels;i++ )
	{
		hpgc::Barrel* pBarrel=new hpgc::Barrel();
		pBarrel->SetDataSource(m_Metadata->GetDataSource());
		pBarrel->SetLayer(m_Metadata->GetLayers()[0]);
		
		for (int j=0;j<TOP;j++)
		{
			counter++;
			if (counter<m_Metadata->GetFeatCount())
			{
				pBarrel->AddFeature("you");//std::to_string(counter).c_str());
				///> todo 
			}
			
		}
		myCeller->AddBarrel(pBarrel);
		
	}
	return myCeller;
};
