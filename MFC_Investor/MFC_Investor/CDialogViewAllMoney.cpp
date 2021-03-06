// CDialogViewAllMoney.cpp: 实现文件
//

#include "stdafx.h"
#include "MFC_Investor.h"
#include "CDialogViewAllMoney.h"
#include "afxdialogex.h"


// CDialogViewAllMoney 对话框

IMPLEMENT_DYNAMIC(CDialogViewAllMoney, CDialog)

CDialogViewAllMoney::CDialogViewAllMoney(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_ViewAllMoney, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CDialogViewAllMoney::~CDialogViewAllMoney()
{
}

void CDialogViewAllMoney::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(CDialogViewAllMoney, CDialog)
	ON_NOTIFY(LVN_ITEMCHANGED, IDC_LIST1, &CDialogViewAllMoney::OnLvnItemchangedList1)
END_MESSAGE_MAP()


// CDialogViewAllMoney 消息处理程序


BOOL CDialogViewAllMoney::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	LONG lStyle;
	lStyle = GetWindowLong(m_list.m_hWnd, GWL_STYLE);//获取当前窗口style 
	lStyle &= ~LVS_TYPEMASK; //清除显示方式位 
	lStyle |= LVS_REPORT; //设置style 
	SetWindowLong(m_list.m_hWnd, GWL_STYLE, lStyle);//设置style

	DWORD dwStyle = m_list.GetExtendedStyle();
	dwStyle |= LVS_EX_FULLROWSELECT;//选中某行使整行高亮（只适用与report风格的listctrl） 
	dwStyle |= LVS_EX_GRIDLINES;//网格线（只适用与report风格的listctrl） 
	dwStyle |= LVS_EX_CHECKBOXES;//item前生成checkbox控件

	m_list.InsertColumn(0, L"投资项目", LVCFMT_LEFT, 100);//插入列 
	m_list.InsertColumn(1, L"投资金额", LVCFMT_LEFT, 100);
	m_list.InsertColumn(3, L"投资说明", LVCFMT_LEFT, 500);
	int nRow = 0;
	nRow = m_list.InsertItem(0, L"OpenAIChain");//插入行
	m_list.SetItemText(0, 1, _T("100 EOS"));
	m_list.SetItemText(0, 2, _T("人工智能区块链"));



	nRow = m_list.InsertItem(0, L"TRX");//插入行
	m_list.SetItemText(0, 1, _T("0"));
	m_list.SetItemText(0, 2, _T("0"));


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CDialogViewAllMoney::OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMLISTVIEW pNMLV = reinterpret_cast<LPNMLISTVIEW>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
}
