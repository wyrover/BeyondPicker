#ifndef __COPYRIGHTPANEL_H__20050906__
#define __COPYRIGHTPANEL_H__20050906__


#include "resource.h"


class CCopyrightPanel : public CDialogImpl< CCopyrightPanel >
{
public:
	enum { IDD = IDD_COPYRIGHT_PANEL };
	
	BEGIN_MSG_MAP( CCopyrightPanel )
		MESSAGE_HANDLER( WM_INITDIALOG, OnInitDialog )
		//COMMAND_ID_HANDLER(IDOK, OnCloseCmd)
		//COMMAND_ID_HANDLER(IDCANCEL, OnCloseCmd)
	END_MSG_MAP()
		
	// Handler prototypes (uncomment arguments if needed):
	//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
	//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
	//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)
	LRESULT OnInitDialog( UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL &bHandled );

private:
	CHyperLink m_HyperLink;
};


#endif  // __COPYRIGHTPANEL_H__20050906__