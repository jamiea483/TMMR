#include "PhysicsComponentInterface.h"
#include "Transform.h"
#include "Collider.h"


class Physics2D : public PhysicsComponentInterface
{
private: 
	std::list<Actor> m_actorsWithPhysics;
	Transform m_transform;
	Collider m_collider;
	Vector2 m_velocity;
	float m_rotationalSpeed;

public:
	Physics2D();
	virtual bool VInit(TiXmlElement* pData, Transform transform, Collider collider); // gets transform/collider component of actor as well (required).
	void InitListOfActorsWithPhysics(std::list<Actor> actors);
	void ChangeVelocity(float x, float y);
	void ChangeRotationalSpeed(float speed);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }

private:
	void CalculatePhysics(float deltaTime);

};


