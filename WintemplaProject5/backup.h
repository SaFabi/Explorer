#pragma once  //______________________________________ WintemplaProject5.h  
#include "Resource.h"
class WintemplaProject5: public Win::Window
{
public:
	WintemplaProject5()
	{
	}
	~WintemplaProject5()
	{
	}
	const wchar_t * GetClassName(){return L"WintemplaProject5";}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Com::Container flash1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"WintemplaProject5";
		flash1.CreateX(WS_EX_CLIENTEDGE, L"ShockwaveFlash.ShockwaveFlash", WS_CHILD | WS_VISIBLE, 0.15875, 0.15875, 14.36688, 9.63083, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
