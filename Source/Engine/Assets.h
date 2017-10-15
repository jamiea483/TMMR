#include<map>

class Assets
{
public:
	typedef int AssetID;
	typedef char* Asset;

	typedef std::map<AssetID, Asset> AssetMap;
	AssetMap m_assets;

	Assets();
	void LoadAssets(char* screen);
	void UnloadAssets();	
private:
	void InitAssets();

};


