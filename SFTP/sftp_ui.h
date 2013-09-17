//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef SFTP_UI_BASE_CLASSES_H
#define SFTP_UI_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/sizer.h>
#include <wx/dataview.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/gbsizer.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include "sftptreemodel.h"

class SSHAccountManagerDlgBase : public wxDialog
{
protected:
    wxDataViewListCtrl* m_dvListCtrlAccounts;
    wxButton* m_buttonNew;
    wxButton* m_buttonDelete;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
    virtual void OnEditAccount(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnAddAccount(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteAccount(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeleteAccountUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    SSHAccountManagerDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SSH Account Manager"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SSHAccountManagerDlgBase();
};


class AddSSHAcountDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText98;
    wxTextCtrl* m_textCtrlName;
    wxStaticText* m_staticHostIp;
    wxTextCtrl* m_textCtrlHost;
    wxStaticText* m_staticText45;
    wxTextCtrl* m_textCtrlPort;
    wxStaticText* m_staticText37;
    wxTextCtrl* m_textCtrlUsername;
    wxStaticText* m_staticText41;
    wxTextCtrl* m_textCtrlPassword;
    wxButton* m_button51;
    wxButton* m_button27;
    wxButton* m_button25;

protected:
    virtual void OnTestConnection(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTestConnectionUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    AddSSHAcountDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Add Account"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~AddSSHAcountDlgBase();
};


class SFTPBrowserBaseDlg : public wxDialog
{
protected:
    wxStaticText* m_staticText66;
    wxTextCtrl* m_textCtrlRemoteFolder;
    wxButton* m_buttonRefresh;
    wxStaticText* m_staticText82;
    wxChoice* m_choiceAccount;
    wxDataViewCtrl* m_dataview;
    wxObjectDataPtr<SFTPTreeModel> m_dataviewModel;

    wxTextCtrl* m_textCtrlInlineSearch;
    wxButton* m_button59;
    wxButton* m_button61;

protected:
    virtual void OnTextEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRefresh(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRefreshUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnItemActivated(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnItemSelected(wxDataViewEvent& event) { event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnTextUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFocusLost(wxFocusEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    SFTPBrowserBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SFTP Browser"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SFTPBrowserBaseDlg();
};

#endif
