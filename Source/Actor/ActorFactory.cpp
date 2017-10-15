#include "ActorFactory.h"

ActorFactory::ActorFactory(){}

StrongActorPtr ActorFactory::CreateActor(const char* actorResource) {}

StrongActorComponentPtr ActorFactory::CreateComponent(TiXmlElement* pData) {}

ActorId ActorFactory::GetNextActorId() {}

