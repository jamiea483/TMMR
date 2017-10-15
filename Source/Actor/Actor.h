#include "ActorComponent.h"
 
class Actor
{
	friend class ActorFactory;
public:
	typedef std::map<ComponentId, StrongActorComponentPtr> ActorComponents;
private:
	typedef unsigned int ActorId; 
	ActorId m_id;
	ActorComponent m_components; 
public:
	explicit Actor(ActorId id);
	~Actor(void);
	bool Init(TiXmlElement* pData);
	void PostInit(void);
	void Destroy(void);
	void Update(float deltaTime);
	ActorId GetId(void) const;
	template <class ComponentType> weak_ptr<ComponentType> GetComponent(ComponentId id) {}
	void AddComponent(StrongActorComponentPtr pComponent);
};