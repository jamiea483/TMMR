#include "RenderComponentInterface.h"
#include <map>

class Mesh : public RenderComponentInterface
{
	char* m_visualResource;
	typedef char* AnimationInfo;

	std::map<std::string, AnimationInfo> m_animationsInfo;
public:
	Mesh();
	virtual bool VInit(char* pData) { return false; }
	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	void Draw();
	void StartAnimation(std::string animationName);
};


