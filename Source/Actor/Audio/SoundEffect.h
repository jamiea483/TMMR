#include "AudioComponentInterface.h"
#include "Actor\Transform\Transform.h"

class SoundEffect : public AudioComponentInterface
{
	Transform m_transform;
public:
	SoundEffect();
	virtual bool VInit(char* pData, Transform transform) { return false; }// transform required
	virtual void PlayAtTime(float timeInSeconds);
	virtual void SetVolume(int volume) ;
	virtual void SetLooping(bool looping); 
	void PlayAtTimeAtTransformPosition(float timeInSeconds); // plays the sound effect at a location (gives the impression of it coming from a certain location/direction)

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
	
private:
	

};


