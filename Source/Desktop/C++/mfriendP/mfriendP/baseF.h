#pragma once

namespace mfriendP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for baseF
	/// </summary>
	public ref class baseF : public System::Windows::Forms::Form
	{
	public:
		array< Panel^ >^ pSet;
		array< PictureBox^ >^ picSet;
		array< ProgressBar^ >^ proSet;
		array< LinkLabel^ >^ unaSet;
		array< Label^ >^ exaSet;
		int tf;
		void setPanels(){
			try{
				//Panels
				pSet= gcnew array< Panel^ >(10);
				pSet[0]=f1;pSet[1]=f2;pSet[2]=f3;pSet[3]=f4;
				pSet[4]=f5;pSet[5]=f6;pSet[6]=f7;pSet[7]=f8;
				pSet[8]=f9;pSet[9]=f10;

				//Pictures
				picSet = gcnew array< PictureBox^ >(10);
				picSet[0]=p1;picSet[1]=p2;picSet[2]=p3;picSet[3]=p4;
				picSet[4]=p5;picSet[5]=p6;picSet[6]=p7;picSet[7]=p8;
				picSet[8]=p9;picSet[9]=p10;

				//Progress 
				proSet = gcnew array< ProgressBar^ >(10);
				proSet[0]=pr1;proSet[1]=pr2;proSet[2]=pr3;proSet[3]=pr4;
				proSet[4]=pr5;proSet[5]=pr6;proSet[6]=pr7;proSet[7]=pr8;
				proSet[8]=pr9;proSet[9]=pr10;

				//Labels 
				unaSet = gcnew array< LinkLabel^ >(10);
				unaSet[0]=n1;unaSet[1]=n2;unaSet[2]=n3;unaSet[3]=n4;
				unaSet[4]=n5;unaSet[5]=n6;unaSet[6]=n7;unaSet[7]=n8;
				unaSet[8]=n9;unaSet[9]=n10;

				//Labels 
				exaSet = gcnew array< Label^ >(10);
				exaSet[0]=er1;exaSet[1]=er2;exaSet[2]=er3;exaSet[3]=er4;
				exaSet[4]=er5;exaSet[5]=er6;exaSet[6]=er7;exaSet[7]=er8;
				exaSet[8]=er9;exaSet[9]=er10;

				StreamReader^ sr = gcnew StreamReader(Application::ExecutablePath->Replace("mfriendP.exe","user\\tFriendsE.ms"));
				tf= System::Convert::ToInt16(sr->ReadLine()->Substring(5));
				String^ un;
				int p,f;
				int pro;
				while(tf != 0){
					un = sr->ReadLine();
					if(un->StartsWith("FUser")){
						unaSet[tf-1]->Text=un->Substring(8);
						p = System::Convert::ToInt16(sr->ReadLine()->Substring(7));
						f = System::Convert::ToInt16(sr->ReadLine()->Substring(7));
						if(p == 0){
							pro = 0;
						}else{
							pro = (p*100)/42;
						}
						try{
							picSet[tf-1]->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("mfriendP.exe","user\\friends\\"+un->Substring(8)));
						}catch(Exception^ e){
							picSet[tf-1]->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("mfriendP.exe","core\\female.mi"));							
						}
						exaSet[tf-1]->Text="Passed = "+p+"          Failed = "+f;
						proSet[tf-1]->Value=pro;
						this->ttip->SetToolTip(this->proSet[tf-1], pro+"% Completed");
					}
					pSet[tf-1]->Visible=true;
					tf--;
				}
				sr->Close();
			}catch(Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
				this->Close();
			}
		}
		baseF(void)	{
			InitializeComponent();
			setPanels();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~baseF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Panel^  f6;
	private: System::Windows::Forms::ProgressBar^  pr6;


	private: System::Windows::Forms::Label^  er6;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::LinkLabel^  n6;

	private: System::Windows::Forms::PictureBox^  p6;

	private: System::Windows::Forms::Panel^  f5;
	private: System::Windows::Forms::ProgressBar^  pr5;


	private: System::Windows::Forms::Label^  er5;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::LinkLabel^  n5;

	private: System::Windows::Forms::PictureBox^  p5;

	private: System::Windows::Forms::Panel^  f8;
	private: System::Windows::Forms::ProgressBar^  pr8;


	private: System::Windows::Forms::Label^  er8;

	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::LinkLabel^  n8;

	private: System::Windows::Forms::PictureBox^  p8;

	private: System::Windows::Forms::Panel^  f7;
	private: System::Windows::Forms::ProgressBar^  pr7;


	private: System::Windows::Forms::Label^  er7;

	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::LinkLabel^  n7;

	private: System::Windows::Forms::PictureBox^  p7;

	private: System::Windows::Forms::Panel^  f4;
	private: System::Windows::Forms::ProgressBar^  pr4;


	private: System::Windows::Forms::Label^  er4;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::LinkLabel^  n4;

	private: System::Windows::Forms::PictureBox^  p4;

	private: System::Windows::Forms::Panel^  f3;
	private: System::Windows::Forms::ProgressBar^  pr3;


	private: System::Windows::Forms::Label^  er3;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::LinkLabel^  n3;

	private: System::Windows::Forms::PictureBox^  p3;

	private: System::Windows::Forms::Panel^  f2;
	private: System::Windows::Forms::ProgressBar^  pr2;


	private: System::Windows::Forms::Label^  er2;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::LinkLabel^  n2;

	private: System::Windows::Forms::PictureBox^  p2;

	private: System::Windows::Forms::Panel^  f1;
private: System::Windows::Forms::ProgressBar^  pr1;


	private: System::Windows::Forms::Label^  er1;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::LinkLabel^  n1;

	private: System::Windows::Forms::PictureBox^  p1;

	private: System::Windows::Forms::Panel^  f10;
private: System::Windows::Forms::ProgressBar^  pr10;


private: System::Windows::Forms::Label^  er10;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::LinkLabel^  n10;

private: System::Windows::Forms::PictureBox^  p10;

	private: System::Windows::Forms::Panel^  f9;
private: System::Windows::Forms::ProgressBar^  pr9;


private: System::Windows::Forms::Label^  er9;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::LinkLabel^  n9;

private: System::Windows::Forms::PictureBox^  p9;
private: System::Windows::Forms::ToolTip^  ttip;
private: System::ComponentModel::IContainer^  components;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(baseF::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->f6 = (gcnew System::Windows::Forms::Panel());
			this->pr6 = (gcnew System::Windows::Forms::ProgressBar());
			this->er6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->n6 = (gcnew System::Windows::Forms::LinkLabel());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->f5 = (gcnew System::Windows::Forms::Panel());
			this->pr5 = (gcnew System::Windows::Forms::ProgressBar());
			this->er5 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->n5 = (gcnew System::Windows::Forms::LinkLabel());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->f8 = (gcnew System::Windows::Forms::Panel());
			this->pr8 = (gcnew System::Windows::Forms::ProgressBar());
			this->er8 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->n8 = (gcnew System::Windows::Forms::LinkLabel());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->f7 = (gcnew System::Windows::Forms::Panel());
			this->pr7 = (gcnew System::Windows::Forms::ProgressBar());
			this->er7 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->n7 = (gcnew System::Windows::Forms::LinkLabel());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->f4 = (gcnew System::Windows::Forms::Panel());
			this->pr4 = (gcnew System::Windows::Forms::ProgressBar());
			this->er4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->n4 = (gcnew System::Windows::Forms::LinkLabel());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->f3 = (gcnew System::Windows::Forms::Panel());
			this->pr3 = (gcnew System::Windows::Forms::ProgressBar());
			this->er3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->n3 = (gcnew System::Windows::Forms::LinkLabel());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->f2 = (gcnew System::Windows::Forms::Panel());
			this->pr2 = (gcnew System::Windows::Forms::ProgressBar());
			this->er2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->n2 = (gcnew System::Windows::Forms::LinkLabel());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->f1 = (gcnew System::Windows::Forms::Panel());
			this->pr1 = (gcnew System::Windows::Forms::ProgressBar());
			this->er1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->n1 = (gcnew System::Windows::Forms::LinkLabel());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->f10 = (gcnew System::Windows::Forms::Panel());
			this->pr10 = (gcnew System::Windows::Forms::ProgressBar());
			this->er10 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->n10 = (gcnew System::Windows::Forms::LinkLabel());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->f9 = (gcnew System::Windows::Forms::Panel());
			this->pr9 = (gcnew System::Windows::Forms::ProgressBar());
			this->er9 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->n9 = (gcnew System::Windows::Forms::LinkLabel());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1->SuspendLayout();
			this->f6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->BeginInit();
			this->f5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->BeginInit();
			this->f8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->BeginInit();
			this->f7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->BeginInit();
			this->f4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->BeginInit();
			this->f3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->BeginInit();
			this->f2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->BeginInit();
			this->f1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->BeginInit();
			this->f10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->BeginInit();
			this->f9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->name);
			this->panel1->Location = System::Drawing::Point(0, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(699, 58);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(389, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Progress";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::Black;
			this->name->Location = System::Drawing::Point(3, 7);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(693, 31);
			this->name->TabIndex = 1;
			this->name->Text = L"Your Friend\'s";
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// f6
			// 
			this->f6->BackColor = System::Drawing::Color::Transparent;
			this->f6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f6.BackgroundImage")));
			this->f6->Controls->Add(this->pr6);
			this->f6->Controls->Add(this->er6);
			this->f6->Controls->Add(this->label15);
			this->f6->Controls->Add(this->label16);
			this->f6->Controls->Add(this->n6);
			this->f6->Controls->Add(this->p6);
			this->f6->Location = System::Drawing::Point(350, 234);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(338, 75);
			this->f6->TabIndex = 8;
			this->f6->Visible = false;
			// 
			// pr6
			// 
			this->pr6->BackColor = System::Drawing::Color::Black;
			this->pr6->ForeColor = System::Drawing::Color::Maroon;
			this->pr6->Location = System::Drawing::Point(168, 31);
			this->pr6->Name = L"pr6";
			this->pr6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr6->Size = System::Drawing::Size(139, 20);
			this->pr6->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr6->TabIndex = 6;
			this->pr6->Value = 80;
			// 
			// er6
			// 
			this->er6->BackColor = System::Drawing::Color::DodgerBlue;
			this->er6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er6->ForeColor = System::Drawing::Color::Black;
			this->er6->Location = System::Drawing::Point(51, 60);
			this->er6->Name = L"er6";
			this->er6->Size = System::Drawing::Size(287, 15);
			this->er6->TabIndex = 10;
			this->er6->Text = L"Passed = 42          Failed = 0";
			this->er6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er6, L"Passed and Failed Examination Count");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(308, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 24);
			this->label15->TabIndex = 9;
			this->label15->Text = L"%";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(55, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(174, 22);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Examination Progress";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n6
			// 
			this->n6->BackColor = System::Drawing::Color::Black;
			this->n6->Dock = System::Windows::Forms::DockStyle::Top;
			this->n6->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n6->LinkColor = System::Drawing::Color::White;
			this->n6->Location = System::Drawing::Point(51, 0);
			this->n6->Name = L"n6";
			this->n6->Size = System::Drawing::Size(287, 23);
			this->n6->TabIndex = 5;
			this->n6->TabStop = true;
			this->n6->Text = L"Basura Ratnayake";
			this->n6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n6, L"Your Friend\'s Username");
			// 
			// p6
			// 
			this->p6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p6.BackgroundImage")));
			this->p6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p6->Dock = System::Windows::Forms::DockStyle::Left;
			this->p6->Location = System::Drawing::Point(0, 0);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(51, 75);
			this->p6->TabIndex = 4;
			this->p6->TabStop = false;
			this->ttip->SetToolTip(this->p6, L"Your Friend\'s Profile Image");
			// 
			// f5
			// 
			this->f5->BackColor = System::Drawing::Color::Transparent;
			this->f5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f5.BackgroundImage")));
			this->f5->Controls->Add(this->pr5);
			this->f5->Controls->Add(this->er5);
			this->f5->Controls->Add(this->label18);
			this->f5->Controls->Add(this->label19);
			this->f5->Controls->Add(this->n5);
			this->f5->Controls->Add(this->p5);
			this->f5->Location = System::Drawing::Point(6, 234);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(338, 75);
			this->f5->TabIndex = 7;
			this->f5->Visible = false;
			// 
			// pr5
			// 
			this->pr5->BackColor = System::Drawing::Color::Black;
			this->pr5->ForeColor = System::Drawing::Color::Maroon;
			this->pr5->Location = System::Drawing::Point(168, 31);
			this->pr5->Name = L"pr5";
			this->pr5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr5->Size = System::Drawing::Size(139, 20);
			this->pr5->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr5->TabIndex = 6;
			this->pr5->Value = 80;
			// 
			// er5
			// 
			this->er5->BackColor = System::Drawing::Color::DodgerBlue;
			this->er5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er5->ForeColor = System::Drawing::Color::Black;
			this->er5->Location = System::Drawing::Point(51, 60);
			this->er5->Name = L"er5";
			this->er5->Size = System::Drawing::Size(287, 15);
			this->er5->TabIndex = 10;
			this->er5->Text = L"Passed = 42          Failed = 0";
			this->er5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er5, L"Passed and Failed Examination Count");
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(308, 29);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(27, 24);
			this->label18->TabIndex = 9;
			this->label18->Text = L"%";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(55, 31);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(174, 22);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Examination Progress";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n5
			// 
			this->n5->BackColor = System::Drawing::Color::Black;
			this->n5->Dock = System::Windows::Forms::DockStyle::Top;
			this->n5->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n5->LinkColor = System::Drawing::Color::White;
			this->n5->Location = System::Drawing::Point(51, 0);
			this->n5->Name = L"n5";
			this->n5->Size = System::Drawing::Size(287, 23);
			this->n5->TabIndex = 5;
			this->n5->TabStop = true;
			this->n5->Text = L"Basura Ratnayake";
			this->n5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n5, L"Your Friend\'s Username");
			// 
			// p5
			// 
			this->p5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p5.BackgroundImage")));
			this->p5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p5->Dock = System::Windows::Forms::DockStyle::Left;
			this->p5->Location = System::Drawing::Point(0, 0);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(51, 75);
			this->p5->TabIndex = 4;
			this->p5->TabStop = false;
			this->ttip->SetToolTip(this->p5, L"Your Friend\'s Profile Image");
			// 
			// f8
			// 
			this->f8->BackColor = System::Drawing::Color::Transparent;
			this->f8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f8.BackgroundImage")));
			this->f8->Controls->Add(this->pr8);
			this->f8->Controls->Add(this->er8);
			this->f8->Controls->Add(this->label27);
			this->f8->Controls->Add(this->label28);
			this->f8->Controls->Add(this->n8);
			this->f8->Controls->Add(this->p8);
			this->f8->Location = System::Drawing::Point(350, 315);
			this->f8->Name = L"f8";
			this->f8->Size = System::Drawing::Size(338, 75);
			this->f8->TabIndex = 10;
			this->f8->Visible = false;
			// 
			// pr8
			// 
			this->pr8->BackColor = System::Drawing::Color::Black;
			this->pr8->ForeColor = System::Drawing::Color::Maroon;
			this->pr8->Location = System::Drawing::Point(168, 31);
			this->pr8->Name = L"pr8";
			this->pr8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr8->Size = System::Drawing::Size(139, 20);
			this->pr8->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr8->TabIndex = 6;
			this->pr8->Value = 80;
			// 
			// er8
			// 
			this->er8->BackColor = System::Drawing::Color::DodgerBlue;
			this->er8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er8->ForeColor = System::Drawing::Color::Black;
			this->er8->Location = System::Drawing::Point(51, 60);
			this->er8->Name = L"er8";
			this->er8->Size = System::Drawing::Size(287, 15);
			this->er8->TabIndex = 10;
			this->er8->Text = L"Passed = 42          Failed = 0";
			this->er8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er8, L"Passed and Failed Examination Count");
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(308, 29);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 24);
			this->label27->TabIndex = 9;
			this->label27->Text = L"%";
			// 
			// label28
			// 
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(55, 31);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(174, 22);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Examination Progress";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n8
			// 
			this->n8->BackColor = System::Drawing::Color::Black;
			this->n8->Dock = System::Windows::Forms::DockStyle::Top;
			this->n8->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n8->LinkColor = System::Drawing::Color::White;
			this->n8->Location = System::Drawing::Point(51, 0);
			this->n8->Name = L"n8";
			this->n8->Size = System::Drawing::Size(287, 23);
			this->n8->TabIndex = 5;
			this->n8->TabStop = true;
			this->n8->Text = L"Basura Ratnayake";
			this->n8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n8, L"Your Friend\'s Username");
			// 
			// p8
			// 
			this->p8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p8.BackgroundImage")));
			this->p8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p8->Dock = System::Windows::Forms::DockStyle::Left;
			this->p8->Location = System::Drawing::Point(0, 0);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(51, 75);
			this->p8->TabIndex = 4;
			this->p8->TabStop = false;
			this->ttip->SetToolTip(this->p8, L"Your Friend\'s Profile Image");
			// 
			// f7
			// 
			this->f7->BackColor = System::Drawing::Color::Transparent;
			this->f7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f7.BackgroundImage")));
			this->f7->Controls->Add(this->pr7);
			this->f7->Controls->Add(this->er7);
			this->f7->Controls->Add(this->label30);
			this->f7->Controls->Add(this->label31);
			this->f7->Controls->Add(this->n7);
			this->f7->Controls->Add(this->p7);
			this->f7->Location = System::Drawing::Point(6, 315);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(338, 75);
			this->f7->TabIndex = 9;
			this->f7->Visible = false;
			// 
			// pr7
			// 
			this->pr7->BackColor = System::Drawing::Color::Black;
			this->pr7->ForeColor = System::Drawing::Color::Maroon;
			this->pr7->Location = System::Drawing::Point(168, 31);
			this->pr7->Name = L"pr7";
			this->pr7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr7->Size = System::Drawing::Size(139, 20);
			this->pr7->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr7->TabIndex = 6;
			this->pr7->Value = 80;
			// 
			// er7
			// 
			this->er7->BackColor = System::Drawing::Color::DodgerBlue;
			this->er7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er7->ForeColor = System::Drawing::Color::Black;
			this->er7->Location = System::Drawing::Point(51, 60);
			this->er7->Name = L"er7";
			this->er7->Size = System::Drawing::Size(287, 15);
			this->er7->TabIndex = 10;
			this->er7->Text = L"Passed = 42          Failed = 0";
			this->er7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er7, L"Passed and Failed Examination Count");
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(308, 29);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(27, 24);
			this->label30->TabIndex = 9;
			this->label30->Text = L"%";
			// 
			// label31
			// 
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(55, 31);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(174, 22);
			this->label31->TabIndex = 7;
			this->label31->Text = L"Examination Progress";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n7
			// 
			this->n7->BackColor = System::Drawing::Color::Black;
			this->n7->Dock = System::Windows::Forms::DockStyle::Top;
			this->n7->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n7->LinkColor = System::Drawing::Color::White;
			this->n7->Location = System::Drawing::Point(51, 0);
			this->n7->Name = L"n7";
			this->n7->Size = System::Drawing::Size(287, 23);
			this->n7->TabIndex = 5;
			this->n7->TabStop = true;
			this->n7->Text = L"Basura Ratnayake";
			this->n7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n7, L"Your Friend\'s Username");
			// 
			// p7
			// 
			this->p7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p7.BackgroundImage")));
			this->p7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p7->Dock = System::Windows::Forms::DockStyle::Left;
			this->p7->Location = System::Drawing::Point(0, 0);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(51, 75);
			this->p7->TabIndex = 4;
			this->p7->TabStop = false;
			this->ttip->SetToolTip(this->p7, L"Your Friend\'s Profile Image");
			// 
			// f4
			// 
			this->f4->BackColor = System::Drawing::Color::Transparent;
			this->f4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f4.BackgroundImage")));
			this->f4->Controls->Add(this->pr4);
			this->f4->Controls->Add(this->er4);
			this->f4->Controls->Add(this->label3);
			this->f4->Controls->Add(this->label4);
			this->f4->Controls->Add(this->n4);
			this->f4->Controls->Add(this->p4);
			this->f4->Location = System::Drawing::Point(350, 154);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(338, 75);
			this->f4->TabIndex = 14;
			this->f4->Visible = false;
			// 
			// pr4
			// 
			this->pr4->BackColor = System::Drawing::Color::Black;
			this->pr4->ForeColor = System::Drawing::Color::Maroon;
			this->pr4->Location = System::Drawing::Point(168, 31);
			this->pr4->Name = L"pr4";
			this->pr4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr4->Size = System::Drawing::Size(139, 20);
			this->pr4->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr4->TabIndex = 6;
			this->pr4->Value = 80;
			// 
			// er4
			// 
			this->er4->BackColor = System::Drawing::Color::DodgerBlue;
			this->er4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er4->ForeColor = System::Drawing::Color::Black;
			this->er4->Location = System::Drawing::Point(51, 60);
			this->er4->Name = L"er4";
			this->er4->Size = System::Drawing::Size(287, 15);
			this->er4->TabIndex = 10;
			this->er4->Text = L"Passed = 42          Failed = 0";
			this->er4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er4, L"Passed and Failed Examination Count");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(308, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"%";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(55, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Examination Progress";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n4
			// 
			this->n4->BackColor = System::Drawing::Color::Black;
			this->n4->Dock = System::Windows::Forms::DockStyle::Top;
			this->n4->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n4->LinkColor = System::Drawing::Color::White;
			this->n4->Location = System::Drawing::Point(51, 0);
			this->n4->Name = L"n4";
			this->n4->Size = System::Drawing::Size(287, 23);
			this->n4->TabIndex = 5;
			this->n4->TabStop = true;
			this->n4->Text = L"Basura Ratnayake";
			this->n4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n4, L"Your Friend\'s Username");
			// 
			// p4
			// 
			this->p4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p4.BackgroundImage")));
			this->p4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p4->Dock = System::Windows::Forms::DockStyle::Left;
			this->p4->Location = System::Drawing::Point(0, 0);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(51, 75);
			this->p4->TabIndex = 4;
			this->p4->TabStop = false;
			this->ttip->SetToolTip(this->p4, L"Your Friend\'s Profile Image");
			// 
			// f3
			// 
			this->f3->BackColor = System::Drawing::Color::Transparent;
			this->f3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f3.BackgroundImage")));
			this->f3->Controls->Add(this->pr3);
			this->f3->Controls->Add(this->er3);
			this->f3->Controls->Add(this->label6);
			this->f3->Controls->Add(this->label7);
			this->f3->Controls->Add(this->n3);
			this->f3->Controls->Add(this->p3);
			this->f3->Location = System::Drawing::Point(6, 154);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(338, 75);
			this->f3->TabIndex = 13;
			this->f3->Visible = false;
			// 
			// pr3
			// 
			this->pr3->BackColor = System::Drawing::Color::Black;
			this->pr3->ForeColor = System::Drawing::Color::Maroon;
			this->pr3->Location = System::Drawing::Point(168, 31);
			this->pr3->Name = L"pr3";
			this->pr3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr3->Size = System::Drawing::Size(139, 20);
			this->pr3->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr3->TabIndex = 6;
			this->pr3->Value = 80;
			// 
			// er3
			// 
			this->er3->BackColor = System::Drawing::Color::DodgerBlue;
			this->er3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er3->ForeColor = System::Drawing::Color::Black;
			this->er3->Location = System::Drawing::Point(51, 60);
			this->er3->Name = L"er3";
			this->er3->Size = System::Drawing::Size(287, 15);
			this->er3->TabIndex = 10;
			this->er3->Text = L"Passed = 42          Failed = 0";
			this->er3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er3, L"Passed and Failed Examination Count");
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(308, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"%";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(55, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 22);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Examination Progress";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n3
			// 
			this->n3->BackColor = System::Drawing::Color::Black;
			this->n3->Dock = System::Windows::Forms::DockStyle::Top;
			this->n3->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n3->LinkColor = System::Drawing::Color::White;
			this->n3->Location = System::Drawing::Point(51, 0);
			this->n3->Name = L"n3";
			this->n3->Size = System::Drawing::Size(287, 23);
			this->n3->TabIndex = 5;
			this->n3->TabStop = true;
			this->n3->Text = L"Basura Ratnayake";
			this->n3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n3, L"Your Friend\'s Username");
			// 
			// p3
			// 
			this->p3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p3.BackgroundImage")));
			this->p3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p3->Dock = System::Windows::Forms::DockStyle::Left;
			this->p3->Location = System::Drawing::Point(0, 0);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(51, 75);
			this->p3->TabIndex = 4;
			this->p3->TabStop = false;
			this->ttip->SetToolTip(this->p3, L"Your Friend\'s Profile Image");
			// 
			// f2
			// 
			this->f2->BackColor = System::Drawing::Color::Transparent;
			this->f2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f2.BackgroundImage")));
			this->f2->Controls->Add(this->pr2);
			this->f2->Controls->Add(this->er2);
			this->f2->Controls->Add(this->label9);
			this->f2->Controls->Add(this->label10);
			this->f2->Controls->Add(this->n2);
			this->f2->Controls->Add(this->p2);
			this->f2->Location = System::Drawing::Point(350, 73);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(338, 75);
			this->f2->TabIndex = 12;
			this->f2->Visible = false;
			// 
			// pr2
			// 
			this->pr2->BackColor = System::Drawing::Color::Black;
			this->pr2->ForeColor = System::Drawing::Color::Maroon;
			this->pr2->Location = System::Drawing::Point(168, 31);
			this->pr2->Name = L"pr2";
			this->pr2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr2->Size = System::Drawing::Size(139, 20);
			this->pr2->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr2->TabIndex = 6;
			this->pr2->Value = 80;
			// 
			// er2
			// 
			this->er2->BackColor = System::Drawing::Color::DodgerBlue;
			this->er2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er2->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er2->ForeColor = System::Drawing::Color::Black;
			this->er2->Location = System::Drawing::Point(51, 60);
			this->er2->Name = L"er2";
			this->er2->Size = System::Drawing::Size(287, 15);
			this->er2->TabIndex = 10;
			this->er2->Text = L"Passed = 42          Failed = 0";
			this->er2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er2, L"Passed and Failed Examination Count");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(308, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 24);
			this->label9->TabIndex = 9;
			this->label9->Text = L"%";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(55, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(174, 22);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Examination Progress";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n2
			// 
			this->n2->BackColor = System::Drawing::Color::Black;
			this->n2->Dock = System::Windows::Forms::DockStyle::Top;
			this->n2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n2->LinkColor = System::Drawing::Color::White;
			this->n2->Location = System::Drawing::Point(51, 0);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(287, 23);
			this->n2->TabIndex = 5;
			this->n2->TabStop = true;
			this->n2->Text = L"Basura Ratnayake";
			this->n2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n2, L"Your Friend\'s Username");
			// 
			// p2
			// 
			this->p2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p2.BackgroundImage")));
			this->p2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p2->Dock = System::Windows::Forms::DockStyle::Left;
			this->p2->Location = System::Drawing::Point(0, 0);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(51, 75);
			this->p2->TabIndex = 4;
			this->p2->TabStop = false;
			this->ttip->SetToolTip(this->p2, L"Your Friend\'s Profile Image");
			// 
			// f1
			// 
			this->f1->BackColor = System::Drawing::Color::Transparent;
			this->f1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f1.BackgroundImage")));
			this->f1->Controls->Add(this->pr1);
			this->f1->Controls->Add(this->er1);
			this->f1->Controls->Add(this->label12);
			this->f1->Controls->Add(this->label13);
			this->f1->Controls->Add(this->n1);
			this->f1->Controls->Add(this->p1);
			this->f1->Location = System::Drawing::Point(6, 73);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(338, 75);
			this->f1->TabIndex = 11;
			this->f1->Visible = false;
			// 
			// pr1
			// 
			this->pr1->BackColor = System::Drawing::Color::Black;
			this->pr1->ForeColor = System::Drawing::Color::Maroon;
			this->pr1->Location = System::Drawing::Point(168, 31);
			this->pr1->Name = L"pr1";
			this->pr1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr1->Size = System::Drawing::Size(139, 20);
			this->pr1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr1->TabIndex = 6;
			this->pr1->Value = 80;
			// 
			// er1
			// 
			this->er1->BackColor = System::Drawing::Color::DodgerBlue;
			this->er1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er1->ForeColor = System::Drawing::Color::Black;
			this->er1->Location = System::Drawing::Point(51, 60);
			this->er1->Name = L"er1";
			this->er1->Size = System::Drawing::Size(287, 15);
			this->er1->TabIndex = 10;
			this->er1->Text = L"Passed = 42          Failed = 0";
			this->er1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er1, L"Passed and Failed Examination Count");
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(308, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 24);
			this->label12->TabIndex = 9;
			this->label12->Text = L"%";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(55, 31);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(174, 22);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Examination Progress";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n1
			// 
			this->n1->BackColor = System::Drawing::Color::Black;
			this->n1->Dock = System::Windows::Forms::DockStyle::Top;
			this->n1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n1->LinkColor = System::Drawing::Color::White;
			this->n1->Location = System::Drawing::Point(51, 0);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(287, 23);
			this->n1->TabIndex = 5;
			this->n1->TabStop = true;
			this->n1->Text = L"Basura Ratnayake";
			this->n1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n1, L"Your Friend\'s Username");
			// 
			// p1
			// 
			this->p1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1.BackgroundImage")));
			this->p1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1->Dock = System::Windows::Forms::DockStyle::Left;
			this->p1->Location = System::Drawing::Point(0, 0);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(51, 75);
			this->p1->TabIndex = 4;
			this->p1->TabStop = false;
			this->ttip->SetToolTip(this->p1, L"Your Friend\'s Profile Image");
			// 
			// f10
			// 
			this->f10->BackColor = System::Drawing::Color::Transparent;
			this->f10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f10.BackgroundImage")));
			this->f10->Controls->Add(this->pr10);
			this->f10->Controls->Add(this->er10);
			this->f10->Controls->Add(this->label21);
			this->f10->Controls->Add(this->label22);
			this->f10->Controls->Add(this->n10);
			this->f10->Controls->Add(this->p10);
			this->f10->Location = System::Drawing::Point(350, 396);
			this->f10->Name = L"f10";
			this->f10->Size = System::Drawing::Size(338, 75);
			this->f10->TabIndex = 16;
			this->f10->Visible = false;
			// 
			// pr10
			// 
			this->pr10->BackColor = System::Drawing::Color::Black;
			this->pr10->ForeColor = System::Drawing::Color::Maroon;
			this->pr10->Location = System::Drawing::Point(168, 31);
			this->pr10->Name = L"pr10";
			this->pr10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr10->Size = System::Drawing::Size(139, 20);
			this->pr10->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr10->TabIndex = 6;
			this->pr10->Value = 80;
			// 
			// er10
			// 
			this->er10->BackColor = System::Drawing::Color::DodgerBlue;
			this->er10->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er10->ForeColor = System::Drawing::Color::Black;
			this->er10->Location = System::Drawing::Point(51, 60);
			this->er10->Name = L"er10";
			this->er10->Size = System::Drawing::Size(287, 15);
			this->er10->TabIndex = 10;
			this->er10->Text = L"Passed = 42          Failed = 0";
			this->er10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er10, L"Passed and Failed Examination Count");
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(308, 29);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(27, 24);
			this->label21->TabIndex = 9;
			this->label21->Text = L"%";
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(55, 31);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(174, 22);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Examination Progress";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n10
			// 
			this->n10->BackColor = System::Drawing::Color::Black;
			this->n10->Dock = System::Windows::Forms::DockStyle::Top;
			this->n10->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n10->LinkColor = System::Drawing::Color::White;
			this->n10->Location = System::Drawing::Point(51, 0);
			this->n10->Name = L"n10";
			this->n10->Size = System::Drawing::Size(287, 23);
			this->n10->TabIndex = 5;
			this->n10->TabStop = true;
			this->n10->Text = L"Basura Ratnayake";
			this->n10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n10, L"Your Friend\'s Username");
			// 
			// p10
			// 
			this->p10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p10.BackgroundImage")));
			this->p10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p10->Dock = System::Windows::Forms::DockStyle::Left;
			this->p10->Location = System::Drawing::Point(0, 0);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(51, 75);
			this->p10->TabIndex = 4;
			this->p10->TabStop = false;
			this->ttip->SetToolTip(this->p10, L"Your Friend\'s Profile Image");
			// 
			// f9
			// 
			this->f9->BackColor = System::Drawing::Color::Transparent;
			this->f9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f9.BackgroundImage")));
			this->f9->Controls->Add(this->pr9);
			this->f9->Controls->Add(this->er9);
			this->f9->Controls->Add(this->label24);
			this->f9->Controls->Add(this->label25);
			this->f9->Controls->Add(this->n9);
			this->f9->Controls->Add(this->p9);
			this->f9->Location = System::Drawing::Point(6, 396);
			this->f9->Name = L"f9";
			this->f9->Size = System::Drawing::Size(338, 75);
			this->f9->TabIndex = 15;
			this->f9->Visible = false;
			// 
			// pr9
			// 
			this->pr9->BackColor = System::Drawing::Color::Black;
			this->pr9->ForeColor = System::Drawing::Color::Maroon;
			this->pr9->Location = System::Drawing::Point(168, 31);
			this->pr9->Name = L"pr9";
			this->pr9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pr9->Size = System::Drawing::Size(139, 20);
			this->pr9->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->pr9->TabIndex = 6;
			this->pr9->Value = 80;
			// 
			// er9
			// 
			this->er9->BackColor = System::Drawing::Color::DodgerBlue;
			this->er9->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->er9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->er9->ForeColor = System::Drawing::Color::Black;
			this->er9->Location = System::Drawing::Point(51, 60);
			this->er9->Name = L"er9";
			this->er9->Size = System::Drawing::Size(287, 15);
			this->er9->TabIndex = 10;
			this->er9->Text = L"Passed = 42          Failed = 0";
			this->er9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->er9, L"Passed and Failed Examination Count");
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(308, 29);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(27, 24);
			this->label24->TabIndex = 9;
			this->label24->Text = L"%";
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(55, 31);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(174, 22);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Examination Progress";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// n9
			// 
			this->n9->BackColor = System::Drawing::Color::Black;
			this->n9->Dock = System::Windows::Forms::DockStyle::Top;
			this->n9->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n9->LinkColor = System::Drawing::Color::White;
			this->n9->Location = System::Drawing::Point(51, 0);
			this->n9->Name = L"n9";
			this->n9->Size = System::Drawing::Size(287, 23);
			this->n9->TabIndex = 5;
			this->n9->TabStop = true;
			this->n9->Text = L"Basura Ratnayake";
			this->n9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->n9, L"Your Friend\'s Username");
			// 
			// p9
			// 
			this->p9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p9.BackgroundImage")));
			this->p9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p9->Dock = System::Windows::Forms::DockStyle::Left;
			this->p9->Location = System::Drawing::Point(0, 0);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(51, 75);
			this->p9->TabIndex = 4;
			this->p9->TabStop = false;
			this->ttip->SetToolTip(this->p9, L"Your Friend\'s Profile Image");
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// baseF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(696, 484);
			this->Controls->Add(this->f10);
			this->Controls->Add(this->f9);
			this->Controls->Add(this->f4);
			this->Controls->Add(this->f3);
			this->Controls->Add(this->f2);
			this->Controls->Add(this->f1);
			this->Controls->Add(this->f8);
			this->Controls->Add(this->f7);
			this->Controls->Add(this->f6);
			this->Controls->Add(this->f5);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"baseF";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Friend\'s Progress";
			this->panel1->ResumeLayout(false);
			this->f6->ResumeLayout(false);
			this->f6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->EndInit();
			this->f5->ResumeLayout(false);
			this->f5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->EndInit();
			this->f8->ResumeLayout(false);
			this->f8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->EndInit();
			this->f7->ResumeLayout(false);
			this->f7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->EndInit();
			this->f4->ResumeLayout(false);
			this->f4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->EndInit();
			this->f3->ResumeLayout(false);
			this->f3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->EndInit();
			this->f2->ResumeLayout(false);
			this->f2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->EndInit();
			this->f1->ResumeLayout(false);
			this->f1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->EndInit();
			this->f10->ResumeLayout(false);
			this->f10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->EndInit();
			this->f9->ResumeLayout(false);
			this->f9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
