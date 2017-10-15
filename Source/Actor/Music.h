class Music : public AudioComponentInterface
{
public:
	Music();
	virtual bool VInit(TiXmlElement* pData); 
	virtual void PlayAtTime(float timeInSeconds);
	virtual void SetVolume(int volume) ;
	virtual void SetLooping(bool looping); 
	
	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
private:
	

}


