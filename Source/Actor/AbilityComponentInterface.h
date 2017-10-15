class AbilityComponentInterface : public ActorComponent
{
	std::list<Actor> m_actorsWithCollider;
public:
	const static ComponentId g_COMPONENT_ID;
	
	AbilityComponentInterface();
	virtual ComponentId VGetComponentId(void) const { }
	void InitListOfActorsWithCollider(std::list<Actor> actors); // requires list of actors with colliders (could be affected by ability)
	virtual void ApplyEffect() = 0;

private:
	

}


