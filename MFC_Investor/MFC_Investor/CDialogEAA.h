#pragma once


// CDialogEAA 对话框

class CDialogEAA : public CDialog
{
	DECLARE_DYNAMIC(CDialogEAA)

public:
	CDialogEAA(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogEAA();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_EAA };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list;
	CEdit m_edit;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	virtual BOOL OnInitDialog();
	afx_msg void OnHdnItemclickList1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMClickList1(NMHDR *pNMHDR, LRESULT *pResult);
	CEdit m_edit1;
};
