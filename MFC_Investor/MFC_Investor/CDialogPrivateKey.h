#pragma once


// CDialogPrivateKey 对话框

class CDialogPrivateKey : public CDialog
{
	DECLARE_DYNAMIC(CDialogPrivateKey)

public:
	CDialogPrivateKey(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogPrivateKey();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_private };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_edit;
	CComboBox m_com;
	CListCtrl m_list;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
};
