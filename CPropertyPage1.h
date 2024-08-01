#pragma once
#include "afxdialogex.h"


// CPropertyPage1 dialog

class CPropertyPage1 : public CPropertyPage
{
	DECLARE_DYNAMIC(CPropertyPage1)

public:
	CPropertyPage1();
	virtual ~CPropertyPage1();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CPropertyPage1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
