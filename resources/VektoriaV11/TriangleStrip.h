#pragma once

#include "Geo.h"
#include "Light.h"
#include "TriangleList.h"

#define INDEX_INCREASE 1024

namespace Vektoria
{

class CTriangleStrip : public CGeo
{
	friend class CTriangleStrips;
private:
	void SetRoot(CRoot * proot);
	void Tick(CHMat & m, float & fTimeDelta);

public:
	CTriangleStrip();
	~CTriangleStrip();

	void Init();
	void Fini();

	void Draw(float fDistanceToCameraSquare, CHMat & mGlobal);
	void Update();

	void AddIndex(int iIndex);

	int * m_aiIndex;
	int m_iIndices;
	int m_iIndicesAllocated;

	bool m_bFirstDraw;
	int m_iRenderKind;

	void Flip(); // Vertauscht Vertexreihenfolge und dreht Normalen- und Tangentenvektor um 180 Grad
	void FlipSpin(); // Vertauscht Vertexreihenfolge, l�sst aber anders als Flip den Normalen- und Tangentenvektor unbeeinflusst (wichtig f�r die korrekte Anzeige nach Spiegelungen)

	CTriangleList * CopyToTriangleList(); // Gibt eine dem TriangleStrip �quivalente TriangleList aus
	void EstimateTangentsAndBinormals(); // Versucht, die Tangenten und die Binormalen f�r das Bumpmapping aus den gegebenen UV-Koordianten zu erraten  

private:
	void AddIndexFirst(int iIndex);
};

}