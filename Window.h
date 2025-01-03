#pragma once
#include <Windows.h>



class Window
{
public:
	Window();
	//Initialize the window
	bool init(HWND hwnd);
	bool broadcast();
	//Release the window
	bool release();
	bool isRunning();

	//EVENTS
	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();


	~Window();
protected:
	HWND m_hwnd;
	bool m_isRunning;
};

