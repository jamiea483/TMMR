#include "Actor.h"

Actor::Actor(ActorId id) {}

Actor::~Actor() {}

bool Actor::Init(char* pData) { return true; }

void Actor::PostInit() {}

void Actor::Destroy() {}

void Actor::Update(float deltaTime) {}

ActorId Actor::GetId() { return 0; }

void Actor::AddComponent(ActorComponent* pComponent) {}
