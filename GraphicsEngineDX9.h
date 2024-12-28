#pragma once
#include <d3d9.h>

/*
	this is a singleton class
	based on DirectX 9
*/

class GraphicsEngineDX9 
{
public:
	GraphicsEngineDX9(HWND hwnd);
	~GraphicsEngineDX9();
	bool init(); // initialize
	void renderFrame();
	bool release(); // release all of the resources

public:
	HWND m_hwnd; // hWindow from appWindow object

private:
	IDirect3D9* m_Direct3D;
	IDirect3DDevice9* m_d3dDevice;
};

