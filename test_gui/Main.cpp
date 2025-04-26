//#include <wx/wx.h>
//
//class App : public wxApp {
//public:
//    bool OnInit() {
//        wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(600, 400));
//        wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
//        wxStaticText* text = new wxStaticText(window, wxID_ANY, "Well Done!\nEverything seems to be working",
//            wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
//        text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
//        sizer->Add(text, 1, wxALIGN_CENTER);
//        window->SetSizer(sizer);
//        window->Show();
//        return true;
//    }
//};
//
//wxIMPLEMENT_APP(App);

//#include <wx/wx.h>
//#include <wx/listctrl.h>
//
//class LibraryFrame : public wxFrame {
//public:
//    LibraryFrame(const wxString& title);
//
//private:
//    wxTextCtrl* idInput;
//    wxTextCtrl* titleInput;
//    wxTextCtrl* authorInput;
//    wxTextCtrl* quantityInput;
//    wxListCtrl* bookList;
//    wxTextCtrl* searchInput;
//
//    void OnAddBook(wxCommandEvent& event);
//    void OnSearchBook(wxCommandEvent& event);
//    void OnIssueBook(wxCommandEvent& event);
//    void OnReturnBook(wxCommandEvent& event);
//
//    wxDECLARE_EVENT_TABLE();
//};
//
//enum {
//    ID_AddBook = 1,
//    ID_SearchBook,
//    ID_IssueBook,
//    ID_ReturnBook
//};
//
//wxBEGIN_EVENT_TABLE(LibraryFrame, wxFrame)
//EVT_BUTTON(ID_AddBook, LibraryFrame::OnAddBook)
//EVT_BUTTON(ID_SearchBook, LibraryFrame::OnSearchBook)
//EVT_BUTTON(ID_IssueBook, LibraryFrame::OnIssueBook)
//EVT_BUTTON(ID_ReturnBook, LibraryFrame::OnReturnBook)
//wxEND_EVENT_TABLE()
//
//class LibraryApp : public wxApp {
//public:
//    virtual bool OnInit();
//};
//
//wxIMPLEMENT_APP(LibraryApp);
//
//bool LibraryApp::OnInit() {
//    LibraryFrame* frame = new LibraryFrame("Simple Library Management System");
//    frame->Show(true);
//    return true;
//}
//
//LibraryFrame::LibraryFrame(const wxString& title)
//    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
//{
//    wxPanel* panel = new wxPanel(this, wxID_ANY);
//
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    // --- Add Book Section ---
//    wxStaticBoxSizer* addBox = new wxStaticBoxSizer(wxVERTICAL, panel, "Add New Book");
//
//    idInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1));
//    titleInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1));
//    authorInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1));
//    quantityInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1));
//
//    addBox->Add(new wxStaticText(panel, wxID_ANY, "Book ID:"), 0, wxTOP, 5);
//    addBox->Add(idInput, 0, wxEXPAND | wxBOTTOM, 5);
//
//    addBox->Add(new wxStaticText(panel, wxID_ANY, "Title:"), 0, wxTOP, 5);
//    addBox->Add(titleInput, 0, wxEXPAND | wxBOTTOM, 5);
//
//    addBox->Add(new wxStaticText(panel, wxID_ANY, "Author:"), 0, wxTOP, 5);
//    addBox->Add(authorInput, 0, wxEXPAND | wxBOTTOM, 5);
//
//    addBox->Add(new wxStaticText(panel, wxID_ANY, "Quantity:"), 0, wxTOP, 5);
//    addBox->Add(quantityInput, 0, wxEXPAND | wxBOTTOM, 5);
//
//    addBox->Add(new wxButton(panel, ID_AddBook, "Add Book"), 0, wxALIGN_CENTER | wxTOP, 10);
//
//    mainSizer->Add(addBox, 0, wxEXPAND | wxALL, 10);
//
//    // --- Search Section ---
//    wxStaticBoxSizer* searchBox = new wxStaticBoxSizer(wxHORIZONTAL, panel, "Search Book");
//
//    searchInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(300, -1));
//    searchBox->Add(searchInput, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);
//    searchBox->Add(new wxButton(panel, ID_SearchBook, "Search"), 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);
//
//    mainSizer->Add(searchBox, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);
//
//    // --- Book List ---
//    bookList = new wxListCtrl(panel, wxID_ANY, wxDefaultPosition, wxSize(-1, 300),
//        wxLC_REPORT | wxLC_SINGLE_SEL);
//
//    bookList->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 100);
//    bookList->InsertColumn(1, "Title", wxLIST_FORMAT_LEFT, 200);
//    bookList->InsertColumn(2, "Author", wxLIST_FORMAT_LEFT, 150);
//    bookList->InsertColumn(3, "Quantity", wxLIST_FORMAT_LEFT, 80);
//
//    mainSizer->Add(bookList, 1, wxEXPAND | wxALL, 10);
//
//    // --- Issue / Return Button ---
//    wxBoxSizer* actionSizer = new wxBoxSizer(wxHORIZONTAL);
//    actionSizer->Add(new wxButton(panel, ID_IssueBook, "Issue Book"), 0, wxALL, 5);
//    actionSizer->Add(new wxButton(panel, ID_ReturnBook, "Return Book"), 0, wxALL, 5);
//
//    mainSizer->Add(actionSizer, 0, wxALIGN_CENTER);
//
//    panel->SetSizer(mainSizer);
//}
//
//void LibraryFrame::OnAddBook(wxCommandEvent& event) {
//    // Xử lý thêm sách ở đây (chưa làm theo yêu cầu)
//}
//
//void LibraryFrame::OnSearchBook(wxCommandEvent& event) {
//    // Xử lý tìm kiếm ở đây (chưa làm theo yêu cầu)
//}
//
//void LibraryFrame::OnIssueBook(wxCommandEvent& event) {
//    // Xử lý mượn sách ở đây (chưa làm theo yêu cầu)
//}
//
//void LibraryFrame::OnReturnBook(wxCommandEvent& event) {
//    // Xử lý trả sách ở đây (chưa làm theo yêu cầu)
//}


//#include <wx/wx.h>
//#include <wx/listctrl.h>
//
//// --- AddBookDialog ---
//class AddBookDialog : public wxDialog {
//public:
//    AddBookDialog(wxWindow* parent);
//
//    wxString GetID() const { return idInput->GetValue(); }
//    wxString GetTitle() const { return titleInput->GetValue(); }
//    wxString GetAuthor() const { return authorInput->GetValue(); }
//    wxString GetQuantity() const { return quantityInput->GetValue(); }
//
//private:
//    wxTextCtrl* idInput;
//    wxTextCtrl* titleInput;
//    wxTextCtrl* authorInput;
//    wxTextCtrl* quantityInput;
//};
//
//// --- LibraryFrame ---
//class LibraryFrame : public wxFrame {
//public:
//    LibraryFrame(const wxString& title);
//
//private:
//    wxListCtrl* bookList;
//    wxTextCtrl* searchInput;
//
//    void OnAddBook(wxCommandEvent& event);
//    void OnSearchBook(wxCommandEvent& event);
//    void OnIssueBook(wxCommandEvent& event);
//    void OnReturnBook(wxCommandEvent& event);
//
//    wxDECLARE_EVENT_TABLE();
//};
//
//enum {
//    ID_AddBook = 1,
//    ID_SearchBook,
//    ID_IssueBook,
//    ID_ReturnBook
//};
//
//wxBEGIN_EVENT_TABLE(LibraryFrame, wxFrame)
//EVT_BUTTON(ID_AddBook, LibraryFrame::OnAddBook)
//EVT_BUTTON(ID_SearchBook, LibraryFrame::OnSearchBook)
//EVT_BUTTON(ID_IssueBook, LibraryFrame::OnIssueBook)
//EVT_BUTTON(ID_ReturnBook, LibraryFrame::OnReturnBook)
//wxEND_EVENT_TABLE()
//
//class LibraryApp : public wxApp {
//public:
//    virtual bool OnInit();
//};
//
//wxIMPLEMENT_APP(LibraryApp);
//
//// --- Implementation of AddBookDialog ---
//AddBookDialog::AddBookDialog(wxWindow* parent)
//    : wxDialog(parent, wxID_ANY, "Add New Book", wxDefaultPosition, wxSize(300, 300))
//{
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    idInput = new wxTextCtrl(this, wxID_ANY);
//    titleInput = new wxTextCtrl(this, wxID_ANY);
//    authorInput = new wxTextCtrl(this, wxID_ANY);
//    quantityInput = new wxTextCtrl(this, wxID_ANY);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Book ID:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(idInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Title:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(titleInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Author:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(authorInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Quantity:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(quantityInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(CreateButtonSizer(wxOK | wxCANCEL), 0, wxALIGN_CENTER | wxALL, 10);
//
//    SetSizerAndFit(mainSizer);
//}
//
//// --- Implementation of LibraryFrame ---
//bool LibraryApp::OnInit() {
//    LibraryFrame* frame = new LibraryFrame("Simple Library Management System");
//    frame->Show(true);
//    return true;
//}
//
//LibraryFrame::LibraryFrame(const wxString& title)
//    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
//{
//    wxPanel* panel = new wxPanel(this, wxID_ANY);
//
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    // Only one Add Book Button
//    mainSizer->Add(new wxButton(panel, ID_AddBook, "Add Book"), 0, wxALL | wxCENTER, 10);
//
//    // Search
//    wxStaticBoxSizer* searchBox = new wxStaticBoxSizer(wxHORIZONTAL, panel, "Search Book");
//    searchInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(300, -1));
//    searchBox->Add(searchInput, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);
//    searchBox->Add(new wxButton(panel, ID_SearchBook, "Search"), 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);
//
//    mainSizer->Add(searchBox, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);
//
//    // Book List
//    bookList = new wxListCtrl(panel, wxID_ANY, wxDefaultPosition, wxSize(-1, 400),
//        wxLC_REPORT | wxLC_SINGLE_SEL);
//
//    bookList->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 100);
//    bookList->InsertColumn(1, "Title", wxLIST_FORMAT_LEFT, 200);
//    bookList->InsertColumn(2, "Author", wxLIST_FORMAT_LEFT, 150);
//    bookList->InsertColumn(3, "Quantity", wxLIST_FORMAT_LEFT, 80);
//
//    mainSizer->Add(bookList, 1, wxEXPAND | wxALL, 10);
//
//    // Issue / Return
//    wxBoxSizer* actionSizer = new wxBoxSizer(wxHORIZONTAL);
//    actionSizer->Add(new wxButton(panel, ID_IssueBook, "Issue Book"), 0, wxALL, 5);
//    actionSizer->Add(new wxButton(panel, ID_ReturnBook, "Return Book"), 0, wxALL, 5);
//
//    mainSizer->Add(actionSizer, 0, wxALIGN_CENTER);
//
//    panel->SetSizer(mainSizer);
//}
//
//void LibraryFrame::OnAddBook(wxCommandEvent& event) {
//    AddBookDialog dialog(this);
//    if (dialog.ShowModal() == wxID_OK) {
//        // Lấy thông tin từ dialog
//        long index = bookList->InsertItem(bookList->GetItemCount(), dialog.GetID());
//        bookList->SetItem(index, 1, dialog.GetTitle());
//        bookList->SetItem(index, 2, dialog.GetAuthor());
//        bookList->SetItem(index, 3, dialog.GetQuantity());
//    }
//}
//
//void LibraryFrame::OnSearchBook(wxCommandEvent& event) {
//    // Xử lý tìm kiếm
//}
//
//void LibraryFrame::OnIssueBook(wxCommandEvent& event) {
//    // Xử lý mượn sách
//}
//
//void LibraryFrame::OnReturnBook(wxCommandEvent& event) {
//    // Xử lý trả sách
//}


//#include <wx/wx.h>
//#include <wx/listctrl.h>
//
//// --- AddBookDialog ---
//class AddBookDialog : public wxDialog {
//public:
//    AddBookDialog(wxWindow* parent);
//
//    wxString GetID() const { return idInput->GetValue(); }
//    wxString GetTitle() const { return titleInput->GetValue(); }
//    wxString GetAuthor() const { return authorInput->GetValue(); }
//    wxString GetQuantity() const { return quantityInput->GetValue(); }
//
//private:
//    wxTextCtrl* idInput;
//    wxTextCtrl* titleInput;
//    wxTextCtrl* authorInput;
//    wxTextCtrl* quantityInput;
//};
//
//// --- SearchBookDialog ---
//class SearchBookDialog : public wxDialog {
//public:
//    SearchBookDialog(wxWindow* parent);
//
//    wxString GetKeyword() const { return keywordInput->GetValue(); }
//
//private:
//    wxTextCtrl* keywordInput;
//};
//
//// --- LibraryFrame ---
//class LibraryFrame : public wxFrame {
//public:
//    LibraryFrame(const wxString& title);
//
//private:
//    wxListCtrl* bookList;
//
//    void OnAddBook(wxCommandEvent& event);
//    void OnSearchBook(wxCommandEvent& event);
//    void OnIssueBook(wxCommandEvent& event);
//    void OnReturnBook(wxCommandEvent& event);
//
//    wxDECLARE_EVENT_TABLE();
//};
//
//// --- Event Table IDs ---
//enum {
//    ID_AddBook = 1,
//    ID_SearchBook,
//    ID_IssueBook,
//    ID_ReturnBook
//};
//
//wxBEGIN_EVENT_TABLE(LibraryFrame, wxFrame)
//EVT_BUTTON(ID_AddBook, LibraryFrame::OnAddBook)
//EVT_BUTTON(ID_SearchBook, LibraryFrame::OnSearchBook)
//EVT_BUTTON(ID_IssueBook, LibraryFrame::OnIssueBook)
//EVT_BUTTON(ID_ReturnBook, LibraryFrame::OnReturnBook)
//wxEND_EVENT_TABLE()
//
//// --- Application class ---
//class LibraryApp : public wxApp {
//public:
//    virtual bool OnInit();
//};
//
//wxIMPLEMENT_APP(LibraryApp);
//
//// --- Implementation of AddBookDialog ---
//AddBookDialog::AddBookDialog(wxWindow* parent)
//    : wxDialog(parent, wxID_ANY, "Add New Book", wxDefaultPosition, wxSize(300, 300))
//{
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    idInput = new wxTextCtrl(this, wxID_ANY);
//    titleInput = new wxTextCtrl(this, wxID_ANY);
//    authorInput = new wxTextCtrl(this, wxID_ANY);
//    quantityInput = new wxTextCtrl(this, wxID_ANY);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Book ID:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(idInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Title:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(titleInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Author:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(authorInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Quantity:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(quantityInput, 0, wxEXPAND | wxALL, 5);
//
//    mainSizer->Add(CreateButtonSizer(wxOK | wxCANCEL), 0, wxALIGN_CENTER | wxALL, 10);
//
//    SetSizerAndFit(mainSizer);
//}
//
//// --- Implementation of SearchBookDialog ---
//SearchBookDialog::SearchBookDialog(wxWindow* parent)
//    : wxDialog(parent, wxID_ANY, "Search Book", wxDefaultPosition, wxSize(300, 200))
//{
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    keywordInput = new wxTextCtrl(this, wxID_ANY);
//
//    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Enter Title or Author:"), 0, wxTOP | wxLEFT, 10);
//    mainSizer->Add(keywordInput, 0, wxEXPAND | wxALL, 10);
//
//    mainSizer->Add(CreateButtonSizer(wxOK | wxCANCEL), 0, wxALIGN_CENTER | wxALL, 10);
//
//    SetSizerAndFit(mainSizer);
//}
//
//// --- Implementation of LibraryApp ---
//bool LibraryApp::OnInit() {
//    LibraryFrame* frame = new LibraryFrame("Simple Library Management System");
//    frame->Show(true);
//    return true;
//}
//
//// --- Implementation of LibraryFrame ---
//LibraryFrame::LibraryFrame(const wxString& title)
//    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(570, 600))
//{
//    wxPanel* panel = new wxPanel(this, wxID_ANY);
//
//    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
//
//    // Buttons
//    wxBoxSizer* buttonSizer = new wxBoxSizer(wxHORIZONTAL);
//    buttonSizer->Add(new wxButton(panel, ID_AddBook, "Add Book"), 0, wxALL, 5);
//    buttonSizer->Add(new wxButton(panel, ID_SearchBook, "Search Book"), 0, wxALL, 5);
//    buttonSizer->Add(new wxButton(panel, ID_IssueBook, "Issue Book"), 0, wxALL, 5);
//    buttonSizer->Add(new wxButton(panel, ID_ReturnBook, "Return Book"), 0, wxALL, 5);
//
//    mainSizer->Add(buttonSizer, 0, wxALIGN_CENTER);
//
//    // Book List
//    bookList = new wxListCtrl(panel, wxID_ANY, wxDefaultPosition, wxSize(-1, 400),
//        wxLC_REPORT | wxLC_SINGLE_SEL);
//
//    bookList->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 100);
//    bookList->InsertColumn(1, "Title", wxLIST_FORMAT_LEFT, 200);
//    bookList->InsertColumn(2, "Author", wxLIST_FORMAT_LEFT, 150);
//    bookList->InsertColumn(3, "Quantity", wxLIST_FORMAT_LEFT, 80);
//
//    mainSizer->Add(bookList, 1, wxEXPAND | wxALL, 10);
//
//    panel->SetSizer(mainSizer);
//}
//
//void LibraryFrame::OnAddBook(wxCommandEvent& event) {
//    AddBookDialog dialog(this);
//    if (dialog.ShowModal() == wxID_OK) {
//        long index = bookList->InsertItem(bookList->GetItemCount(), dialog.GetID());
//        bookList->SetItem(index, 1, dialog.GetTitle());
//        bookList->SetItem(index, 2, dialog.GetAuthor());
//        bookList->SetItem(index, 3, dialog.GetQuantity());
//    }
//}
//
//void LibraryFrame::OnSearchBook(wxCommandEvent& event) {
//    SearchBookDialog dialog(this);
//    if (dialog.ShowModal() == wxID_OK) {
//        wxString keyword = dialog.GetKeyword();
//        wxMessageBox("Searching for: " + keyword, "Search", wxOK | wxICON_INFORMATION);
//    }
//}
//
//void LibraryFrame::OnIssueBook(wxCommandEvent& event) {
//    wxMessageBox("Issue book function called.", "Info", wxOK | wxICON_INFORMATION);
//}
//
//void LibraryFrame::OnReturnBook(wxCommandEvent& event) {
//    wxMessageBox("Return book function called.", "Info", wxOK | wxICON_INFORMATION);
//}


#include <wx/wx.h>
#include <wx/listctrl.h>
#include <fstream>
#include <sstream>
#include <wx/file.h>
#include <wx/textfile.h>  

// --- AddBookDialog ---
class AddBookDialog : public wxDialog {
public:
    AddBookDialog(wxWindow* parent);

    wxString GetID() const { return idInput->GetValue(); }
    wxString GetTitle() const { return titleInput->GetValue(); }
    wxString GetAuthor() const { return authorInput->GetValue(); }
    wxString GetQuantity() const { return quantityInput->GetValue(); }

private:
    wxTextCtrl* idInput;
    wxTextCtrl* titleInput;
    wxTextCtrl* authorInput;
    wxTextCtrl* quantityInput;
};

// --- SearchBookDialog ---
class SearchBookDialog : public wxDialog {
public:
    SearchBookDialog(wxWindow* parent);

    wxString GetKeyword() const { return keywordInput->GetValue(); }

private:
    wxTextCtrl* keywordInput;
};

// --- LibraryFrame ---
class LibraryFrame : public wxFrame {
public:
    LibraryFrame(const wxString& title);

private:
    wxListCtrl* bookList;
    wxString filename = "books.txt";

    void LoadBooks();
    void SaveBooks();
    void AddSampleBooksIfEmpty();

    void OnAddBook(wxCommandEvent& event);
    void OnSearchBook(wxCommandEvent& event);
    void OnIssueBook(wxCommandEvent& event);
    void OnReturnBook(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};

// --- Event Table IDs ---
enum {
    ID_AddBook = 1,
    ID_SearchBook,
    ID_IssueBook,
    ID_ReturnBook
};

wxBEGIN_EVENT_TABLE(LibraryFrame, wxFrame)
EVT_BUTTON(ID_AddBook, LibraryFrame::OnAddBook)
EVT_BUTTON(ID_SearchBook, LibraryFrame::OnSearchBook)
EVT_BUTTON(ID_IssueBook, LibraryFrame::OnIssueBook)
EVT_BUTTON(ID_ReturnBook, LibraryFrame::OnReturnBook)
wxEND_EVENT_TABLE()

// --- Application class ---
class LibraryApp : public wxApp {
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(LibraryApp);

// --- Implementation of AddBookDialog ---
AddBookDialog::AddBookDialog(wxWindow* parent)
    : wxDialog(parent, wxID_ANY, "Add New Book", wxDefaultPosition, wxSize(300, 300))
{
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    idInput = new wxTextCtrl(this, wxID_ANY);
    titleInput = new wxTextCtrl(this, wxID_ANY);
    authorInput = new wxTextCtrl(this, wxID_ANY);
    quantityInput = new wxTextCtrl(this, wxID_ANY);

    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Book ID:"), 0, wxTOP | wxLEFT, 10);
    mainSizer->Add(idInput, 0, wxEXPAND | wxALL, 5);

    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Title:"), 0, wxTOP | wxLEFT, 10);
    mainSizer->Add(titleInput, 0, wxEXPAND | wxALL, 5);

    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Author:"), 0, wxTOP | wxLEFT, 10);
    mainSizer->Add(authorInput, 0, wxEXPAND | wxALL, 5);

    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Quantity:"), 0, wxTOP | wxLEFT, 10);
    mainSizer->Add(quantityInput, 0, wxEXPAND | wxALL, 5);

    mainSizer->Add(CreateButtonSizer(wxOK | wxCANCEL), 0, wxALIGN_CENTER | wxALL, 10);

    SetSizerAndFit(mainSizer);
}

// --- Implementation of SearchBookDialog ---
SearchBookDialog::SearchBookDialog(wxWindow* parent)
    : wxDialog(parent, wxID_ANY, "Search Book", wxDefaultPosition, wxSize(300, 200))
{
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    keywordInput = new wxTextCtrl(this, wxID_ANY);

    mainSizer->Add(new wxStaticText(this, wxID_ANY, "Enter Title or Author:"), 0, wxTOP | wxLEFT, 10);
    mainSizer->Add(keywordInput, 0, wxEXPAND | wxALL, 10);

    mainSizer->Add(CreateButtonSizer(wxOK | wxCANCEL), 0, wxALIGN_CENTER | wxALL, 10);

    SetSizerAndFit(mainSizer);
}

// --- Implementation of LibraryApp ---
bool LibraryApp::OnInit() {
    LibraryFrame* frame = new LibraryFrame("Simple Library Management System");
    frame->Show(true);
    return true;
}

// --- Implementation of LibraryFrame ---
LibraryFrame::LibraryFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* buttonSizer = new wxBoxSizer(wxHORIZONTAL);
    buttonSizer->Add(new wxButton(panel, ID_AddBook, "Add Book"), 0, wxALL, 5);
    buttonSizer->Add(new wxButton(panel, ID_SearchBook, "Search Book"), 0, wxALL, 5);
    buttonSizer->Add(new wxButton(panel, ID_IssueBook, "Issue Book"), 0, wxALL, 5);
    buttonSizer->Add(new wxButton(panel, ID_ReturnBook, "Return Book"), 0, wxALL, 5);

    mainSizer->Add(buttonSizer, 0, wxALIGN_CENTER);

    bookList = new wxListCtrl(panel, wxID_ANY, wxDefaultPosition, wxSize(-1, 400),
        wxLC_REPORT | wxLC_SINGLE_SEL);

    bookList->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 100);
    bookList->InsertColumn(1, "Title", wxLIST_FORMAT_LEFT, 200);
    bookList->InsertColumn(2, "Author", wxLIST_FORMAT_LEFT, 150);
    bookList->InsertColumn(3, "Quantity", wxLIST_FORMAT_LEFT, 80);

    mainSizer->Add(bookList, 1, wxEXPAND | wxALL, 10);

    panel->SetSizer(mainSizer);

    // Load books from file
    LoadBooks();
}

void LibraryFrame::LoadBooks() {
    std::ifstream file(filename.ToStdString(), std::ios::in | std::ios::binary);  // Mở file dạng nhị phân
    if (!file.is_open()) {
        AddSampleBooksIfEmpty();
        return;
    }

    std::string strLine;
    while (std::getline(file, strLine)) {
        std::stringstream ss(strLine);
        std::string idStr, titleStr, authorStr, quantityStr;
        std::getline(ss, idStr, '|');
        std::getline(ss, titleStr, '|');
        std::getline(ss, authorStr, '|');
        std::getline(ss, quantityStr, '|');

        // Chuyển std::string (UTF-8) thành wxString
        wxString id = wxString::FromUTF8(idStr.c_str());
        wxString title = wxString::FromUTF8(titleStr.c_str());
        wxString author = wxString::FromUTF8(authorStr.c_str());
        wxString quantity = wxString::FromUTF8(quantityStr.c_str());

        long index = bookList->InsertItem(bookList->GetItemCount(), id);
        bookList->SetItem(index, 1, title);
        bookList->SetItem(index, 2, author);
        bookList->SetItem(index, 3, quantity);
    }

    file.close();
}


#include <wx/textfile.h>  // Bao gồm thư viện wxTextFile

void LibraryFrame::SaveBooks() {
    wxTextFile file(filename);
    
    // Kiểm tra xem tệp có tồn tại không
    if (!file.Exists()) {
        // Nếu tệp không tồn tại, tạo mới tệp và mở nó
        file.Create();
    } else {
        file.Open();
    }

    // Duyệt qua tất cả các mục trong wxListCtrl và lưu vào file
    for (long i = 0; i < bookList->GetItemCount(); ++i) {
        wxString id = bookList->GetItemText(i, 0);   // Lấy ID
        wxString title = bookList->GetItemText(i, 1); // Lấy Title
        wxString author = bookList->GetItemText(i, 2); // Lấy Author
        wxString quantity = bookList->GetItemText(i, 3); // Lấy Quantity

        // Tạo chuỗi dữ liệu để ghi vào tệp
        wxString line = id + "|" + title + "|" + author + "|" + quantity;

        // Thêm chuỗi vào tệp (ghi vào cuối)
        file.AddLine(line);
    }

    file.Write(); // Lưu dữ liệu vào tệp
    file.Close();

    wxMessageBox("Books saved successfully!", "Success", wxOK | wxICON_INFORMATION);
}




void LibraryFrame::AddSampleBooksIfEmpty() {
    long index;
    index = bookList->InsertItem(bookList->GetItemCount(), "1");
    bookList->SetItem(index, 1, "The Great Gatsby");
    bookList->SetItem(index, 2, "F. Scott Fitzgerald");
    bookList->SetItem(index, 3, "5");

    index = bookList->InsertItem(bookList->GetItemCount(), "2");
    bookList->SetItem(index, 1, "1984");
    bookList->SetItem(index, 2, "George Orwell");
    bookList->SetItem(index, 3, "3");

    index = bookList->InsertItem(bookList->GetItemCount(), "3");
    bookList->SetItem(index, 1, "To Kill a Mockingbird");
    bookList->SetItem(index, 2, "Harper Lee");
    bookList->SetItem(index, 3, "4");

    SaveBooks();
}

void LibraryFrame::OnAddBook(wxCommandEvent& event) {
    AddBookDialog dialog(this);
    if (dialog.ShowModal() == wxID_OK) {
        long index = bookList->InsertItem(bookList->GetItemCount(), dialog.GetID());
        bookList->SetItem(index, 1, dialog.GetTitle());
        bookList->SetItem(index, 2, dialog.GetAuthor());
        bookList->SetItem(index, 3, dialog.GetQuantity());
        SaveBooks();
    }
}

void LibraryFrame::OnSearchBook(wxCommandEvent& event) {
    SearchBookDialog dialog(this);
    if (dialog.ShowModal() == wxID_OK) {
        wxString keyword = dialog.GetKeyword();
        wxMessageBox("Searching for: " + keyword, "Search", wxOK | wxICON_INFORMATION);
    }
}

void LibraryFrame::OnIssueBook(wxCommandEvent& event) {
    wxMessageBox("Issue book function called.", "Info", wxOK | wxICON_INFORMATION);
}

void LibraryFrame::OnReturnBook(wxCommandEvent& event) {
    wxMessageBox("Return book function called.", "Info", wxOK | wxICON_INFORMATION);
}
