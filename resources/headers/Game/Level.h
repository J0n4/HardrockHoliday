#pragma once

#include "Root.h"
#include "MapPart.h"
#include "Graphics\PlayerVisual.h"
#include <memory>

using namespace Vektoria;

class Level
{

public:
	Level();
	~Level();

	virtual void initialize(Vektoria::CScene* scene);

	PlayerVisual* getPlayer();

	MapPart* getNextMapPart();

private:

	int mMapPartLoadIndex;

	PlayerVisual mPlayer;

	std::vector<MapPart*> mMapParts;

protected:
	
	void addMapPart(MapPart* p);

};

