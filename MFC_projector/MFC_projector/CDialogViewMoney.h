#pragma once


// CDialogViewMoney 对话框

class CDialogViewMoney : public CDialog
{
	DECLARE_DYNAMIC(CDialogViewMoney)

public:
	CDialogViewMoney(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogViewMoney();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_viewMoney };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	virtual BOOL OnInitDialog();
};
