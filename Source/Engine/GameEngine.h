#include "Assets.h"
#include "Screen.h"
#include "Actor\ActorSpawnManager.h"

class GameEngine
{
private:
	typedef std::map<ActorId, StrongActorPtr> ActorMap;
	ActorMap m_actors; 
	Screen currentScreen;
	Assets assetsContainer; // the container of all the assets in the game
	ActorSpawnManager spawner;

public:
	GameEngine(string initialScreen);
	void Run(); 

	void InitActors(); // calls the actor list builder of the current screen.
	void CreateNewActor();  // Creates new actor. (if it has a physics/AI component, passes a list of actors with physics/AI to it)
	void ProcessEvents();
	void Update(float deltaTime); // calls Update function for all member objects that need to run Update
	void Draw();
};


