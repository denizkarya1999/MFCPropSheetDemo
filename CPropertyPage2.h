#pragma once
#include "afxdialogex.h"


// CPropertyPage2 dialog

class CPropertyPage2 : public CPropertyPage
{
	DECLARE_DYNAMIC(CPropertyPage2)

public:
	CPropertyPage2();
	virtual ~CPropertyPage2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CPropertyPage2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
