
// monthly_report_by_customer.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "monthly_report_by_customer.h"
#include "monthly_report_by_customerDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmonthly_report_by_customerApp

BEGIN_MESSAGE_MAP(Cmonthly_report_by_customerApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// Cmonthly_report_by_customerApp construction

Cmonthly_report_by_customerApp::Cmonthly_report_by_customerApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Cmonthly_report_by_customerApp object

Cmonthly_report_by_customerApp theApp;


// Cmonthly_report_by_customerApp initialization

BOOL Cmonthly_report_by_customerApp::InitInstance()
{
	CWinApp::InitInstance();


	// Create the shell manager, in case the dialog contains
	// any shell tree view or shell list view controls.
	CShellManager *pShellManager = new CShellManager;

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	Cmonthly_report_by_customerDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Delete the shell manager created above.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}

