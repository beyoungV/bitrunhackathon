// CDialogdispute.cpp: 实现文件
//

#include "stdafx.h"
#include "MFC_Investor.h"
#include "CDialogdispute.h"
#include "afxdialogex.h"


// CDialogdispute 对话框

IMPLEMENT_DYNAMIC(CDialogdispute, CDialog)

CDialogdispute::CDialogdispute(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_dispute, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CDialogdispute::~CDialogdispute()
{
}

void CDialogdispute::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
}


BEGIN_MESSAGE_MAP(CDialogdispute, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialogdispute::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogdispute::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDialogdispute 消息处理程序


void CDialogdispute::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Word文件(*.doc)|*.doc|所有文件(*.*)|*.*||");
	// 构造保存文件对话框   
	//CFileDialog fileDlg(FALSE, _T("选择文件"), _T("选择白皮书"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);
	CFileDialog fileDlg(TRUE, _T("说明文件"), NULL, 0, szFilter, this);

	CString strFilePath;

	// 显示保存文件对话框   
	if (IDOK == fileDlg.DoModal())
	{
		// 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里   
		strFilePath = fileDlg.GetPathName();
		m_edit2.SetWindowTextW(strFilePath);
		//SetDlgItemText(IDC_SAVE_EDIT, strFilePath);
	}

}


void CDialogdispute::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(L"争议成功", L"争议成功", 0);
}
