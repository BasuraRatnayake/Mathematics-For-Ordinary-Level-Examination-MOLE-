#pragma once

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for percen
	/// </summary>
	public ref class percen : public System::Windows::Forms::Form
	{
	public:
		percen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~percen()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Panel^  panel3;
	protected: 
	internal: System::Windows::Forms::Label^  caln;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label9;

















































	private: System::Windows::Forms::ToolTip^  ttip;
	internal: System::Windows::Forms::Panel^  ps;
	internal: System::Windows::Forms::RadioButton^  hp;
	private: 

	internal: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Panel^  compund;
	internal: 

	internal: System::Windows::Forms::Button^  button1;
	private: 



	internal: System::Windows::Forms::Button^  calSnV;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Panel^  panel5;
	internal: System::Windows::Forms::TextBox^  p;



	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::TextBox^  i;

	internal: System::Windows::Forms::Label^  label25;
	internal: System::Windows::Forms::Label^  label19;
	internal: System::Windows::Forms::TextBox^  l;

	internal: System::Windows::Forms::Label^  label23;


	internal: System::Windows::Forms::Label^  label16;

private: System::Windows::Forms::Panel^  showHow;
internal: 
internal: System::Windows::Forms::Panel^  panel2;
private: 
internal: System::Windows::Forms::Label^  label21;
internal: System::Windows::Forms::Label^  label4;
internal: System::Windows::Forms::RadioButton^  tn;
internal: System::Windows::Forms::Label^  s2;

internal: System::Windows::Forms::Label^  labelL;

internal: System::Windows::Forms::Label^  s1;
internal: System::Windows::Forms::Label^  sym;
internal: System::Windows::Forms::TextBox^  la1;
internal: System::Windows::Forms::Label^  snl;
internal: System::Windows::Forms::Label^  label8;
internal: System::Windows::Forms::Label^  fa;
internal: System::Windows::Forms::Label^  s3;
internal: System::Windows::Forms::Panel^  panel7;
internal: System::Windows::Forms::TextBox^  i1;

internal: System::Windows::Forms::Label^  label30;
internal: System::Windows::Forms::Label^  label26;
internal: System::Windows::Forms::Label^  label28;
internal: System::Windows::Forms::Label^  label29;
internal: System::Windows::Forms::Label^  label14;
internal: System::Windows::Forms::Label^  label12;
internal: System::Windows::Forms::TextBox^  m2;

internal: System::Windows::Forms::Label^  label11;
internal: System::Windows::Forms::Label^  label27;
internal: System::Windows::Forms::TextBox^  m1;



internal: System::Windows::Forms::TextBox^  d;
internal: System::Windows::Forms::TextBox^  m;


internal: System::Windows::Forms::Label^  label22;
internal: System::Windows::Forms::TextBox^  op;

internal: System::Windows::Forms::Label^  label10;
internal: System::Windows::Forms::Label^  label24;
internal: System::Windows::Forms::Label^  label20;
internal: System::Windows::Forms::Button^  button3;
internal: System::Windows::Forms::Panel^  panel6;
internal: System::Windows::Forms::Label^  label17;
internal: System::Windows::Forms::Label^  label18;
internal: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Panel^  showhow1;
internal: 

private: 
internal: System::Windows::Forms::Label^  sfa;
internal: System::Windows::Forms::Label^  ss3;
internal: System::Windows::Forms::Label^  tnl;
internal: System::Windows::Forms::Label^  ss2;
internal: System::Windows::Forms::Label^  label13;
internal: System::Windows::Forms::Label^  ss1;
internal: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Panel^  hirep;
internal: 


internal: 

internal: 



private: 

















































	internal: 

	internal: 
	internal: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(percen::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->caln = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->hp = (gcnew System::Windows::Forms::RadioButton());
			this->tn = (gcnew System::Windows::Forms::RadioButton());
			this->ps = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->compund = (gcnew System::Windows::Forms::Panel());
			this->showHow = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->fa = (gcnew System::Windows::Forms::Label());
			this->s3 = (gcnew System::Windows::Forms::Label());
			this->snl = (gcnew System::Windows::Forms::Label());
			this->s2 = (gcnew System::Windows::Forms::Label());
			this->labelL = (gcnew System::Windows::Forms::Label());
			this->s1 = (gcnew System::Windows::Forms::Label());
			this->sym = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->calSnV = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->la1 = (gcnew System::Windows::Forms::TextBox());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->i = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->l = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->op = (gcnew System::Windows::Forms::TextBox());
			this->i1 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->m2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->m1 = (gcnew System::Windows::Forms::TextBox());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->showhow1 = (gcnew System::Windows::Forms::Panel());
			this->sfa = (gcnew System::Windows::Forms::Label());
			this->ss3 = (gcnew System::Windows::Forms::Label());
			this->tnl = (gcnew System::Windows::Forms::Label());
			this->ss2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ss1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->hirep = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->ps->SuspendLayout();
			this->compund->SuspendLayout();
			this->showHow->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->showhow1->SuspendLayout();
			this->hirep->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DodgerBlue;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->caln);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(-28, -1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(627, 58);
			this->panel3->TabIndex = 6;
			// 
			// caln
			// 
			this->caln->BackColor = System::Drawing::Color::Transparent;
			this->caln->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->caln->Location = System::Drawing::Point(148, 32);
			this->caln->Name = L"caln";
			this->caln->Size = System::Drawing::Size(187, 14);
			this->caln->TabIndex = 2;
			this->caln->Text = L"Hire Purchase";
			this->caln->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(335, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Calculator";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(232, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Percentages";
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->IsBalloon = true;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// hp
			// 
			this->hp->AutoSize = true;
			this->hp->BackColor = System::Drawing::Color::Gold;
			this->hp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hp->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hp->ForeColor = System::Drawing::Color::Black;
			this->hp->Location = System::Drawing::Point(364, 11);
			this->hp->Name = L"hp";
			this->hp->Size = System::Drawing::Size(101, 18);
			this->hp->TabIndex = 34;
			this->hp->TabStop = true;
			this->hp->Text = L"Hire Purchase";
			this->hp->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->ttip->SetToolTip(this->hp, L"Hire Purchase");
			this->hp->UseVisualStyleBackColor = false;
			this->hp->CheckedChanged += gcnew System::EventHandler(this, &percen::hp_CheckedChanged);
			// 
			// tn
			// 
			this->tn->AutoSize = true;
			this->tn->BackColor = System::Drawing::Color::Gold;
			this->tn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tn->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tn->ForeColor = System::Drawing::Color::Black;
			this->tn->Location = System::Drawing::Point(231, 10);
			this->tn->Name = L"tn";
			this->tn->Size = System::Drawing::Size(132, 18);
			this->tn->TabIndex = 35;
			this->tn->TabStop = true;
			this->tn->Text = L"Compound Interest";
			this->tn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->ttip->SetToolTip(this->tn, L"Compound Interest");
			this->tn->UseVisualStyleBackColor = false;
			this->tn->CheckedChanged += gcnew System::EventHandler(this, &percen::tn_CheckedChanged);
			// 
			// ps
			// 
			this->ps->BackColor = System::Drawing::Color::Black;
			this->ps->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ps->Controls->Add(this->tn);
			this->ps->Controls->Add(this->hp);
			this->ps->Controls->Add(this->label1);
			this->ps->Location = System::Drawing::Point(-1, 56);
			this->ps->Name = L"ps";
			this->ps->Size = System::Drawing::Size(596, 40);
			this->ps->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(78, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 38);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Select Calculation Type :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// compund
			// 
			this->compund->BackColor = System::Drawing::Color::Transparent;
			this->compund->Controls->Add(this->showHow);
			this->compund->Controls->Add(this->button1);
			this->compund->Controls->Add(this->panel2);
			this->compund->Controls->Add(this->calSnV);
			this->compund->Controls->Add(this->label3);
			this->compund->Controls->Add(this->panel5);
			this->compund->Location = System::Drawing::Point(4, 367);
			this->compund->Name = L"compund";
			this->compund->Size = System::Drawing::Size(81, 80);
			this->compund->TabIndex = 35;
			this->compund->Visible = false;
			// 
			// showHow
			// 
			this->showHow->BackColor = System::Drawing::Color::Transparent;
			this->showHow->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->showHow->Controls->Add(this->label8);
			this->showHow->Controls->Add(this->fa);
			this->showHow->Controls->Add(this->s3);
			this->showHow->Controls->Add(this->snl);
			this->showHow->Controls->Add(this->s2);
			this->showHow->Controls->Add(this->labelL);
			this->showHow->Controls->Add(this->s1);
			this->showHow->Controls->Add(this->sym);
			this->showHow->ForeColor = System::Drawing::Color::Black;
			this->showHow->Location = System::Drawing::Point(4, 138);
			this->showHow->Name = L"showHow";
			this->showHow->Size = System::Drawing::Size(553, 152);
			this->showHow->TabIndex = 40;
			this->showHow->Visible = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(48, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(283, 14);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Similarly Calculate the Interest for the Rest of the Period";
			// 
			// fa
			// 
			this->fa->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fa->Location = System::Drawing::Point(212, 116);
			this->fa->Name = L"fa";
			this->fa->Size = System::Drawing::Size(143, 18);
			this->fa->TabIndex = 30;
			this->fa->Text = L"= 9999999999";
			// 
			// s3
			// 
			this->s3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s3->Location = System::Drawing::Point(49, 105);
			this->s3->Name = L"s3";
			this->s3->Size = System::Drawing::Size(187, 36);
			this->s3->TabIndex = 29;
			this->s3->Text = L"Amount to be Paid at the\r\nEnd of First Year ";
			this->s3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// snl
			// 
			this->snl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->snl->Dock = System::Windows::Forms::DockStyle::Top;
			this->snl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->snl->Location = System::Drawing::Point(0, 0);
			this->snl->Name = L"snl";
			this->snl->Size = System::Drawing::Size(551, 21);
			this->snl->TabIndex = 28;
			this->snl->Text = L"LA =               I =               P =";
			this->snl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// s2
			// 
			this->s2->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s2->Location = System::Drawing::Point(212, 66);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(143, 18);
			this->s2->TabIndex = 27;
			this->s2->Text = L"= 9999999999";
			// 
			// labelL
			// 
			this->labelL->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelL->Location = System::Drawing::Point(48, 51);
			this->labelL->Name = L"labelL";
			this->labelL->Size = System::Drawing::Size(187, 36);
			this->labelL->TabIndex = 26;
			this->labelL->Text = L"Amount to be Paid at the\r\nEnd of First Year ";
			this->labelL->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// s1
			// 
			this->s1->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s1->Location = System::Drawing::Point(213, 31);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(174, 18);
			this->s1->TabIndex = 25;
			this->s1->Text = L"= (9999 - 9999) + 9999";
			// 
			// sym
			// 
			this->sym->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sym->Location = System::Drawing::Point(1, 31);
			this->sym->Name = L"sym";
			this->sym->Size = System::Drawing::Size(211, 18);
			this->sym->TabIndex = 24;
			this->sym->Text = L"Interest for the First Year";
			this->sym->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(291, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Clear Values";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label4);
			this->panel2->ForeColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(3, 296);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(558, 52);
			this->panel2->TabIndex = 37;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Location = System::Drawing::Point(1, 19);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(552, 30);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Enter values for the required fields to obtain the compund interest of the Loan A" 
				L"mount.";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(502, 15);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Tip: Using Percentage Calculator\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// calSnV
			// 
			this->calSnV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"calSnV.BackgroundImage")));
			this->calSnV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->calSnV->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calSnV->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->calSnV->Location = System::Drawing::Point(413, 107);
			this->calSnV->Name = L"calSnV";
			this->calSnV->Size = System::Drawing::Size(143, 23);
			this->calSnV->TabIndex = 38;
			this->calSnV->Text = L"Calculate";
			this->calSnV->UseVisualStyleBackColor = true;
			this->calSnV->Click += gcnew System::EventHandler(this, &percen::calSnV_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(4, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(552, 16);
			this->label3->TabIndex = 35;
			this->label3->Text = L"I = Interest     LA = Loan Amount     P = Period";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->la1);
			this->panel5->Controls->Add(this->p);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->i);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->l);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Location = System::Drawing::Point(3, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(553, 82);
			this->panel5->TabIndex = 36;
			// 
			// la1
			// 
			this->la1->BackColor = System::Drawing::Color::Black;
			this->la1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->la1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->la1->ForeColor = System::Drawing::Color::White;
			this->la1->Location = System::Drawing::Point(305, 29);
			this->la1->MaxLength = 7;
			this->la1->Multiline = true;
			this->la1->Name = L"la1";
			this->la1->Size = System::Drawing::Size(93, 23);
			this->la1->TabIndex = 48;
			this->la1->Text = L"LA";
			this->la1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// p
			// 
			this->p->BackColor = System::Drawing::Color::Black;
			this->p->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->p->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p->ForeColor = System::Drawing::Color::White;
			this->p->Location = System::Drawing::Point(415, 27);
			this->p->MaxLength = 5;
			this->p->Multiline = true;
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(68, 26);
			this->p->TabIndex = 47;
			this->p->Text = L"P";
			this->p->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(290, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 22);
			this->label2->TabIndex = 44;
			this->label2->Text = L"+";
			// 
			// i
			// 
			this->i->BackColor = System::Drawing::Color::Black;
			this->i->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->i->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i->ForeColor = System::Drawing::Color::White;
			this->i->Location = System::Drawing::Point(116, 16);
			this->i->MaxLength = 3;
			this->i->Multiline = true;
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(47, 23);
			this->i->TabIndex = 35;
			this->i->Text = L"I";
			this->i->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Black;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Gold;
			this->label25->Location = System::Drawing::Point(113, 16);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 81);
			this->label25->TabIndex = 37;
			this->label25->Text = L"___\r\n100\r\n";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Black;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Gold;
			this->label19->Location = System::Drawing::Point(95, 20);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 37);
			this->label19->TabIndex = 40;
			this->label19->Text = L"(";
			// 
			// l
			// 
			this->l->BackColor = System::Drawing::Color::Black;
			this->l->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->l->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l->ForeColor = System::Drawing::Color::White;
			this->l->Location = System::Drawing::Point(185, 29);
			this->l->MaxLength = 7;
			this->l->Multiline = true;
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(93, 23);
			this->l->TabIndex = 39;
			this->l->Text = L"LA";
			this->l->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->l->TextChanged += gcnew System::EventHandler(this, &percen::l_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Black;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Gold;
			this->label23->Location = System::Drawing::Point(169, 30);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 22);
			this->label23->TabIndex = 38;
			this->label23->Text = L"x";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Black;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Gold;
			this->label16->Location = System::Drawing::Point(270, 20);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 37);
			this->label16->TabIndex = 43;
			this->label16->Text = L")";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->op);
			this->panel7->Controls->Add(this->i1);
			this->panel7->Controls->Add(this->label30);
			this->panel7->Controls->Add(this->label26);
			this->panel7->Controls->Add(this->label28);
			this->panel7->Controls->Add(this->label29);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->m2);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->label27);
			this->panel7->Controls->Add(this->m1);
			this->panel7->Controls->Add(this->d);
			this->panel7->Controls->Add(this->m);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Location = System::Drawing::Point(1, 1);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(574, 82);
			this->panel7->TabIndex = 36;
			// 
			// op
			// 
			this->op->BackColor = System::Drawing::Color::Black;
			this->op->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->op->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->op->ForeColor = System::Drawing::Color::White;
			this->op->Location = System::Drawing::Point(73, 14);
			this->op->MaxLength = 7;
			this->op->Multiline = true;
			this->op->Name = L"op";
			this->op->Size = System::Drawing::Size(90, 23);
			this->op->TabIndex = 39;
			this->op->Text = L"OP";
			this->op->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// i1
			// 
			this->i1->BackColor = System::Drawing::Color::Black;
			this->i1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->i1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i1->ForeColor = System::Drawing::Color::White;
			this->i1->Location = System::Drawing::Point(459, 13);
			this->i1->MaxLength = 5;
			this->i1->Multiline = true;
			this->i1->Name = L"i1";
			this->i1->Size = System::Drawing::Size(49, 26);
			this->i1->TabIndex = 58;
			this->i1->Text = L"I";
			this->i1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label30
			// 
			this->label30->BackColor = System::Drawing::Color::Black;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Gold;
			this->label30->Location = System::Drawing::Point(439, 22);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(86, 52);
			this->label30->TabIndex = 59;
			this->label30->Text = L" ______\r\n100 x 12";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Black;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Gold;
			this->label26->Location = System::Drawing::Point(57, 4);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(28, 37);
			this->label26->TabIndex = 40;
			this->label26->Text = L"(";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Black;
			this->label28->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Gold;
			this->label28->Location = System::Drawing::Point(253, 4);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(28, 37);
			this->label28->TabIndex = 43;
			this->label28->Text = L")";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Black;
			this->label29->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Gold;
			this->label29->Location = System::Drawing::Point(424, 31);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(21, 22);
			this->label29->TabIndex = 57;
			this->label29->Text = L"x";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Black;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Gold;
			this->label14->Location = System::Drawing::Point(407, 21);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 37);
			this->label14->TabIndex = 56;
			this->label14->Text = L")";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Black;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Gold;
			this->label12->Location = System::Drawing::Point(376, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 22);
			this->label12->TabIndex = 55;
			this->label12->Text = L"+ 1";
			// 
			// m2
			// 
			this->m2->BackColor = System::Drawing::Color::Black;
			this->m2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->m2->Enabled = false;
			this->m2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m2->ForeColor = System::Drawing::Color::White;
			this->m2->Location = System::Drawing::Point(333, 31);
			this->m2->MaxLength = 5;
			this->m2->Multiline = true;
			this->m2->Name = L"m2";
			this->m2->Size = System::Drawing::Size(49, 26);
			this->m2->TabIndex = 54;
			this->m2->Text = L"M";
			this->m2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Black;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Gold;
			this->label11->Location = System::Drawing::Point(316, 21);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 37);
			this->label11->TabIndex = 53;
			this->label11->Text = L"(";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Black;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Gold;
			this->label27->Location = System::Drawing::Point(265, 33);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 22);
			this->label27->TabIndex = 38;
			this->label27->Text = L"x";
			// 
			// m1
			// 
			this->m1->BackColor = System::Drawing::Color::Black;
			this->m1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->m1->Enabled = false;
			this->m1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m1->ForeColor = System::Drawing::Color::White;
			this->m1->Location = System::Drawing::Point(277, 16);
			this->m1->MaxLength = 5;
			this->m1->Multiline = true;
			this->m1->Name = L"m1";
			this->m1->Size = System::Drawing::Size(49, 26);
			this->m1->TabIndex = 52;
			this->m1->Text = L"M";
			this->m1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// d
			// 
			this->d->BackColor = System::Drawing::Color::Black;
			this->d->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->d->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->ForeColor = System::Drawing::Color::White;
			this->d->Location = System::Drawing::Point(171, 14);
			this->d->MaxLength = 7;
			this->d->Multiline = true;
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(89, 23);
			this->d->TabIndex = 48;
			this->d->Text = L"D";
			this->d->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// m
			// 
			this->m->BackColor = System::Drawing::Color::Black;
			this->m->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->m->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m->ForeColor = System::Drawing::Color::White;
			this->m->Location = System::Drawing::Point(132, 48);
			this->m->MaxLength = 5;
			this->m->Multiline = true;
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(68, 26);
			this->m->TabIndex = 47;
			this->m->Text = L"M";
			this->m->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->m->TextChanged += gcnew System::EventHandler(this, &percen::m_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Black;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Gold;
			this->label22->Location = System::Drawing::Point(159, 13);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(16, 22);
			this->label22->TabIndex = 44;
			this->label22->Text = L"-";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(85, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(175, 81);
			this->label10->TabIndex = 51;
			this->label10->Text = L"__________________";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Black;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Gold;
			this->label24->Location = System::Drawing::Point(274, 5);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 81);
			this->label24->TabIndex = 37;
			this->label24->Text = L"___\r\n2";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Gold;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(2, 83);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(573, 16);
			this->label20->TabIndex = 35;
			this->label20->Text = L"Tot = Total Amount to be Paid    I = Interest     OP = Outright Price     M = Mon" 
				L"ths     D = Down Payment";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(426, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 23);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &percen::button3_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->label18);
			this->panel6->ForeColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(3, 296);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(566, 52);
			this->panel6->TabIndex = 37;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(1, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(552, 30);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Enter values to all the required fields to perform the Calculation";
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(1, 4);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(502, 15);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Tip: Using Percentage Calculator\r\n";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Maroon;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(304, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Clear Values";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// showhow1
			// 
			this->showhow1->BackColor = System::Drawing::Color::Transparent;
			this->showhow1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->showhow1->Controls->Add(this->sfa);
			this->showhow1->Controls->Add(this->ss3);
			this->showhow1->Controls->Add(this->tnl);
			this->showhow1->Controls->Add(this->ss2);
			this->showhow1->Controls->Add(this->label13);
			this->showhow1->Controls->Add(this->ss1);
			this->showhow1->Controls->Add(this->label15);
			this->showhow1->ForeColor = System::Drawing::Color::Black;
			this->showhow1->Location = System::Drawing::Point(4, 138);
			this->showhow1->Name = L"showhow1";
			this->showhow1->Size = System::Drawing::Size(566, 152);
			this->showhow1->TabIndex = 40;
			this->showhow1->Visible = false;
			// 
			// sfa
			// 
			this->sfa->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sfa->Location = System::Drawing::Point(233, 116);
			this->sfa->Name = L"sfa";
			this->sfa->Size = System::Drawing::Size(233, 18);
			this->sfa->TabIndex = 30;
			this->sfa->Text = L"= 9999999999";
			// 
			// ss3
			// 
			this->ss3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ss3->Location = System::Drawing::Point(49, 105);
			this->ss3->Name = L"ss3";
			this->ss3->Size = System::Drawing::Size(186, 36);
			this->ss3->TabIndex = 29;
			this->ss3->Text = L"Amount to be Paid at the\r\nEnd of First Year ";
			this->ss3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tnl
			// 
			this->tnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tnl->Dock = System::Windows::Forms::DockStyle::Top;
			this->tnl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tnl->Location = System::Drawing::Point(0, 0);
			this->tnl->Name = L"tnl";
			this->tnl->Size = System::Drawing::Size(564, 21);
			this->tnl->TabIndex = 28;
			this->tnl->Text = L"LA =               I =               P =";
			this->tnl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ss2
			// 
			this->ss2->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ss2->Location = System::Drawing::Point(233, 72);
			this->ss2->Name = L"ss2";
			this->ss2->Size = System::Drawing::Size(154, 18);
			this->ss2->TabIndex = 27;
			this->ss2->Text = L"= 9999999999";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(41, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(187, 15);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Interest to be Paid\r\n";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ss1
			// 
			this->ss1->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ss1->Location = System::Drawing::Point(234, 31);
			this->ss1->Name = L"ss1";
			this->ss1->Size = System::Drawing::Size(174, 18);
			this->ss1->TabIndex = 25;
			this->ss1->Text = L"= (9999 - 9999) + 9999";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(18, 31);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(211, 18);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Balance to be Paid";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// hirep
			// 
			this->hirep->BackColor = System::Drawing::Color::Transparent;
			this->hirep->Controls->Add(this->showhow1);
			this->hirep->Controls->Add(this->button2);
			this->hirep->Controls->Add(this->panel6);
			this->hirep->Controls->Add(this->button3);
			this->hirep->Controls->Add(this->label20);
			this->hirep->Controls->Add(this->panel7);
			this->hirep->Location = System::Drawing::Point(4, 98);
			this->hirep->Name = L"hirep";
			this->hirep->Size = System::Drawing::Size(575, 349);
			this->hirep->TabIndex = 36;
			this->hirep->Visible = false;
			// 
			// percen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(586, 452);
			this->Controls->Add(this->hirep);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->ps);
			this->Controls->Add(this->compund);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"percen";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Percentage Calculator";
			this->Load += gcnew System::EventHandler(this, &percen::percen_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ps->ResumeLayout(false);
			this->ps->PerformLayout();
			this->compund->ResumeLayout(false);
			this->showHow->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->showhow1->ResumeLayout(false);
			this->hirep->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		double la, ir, pe, dow ,tot;
		void calSn(){
			double x = pe;
			tot = la;
			while(x != 0){
				tot= ((tot * ir)/100) + tot;
				x--;
			}
			snl->Text="LA = "+la +"               I = "+ir +"%               Period = "+pe;
			s1->Text = " = "+ir +" x "+la+"/100";
			s2->Text =  " = "+System::Convert::ToString(la) + " + " + System::Convert::ToString(la*(ir/100));
			s3->Text ="Amount to be Paid at the End of " + pe+ " Year"; 
		}
		void calHP(){
			tnl->Text="OP = "+la +"           I = "+ir +"%           Months = "+pe+"           D = "+dow;
			ss1->Text = " = "+System::Convert::ToString(la-dow);
			ss2->Text =  " = "+System::Convert::ToString((la-dow) * (pe*(pe+1))/2 * ir/(100*12));
			ss3->Text ="Total Amount to Paid(with Interest) at the end of "+pe;
			tot = (la-dow)+((la-dow) * (pe*(pe+1))/2 * ir/(100*12));
			sfa->Text=" = "+System::Convert::ToString(tot);
		}
		void setData(String^ x, String^ b, String^ c, String^ z){
			la =System::Convert::ToDouble(x);
			ir = System::Convert::ToDouble(b);
			pe=System::Convert::ToDouble(c);
			dow=System::Convert::ToDouble(z);
		}
		void setf(){
			panel2->Location=System::Drawing::Point(3,136);
			this->Size=System::Drawing::Size(585,328);
			compund->Location = System::Drawing::Point(4, 98);
			compund->Size = System::Drawing::Size(564,197);
			compund->Visible=true;
			showHow->Visible=false;
			this->Text = "Percentage Calculator - Compound Interest";
			caln->Text="Compound Interest";
		}
		Boolean detValues(TextBox^ a, TextBox^ b, TextBox^ c){
			if(a->Text !="" && b->Text != "" && c->Text !=""){
				try{					
					setData(a->Text,b->Text,c->Text, "0");
					calSn();
					return true;
				}catch(Exception^ ex){
					MessageBox::Show("Enter Only Numerical Values "+ex->Message, "MOLE Advisor");
					return false;
				}				
			}else{
				MessageBox::Show("Enter Values for All Required Fields", "MOLE Advisor");
				return false;
			}
		}
		Boolean detValues1(TextBox^ a, TextBox^ b, TextBox^ c,TextBox^ d){
			if(a->Text !="" && b->Text != "" && c->Text !="" && d->Text !=""){
				try{					
					setData(a->Text,b->Text,c->Text, d->Text);
					calHP();
					return true;
				}catch(Exception^ ex){
					MessageBox::Show("Enter Only Numerical Values "+ex->Message, "MOLE Advisor");
					return false;
				}				
			}else{
				MessageBox::Show("Enter Values for All Required Fields", "MOLE Advisor");
				return false;
			}
		}
private: System::Void percen_Load(System::Object^  sender, System::EventArgs^  e) {
			 tn->Checked=true;
			 setf();
		 }
private: System::Void calSnV_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(detValues(l,i,p)){
				compund->Location = System::Drawing::Point(4, 98);
				compund->Size = System::Drawing::Size(563, 349);
				this->Size=System::Drawing::Size(585,491);
				showHow->Visible=true;
				panel2->Location=System::Drawing::Point(3,296);
				fa->Text =  " = "+System::Convert::ToString(tot);
			 }
		 }
private: System::Void tn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 setf();
			 hirep->Visible=false;
		 }
private: System::Void l_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 la1->Text=l->Text;
			 la1->Enabled=false;
		 }
private: System::Void hp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			panel6->Location=System::Drawing::Point(3,136);
			this->Size=System::Drawing::Size(602, 328);
			hirep->Location = System::Drawing::Point(4, 98);
			hirep->Size = System::Drawing::Size(575,349);
			hirep->Visible=true;
			showhow1->Visible=false;
			this->Text = "Percentage Calculator - Hire Purchase";
			caln->Text="Hire Purchase";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(detValues1(op,i1,m,d)){
				compund->Location = System::Drawing::Point(4, 98);
				compund->Size = System::Drawing::Size(563, 349);
				this->Size=System::Drawing::Size(585,491);
				showhow1->Visible=true;
				panel6->Location=System::Drawing::Point(3,296);
				fa->Text =  " = "+System::Convert::ToString(tot);
			 }
		 }
private: System::Void m_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 m1->Text=m->Text;
			 m2->Text=m->Text;
			 m1->Enabled=false;
			 m2->Enabled=false;
		 }
};
}
