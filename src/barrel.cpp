#include "IData.h"
#include "port.h"

	hpgc::Barrel::Barrel()
	{

	};
	hpgc::Barrel::~Barrel()
	{

	};

	char * hpgc::Barrel::GetDataSource()
	{
		return NULL;
	};
	void hpgc::Barrel::SetDataSource(const char *)
	{

	};

	char * hpgc::Barrel::GetLayer()
	{
		return NULL;
	};
	void hpgc::Barrel::SetLayer(const char *)
	{

	};

	void hpgc::Barrel::AddFeature(const char *)
	{

	};
	void hpgc::Barrel::RemoveFeature(char *)
	{

	};

	char * hpgc::Barrel::Packup()
	{
		return "hello, this is packup of barrel.\n";
	};
	void hpgc::Barrel::unPack(const char *)
	{

	};
