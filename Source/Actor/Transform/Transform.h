#include "Actor\ActorComponent.h"

class Transform : public ActorComponent
{
public:
	float m_x;
	float m_y;
	float m_rotation;
	const static ComponentId g_COMPONENT_ID;

	Transform();
	void ChangePosition(float x, float y);
	void ChangeRotation(float rotation);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }

private:
	

};


