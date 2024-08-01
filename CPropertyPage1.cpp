// CPropertyPage1.cpp : implementation file
//

#include "pch.h"
#include "MFCPropSheetDemo.h"
#include "afxdialogex.h"
#include "CPropertyPage1.h"


// CPropertyPage1 dialog

IMPLEMENT_DYNAMIC(CPropertyPage1, CPropertyPage)

CPropertyPage1::CPropertyPage1()
	: CPropertyPage(IDD_PROPPAGE_1)
{

}

CPropertyPage1::~CPropertyPage1()
{
}

void CPropertyPage1::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPropertyPage1, CPropertyPage)
END_MESSAGE_MAP()


// CPropertyPage1 message handlers
