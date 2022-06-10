//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: UI.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "UI.hpp"

// Declare the bitmap loading function
extern void wxC10A1InitBitmapResources();

static bool bBitmapLoaded = false;

MainFrameBase::MainFrameBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                             const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC10A1InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);

    m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    boxSizer1->Add(m_panel2, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer3 = new wxBoxSizer(wxVERTICAL);
    m_panel2->SetSizer(boxSizer3);

    m_splitter4 = new wxSplitterWindow(m_panel2, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel2, wxSize(-1, -1)),
                                       wxSP_LIVE_UPDATE | wxSP_NO_XP_THEME | wxSP_3DSASH);
    m_splitter4->SetSashGravity(0.5);
    m_splitter4->SetMinimumPaneSize(10);

    boxSizer3->Add(m_splitter4, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_splitterPage6 =
        new wxPanel(m_splitter4, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_splitter4, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    wxBoxSizer* boxSizer10 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage6->SetSizer(boxSizer10);

    m_stcText = new wxStyledTextCtrl(m_splitterPage6, wxID_ANY, wxDefaultPosition,
                                     wxDLG_UNIT(m_splitterPage6, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcText->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcText->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcText->SetMarginSensitive(4, true);
    m_stcText->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcText->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcText->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcText->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcText->SetMarginWidth(2, 0);
    m_stcText->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    int m_stcText_PixelWidth = 4 + 5 * m_stcText->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcText->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcText->SetMarginWidth(0, m_stcText_PixelWidth);

    // Configure the line symbol margin
    m_stcText->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcText->SetMarginMask(3, 0);
    m_stcText->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcText->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcText->StyleClearAll();
    m_stcText->SetWrapMode(0);
    m_stcText->SetIndentationGuides(0);
    m_stcText->SetKeyWords(0, wxT(""));
    m_stcText->SetKeyWords(1, wxT(""));
    m_stcText->SetKeyWords(2, wxT(""));
    m_stcText->SetKeyWords(3, wxT(""));
    m_stcText->SetKeyWords(4, wxT(""));

    boxSizer10->Add(m_stcText, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_splitterPage8 =
        new wxPanel(m_splitter4, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_splitter4, wxSize(-1, -1)), wxTAB_TRAVERSAL);
    m_splitter4->SplitHorizontally(m_splitterPage6, m_splitterPage8, 0);

    wxBoxSizer* boxSizer9 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage8->SetSizer(boxSizer9);

    m_notebook17 = new wxNotebook(m_splitterPage8, wxID_ANY, wxDefaultPosition,
                                  wxDLG_UNIT(m_splitterPage8, wxSize(-1, -1)), wxBK_DEFAULT);
    m_notebook17->SetName(wxT("m_notebook17"));

    boxSizer9->Add(m_notebook17, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel18 = new wxPanel(m_notebook17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook17, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook17->AddPage(m_panel18, _("Stack"), false);

    wxBoxSizer* boxSizer20 = new wxBoxSizer(wxVERTICAL);
    m_panel18->SetSizer(boxSizer20);

    m_stcStack = new wxStyledTextCtrl(m_panel18, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel18, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcStack->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcStack->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcStack->SetMarginSensitive(4, true);
    m_stcStack->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcStack->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcStack->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcStack->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcStack->SetMarginWidth(2, 0);
    m_stcStack->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    int m_stcStack_PixelWidth = 4 + 5 * m_stcStack->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcStack->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcStack->SetMarginWidth(0, m_stcStack_PixelWidth);

    // Configure the line symbol margin
    m_stcStack->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcStack->SetMarginMask(3, 0);
    m_stcStack->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcStack->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcStack->StyleClearAll();
    m_stcStack->SetWrapMode(0);
    m_stcStack->SetIndentationGuides(0);
    m_stcStack->SetKeyWords(0, wxT(""));
    m_stcStack->SetKeyWords(1, wxT(""));
    m_stcStack->SetKeyWords(2, wxT(""));
    m_stcStack->SetKeyWords(3, wxT(""));
    m_stcStack->SetKeyWords(4, wxT(""));

    boxSizer20->Add(m_stcStack, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel19 = new wxPanel(m_notebook17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook17, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook17->AddPage(m_panel19, _("Threads"), false);

    wxBoxSizer* boxSizer21 = new wxBoxSizer(wxVERTICAL);
    m_panel19->SetSizer(boxSizer21);

    m_stcThreads =
        new wxStyledTextCtrl(m_panel19, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel19, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcThreads->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcThreads->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcThreads->SetMarginSensitive(4, true);
    m_stcThreads->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcThreads->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcThreads->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcThreads->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcThreads->SetMarginWidth(2, 0);
    m_stcThreads->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    int m_stcThreads_PixelWidth = 4 + 5 * m_stcThreads->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcThreads->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcThreads->SetMarginWidth(0, m_stcThreads_PixelWidth);

    // Configure the line symbol margin
    m_stcThreads->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcThreads->SetMarginMask(3, 0);
    m_stcThreads->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcThreads->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcThreads->StyleClearAll();
    m_stcThreads->SetWrapMode(0);
    m_stcThreads->SetIndentationGuides(0);
    m_stcThreads->SetKeyWords(0, wxT(""));
    m_stcThreads->SetKeyWords(1, wxT(""));
    m_stcThreads->SetKeyWords(2, wxT(""));
    m_stcThreads->SetKeyWords(3, wxT(""));
    m_stcThreads->SetKeyWords(4, wxT(""));

    boxSizer21->Add(m_stcThreads, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel27 = new wxPanel(m_notebook17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook17, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook17->AddPage(m_panel27, _("Log"), false);

    wxBoxSizer* boxSizer28 = new wxBoxSizer(wxVERTICAL);
    m_panel27->SetSizer(boxSizer28);

    m_stcLog = new wxStyledTextCtrl(m_panel27, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel27, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcLog->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcLog->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcLog->SetMarginSensitive(4, true);
    m_stcLog->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcLog->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcLog->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcLog->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcLog->SetMarginWidth(2, 0);
    m_stcLog->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    int m_stcLog_PixelWidth = 4 + 5 * m_stcLog->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcLog->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcLog->SetMarginWidth(0, m_stcLog_PixelWidth);

    // Configure the line symbol margin
    m_stcLog->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcLog->SetMarginMask(3, 0);
    m_stcLog->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcLog->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcLog->StyleClearAll();
    m_stcLog->SetWrapMode(0);
    m_stcLog->SetIndentationGuides(0);
    m_stcLog->SetKeyWords(0, wxT(""));
    m_stcLog->SetKeyWords(1, wxT(""));
    m_stcLog->SetKeyWords(2, wxT(""));
    m_stcLog->SetKeyWords(3, wxT(""));
    m_stcLog->SetKeyWords(4, wxT(""));

    boxSizer28->Add(m_stcLog, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel30 = new wxPanel(m_notebook17, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook17, wxSize(-1, -1)),
                            wxTAB_TRAVERSAL);
    m_notebook17->AddPage(m_panel30, _("Scope Variables"), false);

    wxBoxSizer* boxSizer31 = new wxBoxSizer(wxVERTICAL);
    m_panel30->SetSizer(boxSizer31);

    m_stcScopes =
        new wxStyledTextCtrl(m_panel30, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel30, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcScopes->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcScopes->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcScopes->SetMarginSensitive(4, true);
    m_stcScopes->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcScopes->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcScopes->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcScopes->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcScopes->SetMarginWidth(2, 0);
    m_stcScopes->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    int m_stcScopes_PixelWidth = 4 + 5 * m_stcScopes->TextWidth(wxSTC_STYLE_LINENUMBER, wxT("9"));
    m_stcScopes->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcScopes->SetMarginWidth(0, m_stcScopes_PixelWidth);

    // Configure the line symbol margin
    m_stcScopes->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcScopes->SetMarginMask(3, 0);
    m_stcScopes->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcScopes->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcScopes->StyleClearAll();
    m_stcScopes->SetWrapMode(0);
    m_stcScopes->SetIndentationGuides(0);
    m_stcScopes->SetKeyWords(0, wxT(""));
    m_stcScopes->SetKeyWords(1, wxT(""));
    m_stcScopes->SetKeyWords(2, wxT(""));
    m_stcScopes->SetKeyWords(3, wxT(""));
    m_stcScopes->SetKeyWords(4, wxT(""));

    boxSizer31->Add(m_stcScopes, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_toolbar12 = this->CreateToolBar(wxTB_HORZ_TEXT | wxTB_NOICONS | wxTB_FLAT, wxID_ANY);
    m_toolbar12->SetToolBitmapSize(wxSize(16, 16));

    m_toolbar12->AddTool(wxID_EXECUTE, _("Connect..."), wxXmlResource::Get()->LoadBitmap(wxT("placeholder16")),
                         wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar12->AddSeparator();

    m_toolbar12->AddTool(wxID_FORWARD, _("Next"),
                         wxArtProvider::GetBitmap(wxART_GO_DOWN, wxART_TOOLBAR, wxSize(24, 24)), wxNullBitmap,
                         wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar12->AddTool(wxID_DOWN, _("Step In"),
                         wxArtProvider::GetBitmap(wxART_GO_FORWARD, wxART_TOOLBAR, wxSize(24, 24)), wxNullBitmap,
                         wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar12->AddTool(wxID_UP, _("Step Out"), wxArtProvider::GetBitmap(wxART_GO_BACK, wxART_TOOLBAR, wxSize(24, 24)),
                         wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""), NULL);
    m_toolbar12->Realize();

#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook17)) {
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook17);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook17);
    }
#endif

    SetName(wxT("MainFrameBase"));
    SetSize(wxDLG_UNIT(this, wxSize(800, 600)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
    // Connect events
    this->Bind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnConnect, this, wxID_EXECUTE);
    this->Bind(wxEVT_UPDATE_UI, &MainFrameBase::OnConnectUI, this, wxID_EXECUTE);
    this->Bind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnNext, this, wxID_FORWARD);
    this->Bind(wxEVT_UPDATE_UI, &MainFrameBase::OnNextUI, this, wxID_FORWARD);
    this->Bind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnStepIn, this, wxID_DOWN);
    this->Bind(wxEVT_UPDATE_UI, &MainFrameBase::OnStepInUI, this, wxID_DOWN);
    this->Bind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnStepOut, this, wxID_UP);
    this->Bind(wxEVT_UPDATE_UI, &MainFrameBase::OnStepOutUI, this, wxID_UP);
}

MainFrameBase::~MainFrameBase()
{
    this->Unbind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnConnect, this, wxID_EXECUTE);
    this->Unbind(wxEVT_UPDATE_UI, &MainFrameBase::OnConnectUI, this, wxID_EXECUTE);
    this->Unbind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnNext, this, wxID_FORWARD);
    this->Unbind(wxEVT_UPDATE_UI, &MainFrameBase::OnNextUI, this, wxID_FORWARD);
    this->Unbind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnStepIn, this, wxID_DOWN);
    this->Unbind(wxEVT_UPDATE_UI, &MainFrameBase::OnStepInUI, this, wxID_DOWN);
    this->Unbind(wxEVT_COMMAND_TOOL_CLICKED, &MainFrameBase::OnStepOut, this, wxID_UP);
    this->Unbind(wxEVT_UPDATE_UI, &MainFrameBase::OnStepOutUI, this, wxID_UP);
}
