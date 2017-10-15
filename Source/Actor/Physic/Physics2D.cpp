#include "Physics2D.h"

const char* Physics2D::g_Name = "Physics2D";


Physics2D::Physics2D() {}

//bool Physics2D::VInit(char* pData, Transform transform, Collider collider) { return true;  }

void Physics2D::InitListOfActorsWithPhysics(std::list<Actor*> actors) {}
	
void Physics2D::ChangeVelocity(float x, float y) {}

void Physics2D::ChangeRotationalSpeed(float speed) {}

void Physics2D::CalculatePhysics(float deltaTime) {}




