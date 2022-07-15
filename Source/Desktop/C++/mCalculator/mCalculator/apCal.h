#pragma once
#include <ctype.h>
#include <array>

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for apCal
	/// </summary>
	public ref class apCal : public System::Windows::Forms::Form
	{
	public:
		apCal(void)
		{
			InitializeComponent();
			showP(ptn,"Number of Terms");
			tn->Checked=true;
		}
		

	public: 






	internal: System::Windows::Forms::Panel^  panel3;
	private: 
	internal: System::Windows::Forms::Label^  caln;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label9;
	internal: System::Windows::Forms::Panel^  ps;


	internal: System::Windows::Forms::RadioButton^  sn;

	internal: System::Windows::Forms::RadioButton^  tn;

	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::Panel^  ptn;
	internal: System::Windows::Forms::Button^  clv;
	internal: System::Windows::Forms::Label^  fa;
	internal: System::Windows::Forms::Label^  s3;
	internal: System::Windows::Forms::Label^  s2;
	internal: System::Windows::Forms::Label^  tnl;
	internal: System::Windows::Forms::Panel^  Panel4;
	internal: System::Windows::Forms::TextBox^  n;
	internal: System::Windows::Forms::TextBox^  d;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::TextBox^  a;
	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::TextBox^  tnv;

	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Label^  s1;
	internal: System::Windows::Forms::Button^  calv;
	internal: System::Windows::Forms::Panel^  panel1;
	internal: System::Windows::Forms::PictureBox^  awrong;

	internal: System::Windows::Forms::Panel^  pmb;
	internal: System::Windows::Forms::Label^  Label18;
	internal: System::Windows::Forms::Label^  Label12;
	internal: System::Windows::Forms::PictureBox^  tnwrong;
	internal: System::Windows::Forms::PictureBox^  dwrong;
	internal: System::Windows::Forms::PictureBox^  nwrong;
	internal: System::Windows::Forms::Panel^  psn;

	internal: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  sfa;

	internal: System::Windows::Forms::Label^  ss3;

	internal: System::Windows::Forms::Label^  ss2;
	internal: System::Windows::Forms::Label^  stl;



	internal: System::Windows::Forms::Panel^  panel5;
	internal: System::Windows::Forms::Label^  snl;
	internal: System::Windows::Forms::Button^  calSnV;













	internal: System::Windows::Forms::Panel^  panel6;

	internal: System::Windows::Forms::Panel^  panel7;
	internal: System::Windows::Forms::Label^  label21;
	internal: System::Windows::Forms::Label^  label22;
	internal: System::Windows::Forms::PictureBox^  sawrong;




	internal: System::Windows::Forms::TextBox^  sd;
	internal: System::Windows::Forms::Label^  label14;
	internal: System::Windows::Forms::TextBox^  ns;
	internal: System::Windows::Forms::Label^  label15;
	internal: System::Windows::Forms::Label^  label16;
	internal: System::Windows::Forms::TextBox^  sa;
	internal: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::Label^  label19;
	internal: System::Windows::Forms::Label^  label23;
	internal: System::Windows::Forms::TextBox^  snn;
	internal: System::Windows::Forms::TextBox^  snv;





	internal: System::Windows::Forms::Label^  label24;
	internal: System::Windows::Forms::Label^  label25;
	internal: System::Windows::Forms::Label^  label26;
internal: System::Windows::Forms::PictureBox^  snwrong;
private: System::Windows::Forms::Label^  label3;
internal: System::Windows::Forms::PictureBox^  sdwrong;
private: 
internal: 

internal: 












	internal: System::Windows::Forms::PictureBox^  pst;


	public: 

	public: 










	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~apCal()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::ToolTip^  ttip;








































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(apCal::typeid));
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->sn = (gcnew System::Windows::Forms::RadioButton());
			this->tn = (gcnew System::Windows::Forms::RadioButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->caln = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ps = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pst = (gcnew System::Windows::Forms::PictureBox());
			this->ptn = (gcnew System::Windows::Forms::Panel());
			this->clv = (gcnew System::Windows::Forms::Button());
			this->fa = (gcnew System::Windows::Forms::Label());
			this->s3 = (gcnew System::Windows::Forms::Label());
			this->s2 = (gcnew System::Windows::Forms::Label());
			this->tnl = (gcnew System::Windows::Forms::Label());
			this->Panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->tnv = (gcnew System::Windows::Forms::TextBox());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->s1 = (gcnew System::Windows::Forms::Label());
			this->calv = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->awrong = (gcnew System::Windows::Forms::PictureBox());
			this->pmb = (gcnew System::Windows::Forms::Panel());
			this->Label18 = (gcnew System::Windows::Forms::Label());
			this->Label12 = (gcnew System::Windows::Forms::Label());
			this->tnwrong = (gcnew System::Windows::Forms::PictureBox());
			this->dwrong = (gcnew System::Windows::Forms::PictureBox());
			this->nwrong = (gcnew System::Windows::Forms::PictureBox());
			this->psn = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sfa = (gcnew System::Windows::Forms::Label());
			this->ss3 = (gcnew System::Windows::Forms::Label());
			this->ss2 = (gcnew System::Windows::Forms::Label());
			this->stl = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->sd = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ns = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->sa = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->snn = (gcnew System::Windows::Forms::TextBox());
			this->snv = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->snl = (gcnew System::Windows::Forms::Label());
			this->calSnV = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->sawrong = (gcnew System::Windows::Forms::PictureBox());
			this->snwrong = (gcnew System::Windows::Forms::PictureBox());
			this->sdwrong = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			this->ps->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pst))->BeginInit();
			this->ptn->SuspendLayout();
			this->Panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->awrong))->BeginInit();
			this->pmb->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tnwrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dwrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nwrong))->BeginInit();
			this->psn->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sawrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->snwrong))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sdwrong))->BeginInit();
			this->SuspendLayout();
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->IsBalloon = true;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// sn
			// 
			this->sn->AutoSize = true;
			this->sn->BackColor = System::Drawing::Color::Gold;
			this->sn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sn->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sn->ForeColor = System::Drawing::Color::Maroon;
			this->sn->Location = System::Drawing::Point(399, 14);
			this->sn->Name = L"sn";
			this->sn->Size = System::Drawing::Size(13, 12);
			this->sn->TabIndex = 6;
			this->sn->TabStop = true;
			this->ttip->SetToolTip(this->sn, L"Sum of Terms");
			this->sn->UseVisualStyleBackColor = false;
			this->sn->CheckedChanged += gcnew System::EventHandler(this, &apCal::sn_CheckedChanged);
			// 
			// tn
			// 
			this->tn->AutoSize = true;
			this->tn->BackColor = System::Drawing::Color::Gold;
			this->tn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->tn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tn->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tn->ForeColor = System::Drawing::Color::Maroon;
			this->tn->Location = System::Drawing::Point(261, 14);
			this->tn->Name = L"tn";
			this->tn->Size = System::Drawing::Size(13, 12);
			this->tn->TabIndex = 5;
			this->tn->TabStop = true;
			this->tn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->ttip->SetToolTip(this->tn, L"Number of Terms");
			this->tn->UseVisualStyleBackColor = false;
			this->tn->CheckedChanged += gcnew System::EventHandler(this, &apCal::tn_CheckedChanged);
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
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(641, 58);
			this->panel3->TabIndex = 5;
			// 
			// caln
			// 
			this->caln->BackColor = System::Drawing::Color::Transparent;
			this->caln->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->caln->Location = System::Drawing::Point(201, 31);
			this->caln->Name = L"caln";
			this->caln->Size = System::Drawing::Size(187, 14);
			this->caln->TabIndex = 2;
			this->caln->Text = L"Number of Terms";
			this->caln->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(388, 14);
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
			this->label9->Location = System::Drawing::Point(197, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(193, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Arithmatic Progressions";
			// 
			// ps
			// 
			this->ps->BackColor = System::Drawing::Color::Black;
			this->ps->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ps->Controls->Add(this->sn);
			this->ps->Controls->Add(this->tn);
			this->ps->Controls->Add(this->label1);
			this->ps->Controls->Add(this->pst);
			this->ps->Location = System::Drawing::Point(-23, 57);
			this->ps->Name = L"ps";
			this->ps->Size = System::Drawing::Size(738, 40);
			this->ps->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(113, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 14);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select Calculation Type :";
			// 
			// pst
			// 
			this->pst->BackColor = System::Drawing::Color::Gold;
			this->pst->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pst.BackgroundImage")));
			this->pst->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pst->Location = System::Drawing::Point(110, -1);
			this->pst->Name = L"pst";
			this->pst->Size = System::Drawing::Size(444, 40);
			this->pst->TabIndex = 7;
			this->pst->TabStop = false;
			// 
			// ptn
			// 
			this->ptn->BackColor = System::Drawing::Color::Transparent;
			this->ptn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ptn->Controls->Add(this->clv);
			this->ptn->Controls->Add(this->fa);
			this->ptn->Controls->Add(this->s3);
			this->ptn->Controls->Add(this->s2);
			this->ptn->Controls->Add(this->tnl);
			this->ptn->Controls->Add(this->Panel4);
			this->ptn->Controls->Add(this->s1);
			this->ptn->Controls->Add(this->calv);
			this->ptn->Controls->Add(this->panel1);
			this->ptn->Controls->Add(this->awrong);
			this->ptn->Controls->Add(this->pmb);
			this->ptn->Controls->Add(this->tnwrong);
			this->ptn->Controls->Add(this->dwrong);
			this->ptn->Controls->Add(this->nwrong);
			this->ptn->Location = System::Drawing::Point(4, 326);
			this->ptn->Name = L"ptn";
			this->ptn->Size = System::Drawing::Size(100, 42);
			this->ptn->TabIndex = 7;
			this->ptn->Visible = false;
			// 
			// clv
			// 
			this->clv->BackColor = System::Drawing::Color::Maroon;
			this->clv->Cursor = System::Windows::Forms::Cursors::Cross;
			this->clv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->clv->ForeColor = System::Drawing::Color::White;
			this->clv->Location = System::Drawing::Point(110, 82);
			this->clv->Name = L"clv";
			this->clv->Size = System::Drawing::Size(116, 23);
			this->clv->TabIndex = 9;
			this->clv->Text = L"Clear Values";
			this->clv->UseVisualStyleBackColor = false;
			// 
			// fa
			// 
			this->fa->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fa->Location = System::Drawing::Point(453, 218);
			this->fa->Name = L"fa";
			this->fa->Size = System::Drawing::Size(143, 18);
			this->fa->TabIndex = 23;
			this->fa->Text = L"9999999999";
			// 
			// s3
			// 
			this->s3->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s3->Location = System::Drawing::Point(456, 174);
			this->s3->Name = L"s3";
			this->s3->Size = System::Drawing::Size(156, 18);
			this->s3->TabIndex = 22;
			this->s3->Text = L"9999 + 9999";
			// 
			// s2
			// 
			this->s2->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s2->Location = System::Drawing::Point(451, 96);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(144, 18);
			this->s2->TabIndex = 21;
			this->s2->Text = L"(9999 - 9999) + 9999";
			// 
			// tnl
			// 
			this->tnl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tnl->Location = System::Drawing::Point(394, 97);
			this->tnl->Name = L"tnl";
			this->tnl->Size = System::Drawing::Size(40, 17);
			this->tnl->TabIndex = 20;
			this->tnl->Text = L"d";
			this->tnl->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// Panel4
			// 
			this->Panel4->BackColor = System::Drawing::Color::Black;
			this->Panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel4->Controls->Add(this->label2);
			this->Panel4->Controls->Add(this->d);
			this->Panel4->Controls->Add(this->Label8);
			this->Panel4->Controls->Add(this->n);
			this->Panel4->Controls->Add(this->Label7);
			this->Panel4->Controls->Add(this->a);
			this->Panel4->Controls->Add(this->Label6);
			this->Panel4->Controls->Add(this->tnv);
			this->Panel4->Controls->Add(this->Label4);
			this->Panel4->Location = System::Drawing::Point(-5, -1);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(393, 65);
			this->Panel4->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(161, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 37);
			this->label2->TabIndex = 12;
			this->label2->Text = L"+";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// d
			// 
			this->d->BackColor = System::Drawing::Color::Black;
			this->d->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->d->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->ForeColor = System::Drawing::Color::White;
			this->d->Location = System::Drawing::Point(279, 22);
			this->d->MaxLength = 4;
			this->d->Multiline = true;
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(56, 23);
			this->d->TabIndex = 17;
			this->d->Text = L"d";
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->BackColor = System::Drawing::Color::Black;
			this->Label8->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label8->ForeColor = System::Drawing::Color::Gold;
			this->Label8->Location = System::Drawing::Point(262, 14);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(28, 37);
			this->Label8->TabIndex = 16;
			this->Label8->Text = L")";
			// 
			// n
			// 
			this->n->BackColor = System::Drawing::Color::Black;
			this->n->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->n->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n->ForeColor = System::Drawing::Color::White;
			this->n->Location = System::Drawing::Point(191, 21);
			this->n->MaxLength = 3;
			this->n->Multiline = true;
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(45, 22);
			this->n->TabIndex = 14;
			this->n->Text = L"n";
			this->n->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Label7
			// 
			this->Label7->BackColor = System::Drawing::Color::Black;
			this->Label7->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label7->ForeColor = System::Drawing::Color::Gold;
			this->Label7->Location = System::Drawing::Point(225, 14);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(51, 37);
			this->Label7->TabIndex = 15;
			this->Label7->Text = L"- 1";
			this->Label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::Black;
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->a->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->ForeColor = System::Drawing::Color::White;
			this->a->Location = System::Drawing::Point(117, 21);
			this->a->MaxLength = 3;
			this->a->Multiline = true;
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(48, 23);
			this->a->TabIndex = 2;
			this->a->Text = L"a";
			this->a->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->BackColor = System::Drawing::Color::Black;
			this->Label6->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label6->ForeColor = System::Drawing::Color::Gold;
			this->Label6->Location = System::Drawing::Point(174, 11);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(28, 37);
			this->Label6->TabIndex = 13;
			this->Label6->Text = L"(";
			// 
			// tnv
			// 
			this->tnv->BackColor = System::Drawing::Color::Black;
			this->tnv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tnv->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tnv->ForeColor = System::Drawing::Color::White;
			this->tnv->Location = System::Drawing::Point(47, 21);
			this->tnv->MaxLength = 3;
			this->tnv->Multiline = true;
			this->tnv->Name = L"tnv";
			this->tnv->Size = System::Drawing::Size(57, 23);
			this->tnv->TabIndex = 1;
			this->tnv->Text = L"Tn";
			this->tnv->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Label4
			// 
			this->Label4->BackColor = System::Drawing::Color::Black;
			this->Label4->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label4->ForeColor = System::Drawing::Color::Gold;
			this->Label4->Location = System::Drawing::Point(101, 14);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(21, 37);
			this->Label4->TabIndex = 10;
			this->Label4->Text = L"=";
			this->Label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// s1
			// 
			this->s1->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s1->Location = System::Drawing::Point(391, 8);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(231, 38);
			this->s1->TabIndex = 12;
			this->s1->Text = L"a = 9999       d = 9999       n = 999 Tn = \?";
			this->s1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// calv
			// 
			this->calv->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"calv.BackgroundImage")));
			this->calv->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->calv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->calv->Location = System::Drawing::Point(232, 82);
			this->calv->Name = L"calv";
			this->calv->Size = System::Drawing::Size(143, 23);
			this->calv->TabIndex = 3;
			this->calv->Text = L"Calculate";
			this->calv->UseVisualStyleBackColor = true;
			this->calv->Click += gcnew System::EventHandler(this, &apCal::calv_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Location = System::Drawing::Point(387, 8);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1, 260);
			this->panel1->TabIndex = 11;
			// 
			// awrong
			// 
			this->awrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"awrong.Image")));
			this->awrong->Location = System::Drawing::Point(397, 195);
			this->awrong->Name = L"awrong";
			this->awrong->Size = System::Drawing::Size(37, 65);
			this->awrong->TabIndex = 19;
			this->awrong->TabStop = false;
			this->awrong->Visible = false;
			// 
			// pmb
			// 
			this->pmb->Controls->Add(this->Label18);
			this->pmb->Controls->Add(this->Label12);
			this->pmb->Location = System::Drawing::Point(5, 85);
			this->pmb->Name = L"pmb";
			this->pmb->Size = System::Drawing::Size(374, 172);
			this->pmb->TabIndex = 26;
			// 
			// Label18
			// 
			this->Label18->Location = System::Drawing::Point(3, 73);
			this->Label18->Name = L"Label18";
			this->Label18->Size = System::Drawing::Size(367, 99);
			this->Label18->TabIndex = 26;
			this->Label18->Text = resources->GetString(L"Label18.Text");
			// 
			// Label12
			// 
			this->Label12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label12->Location = System::Drawing::Point(3, 57);
			this->Label12->Name = L"Label12";
			this->Label12->Size = System::Drawing::Size(348, 15);
			this->Label12->TabIndex = 28;
			this->Label12->Text = L"Tip: Using Arithmatic Progressions Calculator\r\n";
			// 
			// tnwrong
			// 
			this->tnwrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tnwrong.Image")));
			this->tnwrong->Location = System::Drawing::Point(388, 49);
			this->tnwrong->Name = L"tnwrong";
			this->tnwrong->Size = System::Drawing::Size(46, 20);
			this->tnwrong->TabIndex = 27;
			this->tnwrong->TabStop = false;
			this->tnwrong->Visible = false;
			// 
			// dwrong
			// 
			this->dwrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"dwrong.Image")));
			this->dwrong->Location = System::Drawing::Point(456, 195);
			this->dwrong->Name = L"dwrong";
			this->dwrong->Size = System::Drawing::Size(88, 65);
			this->dwrong->TabIndex = 28;
			this->dwrong->TabStop = false;
			this->dwrong->Visible = false;
			// 
			// nwrong
			// 
			this->nwrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nwrong.Image")));
			this->nwrong->Location = System::Drawing::Point(388, 49);
			this->nwrong->Name = L"nwrong";
			this->nwrong->Size = System::Drawing::Size(31, 39);
			this->nwrong->TabIndex = 29;
			this->nwrong->TabStop = false;
			this->nwrong->Visible = false;
			// 
			// psn
			// 
			this->psn->BackColor = System::Drawing::Color::Transparent;
			this->psn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->psn->Controls->Add(this->label3);
			this->psn->Controls->Add(this->button1);
			this->psn->Controls->Add(this->sfa);
			this->psn->Controls->Add(this->ss3);
			this->psn->Controls->Add(this->ss2);
			this->psn->Controls->Add(this->stl);
			this->psn->Controls->Add(this->panel5);
			this->psn->Controls->Add(this->snl);
			this->psn->Controls->Add(this->calSnV);
			this->psn->Controls->Add(this->panel6);
			this->psn->Controls->Add(this->panel7);
			this->psn->Controls->Add(this->sawrong);
			this->psn->Controls->Add(this->snwrong);
			this->psn->Controls->Add(this->sdwrong);
			this->psn->Location = System::Drawing::Point(4, 101);
			this->psn->Name = L"psn";
			this->psn->Size = System::Drawing::Size(626, 267);
			this->psn->TabIndex = 8;
			this->psn->Visible = false;
			// 
			// label3
			// 
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(443, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 30;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(110, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Clear Values";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// sfa
			// 
			this->sfa->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sfa->Location = System::Drawing::Point(437, 213);
			this->sfa->Name = L"sfa";
			this->sfa->Size = System::Drawing::Size(143, 18);
			this->sfa->TabIndex = 23;
			this->sfa->Text = L"9999999999";
			// 
			// ss3
			// 
			this->ss3->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ss3->Location = System::Drawing::Point(438, 171);
			this->ss3->Name = L"ss3";
			this->ss3->Size = System::Drawing::Size(156, 18);
			this->ss3->TabIndex = 22;
			this->ss3->Text = L"9999 + 9999";
			// 
			// ss2
			// 
			this->ss2->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ss2->Location = System::Drawing::Point(438, 126);
			this->ss2->Name = L"ss2";
			this->ss2->Size = System::Drawing::Size(174, 18);
			this->ss2->TabIndex = 21;
			this->ss2->Text = L"(9999 - 9999) + 9999";
			// 
			// stl
			// 
			this->stl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->stl->Location = System::Drawing::Point(385, 124);
			this->stl->Name = L"stl";
			this->stl->Size = System::Drawing::Size(34, 17);
			this->stl->TabIndex = 20;
			this->stl->Text = L"d";
			this->stl->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->sd);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->ns);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->sa);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->snn);
			this->panel5->Controls->Add(this->snv);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Location = System::Drawing::Point(-5, -1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(393, 65);
			this->panel5->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Black;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Gold;
			this->label19->Location = System::Drawing::Point(216, 8);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(28, 37);
			this->label19->TabIndex = 34;
			this->label19->Text = L"(";
			// 
			// sd
			// 
			this->sd->BackColor = System::Drawing::Color::Black;
			this->sd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sd->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sd->ForeColor = System::Drawing::Color::White;
			this->sd->Location = System::Drawing::Point(321, 18);
			this->sd->MaxLength = 3;
			this->sd->Multiline = true;
			this->sd->Name = L"sd";
			this->sd->Size = System::Drawing::Size(47, 22);
			this->sd->TabIndex = 37;
			this->sd->Text = L"d";
			this->sd->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Black;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Gold;
			this->label14->Location = System::Drawing::Point(357, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 44);
			this->label14->TabIndex = 35;
			this->label14->Text = L"]";
			// 
			// ns
			// 
			this->ns->BackColor = System::Drawing::Color::Black;
			this->ns->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ns->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ns->ForeColor = System::Drawing::Color::White;
			this->ns->Location = System::Drawing::Point(231, 18);
			this->ns->MaxLength = 3;
			this->ns->Multiline = true;
			this->ns->Name = L"ns";
			this->ns->Size = System::Drawing::Size(47, 23);
			this->ns->TabIndex = 31;
			this->ns->Text = L"n";
			this->ns->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Black;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Gold;
			this->label15->Location = System::Drawing::Point(272, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 37);
			this->label15->TabIndex = 30;
			this->label15->Text = L"+ 1";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Black;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Gold;
			this->label16->Location = System::Drawing::Point(303, 8);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 37);
			this->label16->TabIndex = 36;
			this->label16->Text = L")";
			// 
			// sa
			// 
			this->sa->BackColor = System::Drawing::Color::Black;
			this->sa->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sa->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sa->ForeColor = System::Drawing::Color::White;
			this->sa->Location = System::Drawing::Point(152, 16);
			this->sa->MaxLength = 3;
			this->sa->Multiline = true;
			this->sa->Name = L"sa";
			this->sa->Size = System::Drawing::Size(52, 22);
			this->sa->TabIndex = 29;
			this->sa->Text = L"a";
			this->sa->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Gold;
			this->label17->Location = System::Drawing::Point(199, 11);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(21, 37);
			this->label17->TabIndex = 27;
			this->label17->Text = L"+";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Black;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Gold;
			this->label23->Location = System::Drawing::Point(122, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 22);
			this->label23->TabIndex = 33;
			this->label23->Text = L"2 x ";
			// 
			// snn
			// 
			this->snn->BackColor = System::Drawing::Color::Black;
			this->snn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->snn->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->snn->ForeColor = System::Drawing::Color::White;
			this->snn->Location = System::Drawing::Point(64, 4);
			this->snn->MaxLength = 3;
			this->snn->Multiline = true;
			this->snn->Name = L"snn";
			this->snn->Size = System::Drawing::Size(47, 23);
			this->snn->TabIndex = 26;
			this->snn->Text = L"n";
			this->snn->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->snn->TextChanged += gcnew System::EventHandler(this, &apCal::snn_TextChanged);
			// 
			// snv
			// 
			this->snv->BackColor = System::Drawing::Color::Black;
			this->snv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->snv->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->snv->ForeColor = System::Drawing::Color::White;
			this->snv->Location = System::Drawing::Point(7, 18);
			this->snv->MaxLength = 3;
			this->snv->Multiline = true;
			this->snv->Name = L"snv";
			this->snv->Size = System::Drawing::Size(44, 23);
			this->snv->TabIndex = 24;
			this->snv->Text = L"Sn";
			this->snv->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Black;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Gold;
			this->label24->Location = System::Drawing::Point(49, 11);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(21, 37);
			this->label24->TabIndex = 25;
			this->label24->Text = L"=";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Black;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Gold;
			this->label25->Location = System::Drawing::Point(61, -9);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 81);
			this->label25->TabIndex = 32;
			this->label25->Text = L"___\r\n2";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Black;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Gold;
			this->label26->Location = System::Drawing::Point(105, 1);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(42, 44);
			this->label26->TabIndex = 28;
			this->label26->Text = L"[ ";
			// 
			// snl
			// 
			this->snl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->snl->Location = System::Drawing::Point(391, 8);
			this->snl->Name = L"snl";
			this->snl->Size = System::Drawing::Size(231, 38);
			this->snl->TabIndex = 12;
			this->snl->Text = L"a = 9999       d = 9999       n = 999 Tn = \?";
			this->snl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// calSnV
			// 
			this->calSnV->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"calSnV.BackgroundImage")));
			this->calSnV->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->calSnV->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calSnV->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->calSnV->Location = System::Drawing::Point(232, 82);
			this->calSnV->Name = L"calSnV";
			this->calSnV->Size = System::Drawing::Size(143, 23);
			this->calSnV->TabIndex = 3;
			this->calSnV->Text = L"Calculate";
			this->calSnV->UseVisualStyleBackColor = true;
			this->calSnV->Click += gcnew System::EventHandler(this, &apCal::calSnV_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Teal;
			this->panel6->Location = System::Drawing::Point(387, 8);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1, 260);
			this->panel6->TabIndex = 11;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Location = System::Drawing::Point(5, 85);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(374, 172);
			this->panel7->TabIndex = 26;
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(3, 73);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(367, 99);
			this->label21->TabIndex = 26;
			this->label21->Text = resources->GetString(L"label21.Text");
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(3, 57);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(348, 15);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Tip: Using Arithmatic Progressions Calculator\r\n";
			// 
			// sawrong
			// 
			this->sawrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sawrong.Image")));
			this->sawrong->Location = System::Drawing::Point(573, 215);
			this->sawrong->Name = L"sawrong";
			this->sawrong->Size = System::Drawing::Size(50, 45);
			this->sawrong->TabIndex = 27;
			this->sawrong->TabStop = false;
			this->sawrong->Visible = false;
			// 
			// snwrong
			// 
			this->snwrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"snwrong.Image")));
			this->snwrong->Location = System::Drawing::Point(394, 232);
			this->snwrong->Name = L"snwrong";
			this->snwrong->Size = System::Drawing::Size(10, 28);
			this->snwrong->TabIndex = 29;
			this->snwrong->TabStop = false;
			this->snwrong->Visible = false;
			// 
			// sdwrong
			// 
			this->sdwrong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sdwrong.Image")));
			this->sdwrong->Location = System::Drawing::Point(388, 49);
			this->sdwrong->Name = L"sdwrong";
			this->sdwrong->Size = System::Drawing::Size(235, 211);
			this->sdwrong->TabIndex = 31;
			this->sdwrong->TabStop = false;
			this->sdwrong->Visible = false;
			// 
			// apCal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(637, 378);
			this->Controls->Add(this->psn);
			this->Controls->Add(this->ptn);
			this->Controls->Add(this->ps);
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"apCal";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Arithmatic Progression Calculator";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ps->ResumeLayout(false);
			this->ps->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pst))->EndInit();
			this->ptn->ResumeLayout(false);
			this->Panel4->ResumeLayout(false);
			this->Panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->awrong))->EndInit();
			this->pmb->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tnwrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dwrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nwrong))->EndInit();
			this->psn->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sawrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->snwrong))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->sdwrong))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void showP(Panel^ p, String^ msg){
			 p->Location = System::Drawing::Point(117,103);
			 p->Size = System::Drawing::Size(387,267);
			 p->BringToFront();
			 p->Visible=true;
			 caln->Text=msg;
			 this->Text="Arithmatic Progression "+msg;
		 }
		double av, dv, nv, tsnv;
		void setData(String^ x, String^ b, String^ c, String^ z){
			av =System::Convert::ToDouble(x);
			dv = System::Convert::ToDouble(b);
			nv=System::Convert::ToDouble(c);
			tsnv=System::Convert::ToDouble(z);
		}
		Boolean detValues(TextBox^ aa, TextBox^ dd, TextBox^ nn, TextBox^ tsn){
			if(aa->Text !="" || dd->Text != "" || nn->Text !="" || tsn->Text !=""){
				try{
					if(aa->Text == "?" && dd->Text != "" && nn->Text !="" && tsn->Text !=""){
						setData("0",dd->Text,nn->Text, tsn->Text);
						dwrong->Visible=false;
						nwrong->Visible=false;
						tnwrong->Visible=false;
						return true;
					}else if(dd->Text == "?" && aa->Text != "" && nn->Text !="" && tsn->Text !=""){
						setData(aa->Text, "0", nn->Text, tsn->Text);
						awrong->Visible=false;
						nwrong->Visible=false;
						tnwrong->Visible=false;
						return true;
					}else if(nn->Text == "?" && aa->Text != "" && dd->Text !="" && tsn->Text !=""){
						setData(aa->Text, dd->Text, "0", tsn->Text);
						nwrong->Visible=false;
						nwrong->Visible=false;
						tnwrong->Visible=false;
						return true;
					}else if(tsn->Text == "?" && aa->Text != "" && dd->Text !="" && nn->Text !=""){
						setData(aa->Text, dd->Text, nn->Text, "0");
						awrong->Visible=false;
						nwrong->Visible=false;
						dwrong->Visible=false;
						return true;
					}
					MessageBox::Show("Enter Only Numerical Values", "MOLE Advisor");
					return false;
				}catch(Exception^ ex){
					MessageBox::Show("Enter Only Numerical Values "+ex->Message, "MOLE Advisor");
					return false;
				}				
			}else{
				MessageBox::Show("Enter Values for All Required Fields", "MOLE Advisor");
				return false;
			}
		}
		double eq;
		void calSn(){
			if(av==0){
				setMPLoc(sawrong);
				label3->Visible=false;
				setA_Sn();
				eq = (2*tsnv - (nv*dv*(nv-1)))/(2*nv);
				stl->Text = "a";
				snl->Text="a = ?    d = "+dv+"    n = "+nv+"    T"+nv+ " = "+tsnv;
				ss2->Text="2 x "+tsnv +" - ["+nv+"("+nv+"-1)"+ " "+dv+"]/2 x "+nv;
				ss3->Text="("+2*tsnv +" - "+nv*(nv-1)*dv+ ")/"+2*nv;
			}else if(dv == 0){
				setMPLoc(sdwrong);
				label3->Visible=false;
				setA_Sn();
				eq = 2*(tsnv-av*nv)/nv*(nv-1);
				stl->Text = "d";
				snl->Text="d = ?    a = "+av+"    n = "+nv+"    T"+nv+ " = "+tsnv;
				ss2->Text="2 x ("+tsnv +" - "+av+"x"+nv+")/"+nv+"("+nv+"-1)";
				ss3->Text=2*(tsnv-av*nv) +"/"+nv*(nv-1);
			}else if(nv == 0){
				label3->Visible=true;
				MessageBox::Show("This Type of Calculation is not Possible", "MOLE Advisor");
				showP(psn,"Sum of Terms");
			}else if(tsnv == 0){
				setMPLoc(snwrong);
				label3->Visible=true;
				set_Sn();
				eq = nv/2 *(2*av+(nv-1)*dv);
				snl->Text="S" +nv +" = ?    a = "+av+"    d = "+dv+"    n = "+nv;
				ss2->Text=nv+"/2"+"[2"+av+"+("+nv+"-1)"+dv;
				ss3->Text=nv/2 +" x "+(2*av + (nv-1)*dv);
				stl->Text = "S"+System::Convert::ToString(nv);
			}
		}
		void calTn(){
			if(av==0){
				setMPLoc(awrong);
				setA_Tn();
				eq = tsnv - (dv*(nv-1));
				tnl->Text = "a";
				s1->Text="a = ?    d = "+dv+"    n = "+nv+"    T"+nv+ " = "+tsnv;
				s2->Text=tsnv +" - [("+nv+"-1)"+ " "+dv+"]";
				s3->Text=tsnv +" - "+(nv-1)*dv;
			}else if(dv == 0){
				setMPLoc(dwrong);
				setd_n();
				eq = (tsnv - av)/(nv-1);
				tnl->Text = "d";
				s1->Text="d = ?    a = "+av+"    n = "+nv+"    T"+nv+ " = "+tsnv;
				s2->Text=tsnv +" - "+av+"/"+nv+"-1";
				s3->Text=tsnv-av +"/"+(nv-1);
			}else if(nv == 0){
				setMPLoc(nwrong);
				setd_n();
				eq = ((tsnv-av) + dv)/dv;
				tnl->Text = "n";
				s1->Text="n= ?    a = "+av+"    d = "+dv+"    Tn"+ " = "+tsnv;
				s2->Text="("+tsnv +" - "+av+"/"+dv+")+1";
				s3->Text=(tsnv-av)/dv +" + 1";
			}else if(tsnv == 0){
				setMPLoc(tnwrong);
				setA_Tn();
				eq = av + (nv -1) *dv;
				s1->Text="T" +nv +" = ?    a = "+av+"    d = "+dv+"    n = "+nv;
				s2->Text=av +" + "+" ("+nv+"-1)"+ " "+dv;
				s3->Text=av +" + "+(nv-1)*dv;
				tnl->Text = "T"+System::Convert::ToString(nv);
			}
		}
		void doCalculate(){
			if(tn->Checked){
				calTn();
				fa->Text = System::Convert::ToString(eq);
			}else{
				calSn();
				sfa->Text = System::Convert::ToString(eq);
			}
			
		}
		void setMPLoc(PictureBox^ p){
			p->Location=System::Drawing::Point(388,49);
			p->Size=System::Drawing::Size(235,211);
			p->Visible=true;
			p->BringToFront();
		}
		void set_Sn(){
			stl->Location=System::Drawing::Point(385,111);
			stl->BringToFront();
			ss2->Location=System::Drawing::Point(438,110);
			ss2->BringToFront();
			ss3->Location=System::Drawing::Point(438,162);
			ss3->BringToFront();
			sfa->Location=System::Drawing::Point(437,201);
			sfa->BringToFront();
		}
		void setA_Sn(){
			stl->Location=System::Drawing::Point(382,126);
			stl->BringToFront();
			ss2->Location=System::Drawing::Point(439,128);
			ss2->BringToFront();
			ss3->Location=System::Drawing::Point(439,174);
			ss3->BringToFront();
			sfa->Location=System::Drawing::Point(440, 215);
			sfa->BringToFront();
		}
		void setA_Tn(){
			tnl->Location=System::Drawing::Point(394, 97);
			tnl->BringToFront();
			s2->Location=System::Drawing::Point(451, 96);
			s2->BringToFront();
			s3->Location=System::Drawing::Point(456, 140);
			s3->BringToFront();
			fa->Location=System::Drawing::Point(454, 188);
			fa->BringToFront();
		}
		void setd_n(){
			tnl->Location=System::Drawing::Point(394, 124);
			tnl->BringToFront();
			s2->Location=System::Drawing::Point(451,125);
			s2->BringToFront();
			s3->Location=System::Drawing::Point(456,174);
			s3->BringToFront();
			fa->Location=System::Drawing::Point(453,218);
			fa->BringToFront();
		}
private: System::Void calv_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(detValues(a,d,n,tnv)){
			  ptn->Location = System::Drawing::Point(4,101);
			  ptn->Size = System::Drawing::Size(626,267);
			  doCalculate();
			 }
		 }
private: System::Void tn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 psn->Visible=false;
			 showP(ptn,"Number of Terms");
		 }
private: System::Void sn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {			 
			 ptn->Visible=false;
			 showP(psn,"Sum of Terms");
		 }

private: System::Void calSnV_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(detValues(sa,sd,ns,snv)){
			  psn->Location = System::Drawing::Point(4,101);
			  psn->Size = System::Drawing::Size(626,267);
			  doCalculate();
			 }
		 }
private: System::Void snn_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 ns->Text=snn->Text;
			 ns->Enabled=false;
		 }
};
}
