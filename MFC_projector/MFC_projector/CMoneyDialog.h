#pragma once


// CMoneyDialog 对话框

class CMoneyDialog : public CDialog
{
	DECLARE_DYNAMIC(CMoneyDialog)

public:
	CMoneyDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CMoneyDialog();
	int id;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_jie };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CComboBox m_com;
	CEdit m_edit1;
	CEdit m_edit2;
	CEdit m_edit3;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	BOOL getit();
};
