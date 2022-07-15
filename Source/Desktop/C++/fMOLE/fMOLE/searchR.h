#pragma once
#include "loadContent.h"

namespace fMOLE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for searchR
	/// </summary>
	public ref class searchR : public System::Windows::Forms::Form
	{
	public:
	
		void getData(){
			try{
				StreamReader^ sr = gcnew StreamReader(Application::ExecutablePath->Replace("fMOLE.exe","user\\mFriend.ms"));
				int exist = System::Convert::ToInt16(sr->ReadLine()->Substring(9));
				if(exist == 0){
					ResultS(noResult);
					sr->Close();
				}else{
					ResultS(yesResult);
					String^ req= sr->ReadLine()->Substring(8);
					String^ u= sr->ReadLine()->Substring(9);
					String^ n= sr->ReadLine()->Substring(8);
					String^ s= sr->ReadLine()->Substring(7);
					String^ o= sr->ReadLine()->Substring(6);
					sr->Close();
					if(req == "NOT"){
						con->Text="Add as a Friend";
					}else if(req == "N"){
						con->Text="Request Sent";
						con->Enabled=false;
					}else if(req == "Y"){
						con->Text="Already Friends";
						con->Enabled=false;
					}
					uname->Text=u;
					fName->Text = n;
					schName->Text = s;
					if(o == "Y"){
						status->BackColor=System::Drawing::Color::Green;
					}else{
						status->BackColor=System::Drawing::Color::Maroon;						
					}
					pic->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+u));
				}
			}catch(Exception^ e){
				if(e->Message->Contains("Out")){
					pic->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));	
				}else{
					MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
					this->Close();
				}
			}			
		}
		searchR(void)
		{
			InitializeComponent();
			loadContent lc2;
		}
		void ResultS(Panel^ p){
			p->Size=System::Drawing::Size(440, 121);
			p->Location=System::Drawing::Point(4,4);
			p->Visible=true;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~searchR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  noResult;
	private: System::Windows::Forms::Label^  userL;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolTip^  ttip;
	private: System::Windows::Forms::Panel^  yesResult;
	private: System::Windows::Forms::Label^  schName;
	private: System::Windows::Forms::Label^  fName;
	private: System::Windows::Forms::Panel^  pic;




	private: System::Windows::Forms::Button^  con;
	private: System::Windows::Forms::Label^  uname;
	private: System::Windows::Forms::PictureBox^  status;




	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(searchR::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->noResult = (gcnew System::Windows::Forms::Panel());
			this->userL = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->con = (gcnew System::Windows::Forms::Button());
			this->status = (gcnew System::Windows::Forms::PictureBox());
			this->yesResult = (gcnew System::Windows::Forms::Panel());
			this->schName = (gcnew System::Windows::Forms::Label());
			this->fName = (gcnew System::Windows::Forms::Label());
			this->pic = (gcnew System::Windows::Forms::Panel());
			this->uname = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->noResult->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->status))->BeginInit();
			this->yesResult->SuspendLayout();
			this->pic->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(450, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 16);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox1, L"Close this Window");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &searchR::pictureBox1_Click);
			// 
			// noResult
			// 
			this->noResult->BackColor = System::Drawing::Color::Transparent;
			this->noResult->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"noResult.BackgroundImage")));
			this->noResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->noResult->Controls->Add(this->userL);
			this->noResult->Controls->Add(this->label2);
			this->noResult->Controls->Add(this->panel2);
			this->noResult->Location = System::Drawing::Point(4, 73);
			this->noResult->Name = L"noResult";
			this->noResult->Size = System::Drawing::Size(112, 52);
			this->noResult->TabIndex = 1;
			this->noResult->Visible = false;
			// 
			// userL
			// 
			this->userL->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->userL->Location = System::Drawing::Point(121, 60);
			this->userL->Name = L"userL";
			this->userL->Size = System::Drawing::Size(314, 28);
			this->userL->TabIndex = 3;
			this->userL->Text = L"The Username you searched for is not registered. \r\nPlease Enter a Registered User" 
				L"name.";
			this->userL->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(118, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(317, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"No Such User Exists";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(110, 114);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::BlanchedAlmond;
			this->label1->Location = System::Drawing::Point(4, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 111);
			this->label1->TabIndex = 1;
			this->label1->Text = L"\?";
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// con
			// 
			this->con->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"con.BackgroundImage")));
			this->con->Cursor = System::Windows::Forms::Cursors::Hand;
			this->con->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->con->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->con->ForeColor = System::Drawing::Color::Black;
			this->con->Location = System::Drawing::Point(210, 88);
			this->con->Name = L"con";
			this->con->Size = System::Drawing::Size(148, 23);
			this->con->TabIndex = 4;
			this->con->Text = L"Add as a Friend";
			this->ttip->SetToolTip(this->con, L"Click to Add Friend");
			this->con->UseVisualStyleBackColor = true;
			this->con->Click += gcnew System::EventHandler(this, &searchR::con_Click);
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::Color::Maroon;
			this->status->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->status->Location = System::Drawing::Point(113, 3);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(20, 20);
			this->status->TabIndex = 12;
			this->status->TabStop = false;
			this->ttip->SetToolTip(this->status, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// yesResult
			// 
			this->yesResult->BackColor = System::Drawing::Color::Transparent;
			this->yesResult->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"yesResult.BackgroundImage")));
			this->yesResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->yesResult->Controls->Add(this->status);
			this->yesResult->Controls->Add(this->con);
			this->yesResult->Controls->Add(this->schName);
			this->yesResult->Controls->Add(this->fName);
			this->yesResult->Controls->Add(this->pic);
			this->yesResult->Location = System::Drawing::Point(287, 51);
			this->yesResult->Name = L"yesResult";
			this->yesResult->Size = System::Drawing::Size(157, 74);
			this->yesResult->TabIndex = 2;
			this->yesResult->Visible = false;
			// 
			// schName
			// 
			this->schName->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->schName->Location = System::Drawing::Point(111, 52);
			this->schName->Name = L"schName";
			this->schName->Size = System::Drawing::Size(324, 28);
			this->schName->TabIndex = 3;
			this->schName->Text = L"JMC College International";
			this->schName->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// fName
			// 
			this->fName->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fName->Location = System::Drawing::Point(114, 21);
			this->fName->Name = L"fName";
			this->fName->Size = System::Drawing::Size(321, 32);
			this->fName->TabIndex = 2;
			this->fName->Text = L"Basura Ratnayake";
			this->fName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pic
			// 
			this->pic->BackColor = System::Drawing::Color::Black;
			this->pic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pic->Controls->Add(this->uname);
			this->pic->Location = System::Drawing::Point(2, 2);
			this->pic->Name = L"pic";
			this->pic->Size = System::Drawing::Size(110, 114);
			this->pic->TabIndex = 0;
			// 
			// uname
			// 
			this->uname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->uname->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->uname->ForeColor = System::Drawing::Color::White;
			this->uname->Location = System::Drawing::Point(0, 94);
			this->uname->Name = L"uname";
			this->uname->Size = System::Drawing::Size(108, 18);
			this->uname->TabIndex = 5;
			this->uname->Text = L"adminReg";
			this->uname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// searchR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(472, 128);
			this->ControlBox = false;
			this->Controls->Add(this->yesResult);
			this->Controls->Add(this->noResult);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"searchR";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &searchR::searchR_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->noResult->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->status))->EndInit();
			this->yesResult->ResumeLayout(false);
			this->pic->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void con_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				StreamReader^ det = gcnew StreamReader(Application::ExecutablePath->Replace("fMOLE.exe","user\\log.ms"));
				String^ userName=det->ReadLine()->Substring(11);
				if(userName != uname->Text){
					StreamWriter^ sww = gcnew StreamWriter( Application::ExecutablePath->Replace("fMOLE.exe","user\\mFriend.ms"));
					sww->WriteLine("FUser = "+uname->Text);
					sww->WriteLine("AddU = 1");
					sww->Close();
					det->Close();
					System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
					MessageBox::Show("A Friend Request is sent to "+fName->Text+". Ask your friend to confirm it.", "MOLE Advisor");
					Application::Restart();
				}else{
					MessageBox::Show("CRAZY!!, YOU CANNOT ADD YOURSELF AS A FRIEND", "MOLE Advisor");
					det->Close();
				}
				this->Close();
			 }catch(Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
				this->Close();
			 }
		 }
private: System::Void searchR_Load(System::Object^  sender, System::EventArgs^  e) {
			 getData();
		 }
};
}
