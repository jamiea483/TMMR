class Pathfinding : public AIComponentInterface
{
private: 
	std::list<Actor> m_actorsWithCollider;
	Transform m_transform;

public:
	Pathfinding();
	virtual bool VInit(TiXmlElement* pData, Transform transform); // gets transform component of actor as well (required).
	void InitListOfActorsWithCollider(std::list<Actor> actors);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	void FindPathToTarget(Vector2 target);

}


