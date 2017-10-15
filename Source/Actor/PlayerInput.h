#include "PlayerComponentInterface.h"

class PlayerInput : public PlayerComponentInterface
{
public:
	PlayerInput();
	virtual bool VInit(char* pData) { return false; }
	void KeyDown(int keyCode);
	void KeyUp(int keyCode);

	static const char *g_Name;
	virtual const char *VGetName() const { return g_Name; }
private:
	void HandleInput(int keyCode, char* inputType);

};


