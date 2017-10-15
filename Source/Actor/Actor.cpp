#include "Actor.h"

Actor::Actor(ActorId id) {}

Actor::~Actor() {}

bool Actor::Init(TiXmlElement* pData) {}

void Actor::PostInit() {}

void Actor::Destroy() {}

void Actor::Update(float deltaTime) {}

ActorId Actor::GetId() {}

void Actor::AddComponent(StrongActorComponentPtr pComponent) {}
