// dllmain.h: 模块类的声明。

class CMFCInvestorHandlersModule : public ATL::CAtlDllModuleT<CMFCInvestorHandlersModule>
{
public :
	DECLARE_LIBID(LIBID_MFCInvestorHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MFCINVESTORHANDLERS, "{3fedce68-6ca1-41c8-b7e6-801a1f163fca}")
};

extern class CMFCInvestorHandlersModule _AtlModule;
