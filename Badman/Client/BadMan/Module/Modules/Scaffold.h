#pragma once
#include "Module.h"
class Scaffold : public IModule {
private:
	bool spoof = false;
	bool down = false;
	bool up = false;
	float motion = 0.5f;
	bool tryScaffold(vec3_t blockBelow);
	bool tryTower(vec3_t blockBelow);
	bool findBlock();

public:
	Scaffold();
	~Scaffold();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onDisable() override;
};
