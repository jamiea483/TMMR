class Assets
{
public:
	typedef std::map<AssetID, Asset> AssetMap;
	AssetMap m_assets;

	Assets();
	void LoadAssets(string screen);
	void UnloadAssets();	
private:
	void InitAssets();

};


