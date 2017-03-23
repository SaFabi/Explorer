#include "stdafx.h"  //________________________________________ WintemplaProject5.cpp
#include "WintemplaProject5.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	WintemplaProject5 app;
	app.CreateMainWindow(L"WintemplaProject5", cmdShow, IDI_WintemplaProject5, NULL, (HBRUSH)(COLOR_WINDOW + 1), hInstance);
	return app.MessageLoop(IDC_WintemplaProject5);
}

void WintemplaProject5::Window_Open(Win::Event& e)
{
	//________________________________________________________ flash1
	try
	{
		flash1.Activate();
		//Methods and Properties: Visual Studio > View > Object Browser > Browse ... > COM Tab (Select the Activex)
		flash1.comobj.Put(L"WMode", L"Transparent");
		//flash1.comobj.Put(L"Movie", L"C:\\Video.swf");
		//https://www.youtube.com/watch?v=RTb6mKAwftA
		flash1.comobj.Put(L"Movie", L"http://www.youtube.com/v/RTb6mKAwftA?fs=1&amp;hl=en_US");
		flash1.comobj.Method(L"Play");
		//flash1.UpdateSize();
	}
	catch(Com::Exception cex)
	{
		wchar_t text[512];
		cex.GetErrorText(text, 512);
		this->MessageBox(text, L"COM Error", MB_OK | MB_ICONERROR);
	}
	catch(_com_error & e)
	{
		this->MessageBox(e.ErrorMessage(), L"COM Error", MB_OK | MB_ICONERROR);
	}
}

