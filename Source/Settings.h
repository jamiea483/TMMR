class Settings
{
public:
	bool m_soundEffectsOn;
	bool m_musicOn;
	int m_musicVolume;
	int m_soundEffectsVolume;
	int resolutionX;
	int resolutionY;

	Settings();
	void SetMusicVolume(int vol);
	void setResolution(int x, int y);

private:
	

}


