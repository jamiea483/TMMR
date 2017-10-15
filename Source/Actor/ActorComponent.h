

class ActorComponent
{
	friend class ActorFactory;
protected:
	StrongActorPtr m_pOwner;
public:
	virtual ~ActorComponent(void) { }
	virtual bool VInit(TiXmlElement* pData) = 0;
	virtual void VPostInit(void) { }
	virtual void VUpdate(int deltaTime) { }
	virtual ComponentId VGetId(void) const { }
	virtual const char *VGetName() const = 0;
	static ComponentId GetIdFromName(const char* componentStr) {}

private:
	void SetOwner(StrongActorPtr pOwner) { }
};