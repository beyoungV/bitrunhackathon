#pragma once


// CDialogViewAllMoney 对话框

class CDialogViewAllMoney : public CDialog
{
	DECLARE_DYNAMIC(CDialogViewAllMoney)

public:
	CDialogViewAllMoney(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogViewAllMoney();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ViewAllMoney };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CListCtrl m_list;
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
};
