// dllmain.cpp: DllMain 的实现。

#include "stdafx.h"
#include "resource.h"
#include "MFCInvestorHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CMFCInvestorHandlersModule _AtlModule;

class CMFCInvestorHandlersApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CMFCInvestorHandlersApp, CWinApp)
END_MESSAGE_MAP()

CMFCInvestorHandlersApp theApp;

BOOL CMFCInvestorHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, nullptr))
		return FALSE;
	return CWinApp::InitInstance();
}

int CMFCInvestorHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
