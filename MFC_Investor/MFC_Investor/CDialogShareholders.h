#pragma once


// CDialogShareholders 对话框

class CDialogShareholders : public CDialog
{
	DECLARE_DYNAMIC(CDialogShareholders)

public:
	CDialogShareholders(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CDialogShareholders();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_shareholders };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CEdit m_edit1;
	CEdit m_edit2;
};
