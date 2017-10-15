#include "ActorComponent.h"

class AudioComponentInterface : public ActorComponent
{
	bool m_looping;
	int m_volume;
	
public:
	const static ComponentId g_COMPONENT_ID;

	
	AudioComponentInterface();
	virtual ComponentId VGetComponentId(void) const { }
	virtual void PlayAtTime(float timeInSeconds) = 0;
	virtual void SetVolume(int volume) = 0;
	virtual void SetLooping(bool looping) = 0; 
private:
	

};


