#pragma once
#include "Window.h"
#include "GraphicsEngineDX9.h"


class AppWindow: public Window
{
public:
	AppWindow();
	~AppWindow();

	// Inherited via Window
	virtual void onCreate() override;
	virtual void onUpdate() override;
	virtual void onDestroy() override;

	GraphicsEngineDX9 m_Renderer;
};

