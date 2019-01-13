// CDialogPassword.cpp: 实现文件
//

#include "stdafx.h"
#include "MFC_Investor.h"
#include "CDialogPassword.h"
#include "afxdialogex.h"


// CDialogPassword 对话框

IMPLEMENT_DYNAMIC(CDialogPassword, CDialog)

CDialogPassword::CDialogPassword(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_password, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CDialogPassword::~CDialogPassword()
{
}

void CDialogPassword::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit);
	DDX_Control(pDX, IDC_LIST1, m_edit2);
}


BEGIN_MESSAGE_MAP(CDialogPassword, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogPassword::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDialogPassword::OnBnClickedButton2)
END_MESSAGE_MAP()


// CDialogPassword 消息处理程序


void CDialogPassword::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString mystr;
	m_edit.GetWindowTextW(mystr);
	m_edit2.AddString(mystr);

}

#include <iostream>
#include <ctime>
using namespace std;

string randstr(string strCharElem, int nOutStrLen)
{
	string strRet;
	strRet.insert(0, nOutStrLen, '\0');





	int iRand = 0;
	for (int i = 0; i < nOutStrLen; ++i)
	{
		iRand = rand() % strCharElem.length();
		strRet[i] = strCharElem[iRand];
	}
	return strRet;
}


void CDialogPassword::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString mystr;
	string mystr = randstr("abcdefghigklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", 100);
	m_edit2.AddString((CStringW)(char*)mystr.c_str());
	m_edit.SetWindowTextW((CStringW)(char*)mystr.c_str());
	//m_edit2.AddString(mystr);
}
