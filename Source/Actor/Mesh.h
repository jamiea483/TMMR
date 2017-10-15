class Mesh : public RenderComponentInterface
{
	std::string m_visualResource;
	std::map<std::string, AnimationInfo> m_animationsInfo;
public:
	Mesh();
	virtual bool VInit(TiXmlElement* pData); 
	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	void Draw();
	void StartAnimation(std::string animationName);
}


