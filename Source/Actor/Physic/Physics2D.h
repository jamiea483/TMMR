#include "PhysicsComponentInterface.h"
#include "Actor/Transform/Transform.h"
#include "Collider.h"
#include <list>
#include "Actor\Actor.h"

class Physics2D : public PhysicsComponentInterface
{
private: 
	std::list<Actor*> m_actorsWithPhysics;
	Transform m_transform;
	Collider m_collider;
	float m_velocityX;
	float m_velocityY;
	float m_rotationalSpeed;

public:
	Physics2D();
	virtual bool VInit(char* pData, Transform transform, Collider collider) { return false; } // gets transform/collider component of actor as well (required).
	void InitListOfActorsWithPhysics(std::list<Actor*> actors);
	void ChangeVelocity(float x, float y);
	void ChangeRotationalSpeed(float speed);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }

private:
	void CalculatePhysics(float deltaTime);

};


