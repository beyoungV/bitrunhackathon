#pragma once


// CDialogViewCost 对话框

class CDialogViewCost : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogViewCost)

public:
	CDialogViewCost(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogViewCost();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ViewCost };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	CEdit m_edit;
	//afx_msg void OnBnClickedButton1();
	virtual BOOL OnInitDialog();
	afx_msg void OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult);
};
