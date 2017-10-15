#include "ActorFactory.h"

ActorFactory::ActorFactory(){}

Actor* ActorFactory::CreateActor(const char* actorResource) { return nullptr;  }

ActorComponent* ActorFactory::CreateComponent(char* pData) { return nullptr; }

ActorId ActorFactory::GetNextActorId() { return 0; }

