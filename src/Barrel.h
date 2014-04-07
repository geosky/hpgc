#ifndef HPGC_Barrel_H_INCLUDE

#define HPGC_Barrel_H_INCLUDE 

#include <stack>

namespace hpgc{
	class Barrel
	{
	private:
		const char * pszDataSource;
		const char * pszLayer;
		char ** flist;
	public:
		char * GetDataSource();
		void SetDataSource(const char *);

		char * GetLayer();
		void SetLayer(const char *);

		void AddFeature(const char *);
		void RemoveFeature(char *);

		char * Packup();
		void unPack(const char *);

		Barrel();
		Barrel(const char*,const char*);
		~Barrel();
	};
}
#endif