class Actor
{
	friend class ActorFactory;
public:
	typedef std::map<ComponentId, StrongActorComponentPtr> ActorComponents;
private:
	ActorId m_id; 
	ActorComponents m_components; 
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