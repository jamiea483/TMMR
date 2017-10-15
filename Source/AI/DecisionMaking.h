class DecisionMaking : public AIComponentInterface
{
private: 
	std::list<Actor> m_actorsWithAI;
	Transform m_transform;

public:
	DecisionMaking();
	virtual bool VInit(TiXmlElement* pData, Transform transform); // gets transform component of actor as well (required).
	void InitListOfActorsWithAI(std::list<Actor> actors);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	void MakeDecision();

}


