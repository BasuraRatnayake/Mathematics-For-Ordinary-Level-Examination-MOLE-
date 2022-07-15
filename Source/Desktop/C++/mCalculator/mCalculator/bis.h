#pragma once

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for bis
	/// </summary>
	public ref class bis : public System::Windows::Forms::Form
	{
	public:
		bis(void)
		{
			InitializeComponent();
			panel6->Location=System::Drawing::Point(3,180);
			this->Size=System::Drawing::Size(547, 284);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~bis()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Panel^  panel3;
	protected: 

	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label9;
	internal: System::Windows::Forms::Button^  button2;
	internal: System::Windows::Forms::Button^  button3;
	internal: System::Windows::Forms::Label^  label20;
	internal: System::Windows::Forms::Panel^  panel7;
	internal: System::Windows::Forms::TextBox^  ai;

	internal: System::Windows::Forms::Label^  label26;
	internal: System::Windows::Forms::Label^  label28;
	internal: System::Windows::Forms::Label^  label27;
	internal: System::Windows::Forms::TextBox^  nv;

	internal: System::Windows::Forms::TextBox^  mv;



	internal: System::Windows::Forms::Label^  label10;
	internal: System::Windows::Forms::Label^  label24;
	internal: System::Windows::Forms::Label^  caln;
	internal: System::Windows::Forms::TextBox^  d;

	internal: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  showhow1;
	internal: 
	internal: System::Windows::Forms::Label^  sfa;
	private: 
	internal: System::Windows::Forms::Label^  ss3;
	internal: System::Windows::Forms::Label^  tnl;
	internal: System::Windows::Forms::Label^  ss2;
	internal: System::Windows::Forms::Label^  label13;
	internal: System::Windows::Forms::Label^  ss1;
	internal: System::Windows::Forms::Label^  label15;
	internal: System::Windows::Forms::Panel^  panel6;
	internal: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::Label^  label18;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(bis::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->caln = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ai = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->nv = (gcnew System::Windows::Forms::TextBox());
			this->mv = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->showhow1 = (gcnew System::Windows::Forms::Panel());
			this->sfa = (gcnew System::Windows::Forms::Label());
			this->ss3 = (gcnew System::Windows::Forms::Label());
			this->tnl = (gcnew System::Windows::Forms::Label());
			this->ss2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ss1 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->showhow1->SuspendLayout();
			this->panel6->SuspendLayout();
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
			this->panel3->Location = System::Drawing::Point(-2, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(537, 49);
			this->panel3->TabIndex = 7;
			// 
			// caln
			// 
			this->caln->BackColor = System::Drawing::Color::Transparent;
			this->caln->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->caln->Location = System::Drawing::Point(118, 25);
			this->caln->Name = L"caln";
			this->caln->Size = System::Drawing::Size(187, 14);
			this->caln->TabIndex = 2;
			this->caln->Text = L"Total Devidence\r\n";
			this->caln->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(307, 9);
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
			this->label9->Location = System::Drawing::Point(135, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Business and Shares";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Maroon;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(261, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 43;
			this->button2->Text = L"Clear Values";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(383, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 23);
			this->button3->TabIndex = 42;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &bis::button3_Click);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Gold;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(-5, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(540, 16);
			this->label20->TabIndex = 40;
			this->label20->Text = L"AI = Amount Invested    MV = Market Value    NV = Nominal Value    D = Devidance";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->d);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->ai);
			this->panel7->Controls->Add(this->label26);
			this->panel7->Controls->Add(this->label28);
			this->panel7->Controls->Add(this->label27);
			this->panel7->Controls->Add(this->nv);
			this->panel7->Controls->Add(this->mv);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Location = System::Drawing::Point(-2, 49);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(537, 82);
			this->panel7->TabIndex = 41;
			// 
			// d
			// 
			this->d->BackColor = System::Drawing::Color::Black;
			this->d->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->d->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->ForeColor = System::Drawing::Color::White;
			this->d->Location = System::Drawing::Point(315, 20);
			this->d->MaxLength = 5;
			this->d->Multiline = true;
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(49, 26);
			this->d->TabIndex = 54;
			this->d->Text = L"D";
			this->d->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(301, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 22);
			this->label1->TabIndex = 53;
			this->label1->Text = L"x";
			// 
			// ai
			// 
			this->ai->BackColor = System::Drawing::Color::Black;
			this->ai->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ai->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ai->ForeColor = System::Drawing::Color::White;
			this->ai->Location = System::Drawing::Point(136, 8);
			this->ai->MaxLength = 7;
			this->ai->Multiline = true;
			this->ai->Name = L"ai";
			this->ai->Size = System::Drawing::Size(90, 23);
			this->ai->TabIndex = 39;
			this->ai->Text = L"AI";
			this->ai->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Black;
			this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Gold;
			this->label26->Location = System::Drawing::Point(118, 16);
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
			this->label28->Location = System::Drawing::Point(280, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(28, 37);
			this->label28->TabIndex = 43;
			this->label28->Text = L")";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Black;
			this->label27->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Gold;
			this->label27->Location = System::Drawing::Point(221, 26);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 22);
			this->label27->TabIndex = 38;
			this->label27->Text = L"x";
			// 
			// nv
			// 
			this->nv->BackColor = System::Drawing::Color::Black;
			this->nv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nv->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nv->ForeColor = System::Drawing::Color::White;
			this->nv->Location = System::Drawing::Point(240, 26);
			this->nv->MaxLength = 5;
			this->nv->Multiline = true;
			this->nv->Name = L"nv";
			this->nv->Size = System::Drawing::Size(49, 26);
			this->nv->TabIndex = 52;
			this->nv->Text = L"NV";
			this->nv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mv
			// 
			this->mv->BackColor = System::Drawing::Color::Black;
			this->mv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mv->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mv->ForeColor = System::Drawing::Color::White;
			this->mv->Location = System::Drawing::Point(143, 41);
			this->mv->MaxLength = 5;
			this->mv->Multiline = true;
			this->mv->Name = L"mv";
			this->mv->Size = System::Drawing::Size(68, 26);
			this->mv->TabIndex = 47;
			this->mv->Text = L"MV";
			this->mv->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Black;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(137, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 34);
			this->label10->TabIndex = 51;
			this->label10->Text = L"_______";
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Black;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Gold;
			this->label24->Location = System::Drawing::Point(315, 8);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(54, 81);
			this->label24->TabIndex = 37;
			this->label24->Text = L"___\r\n100";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->showhow1->Location = System::Drawing::Point(5, 181);
			this->showhow1->Name = L"showhow1";
			this->showhow1->Size = System::Drawing::Size(521, 152);
			this->showhow1->TabIndex = 45;
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
			this->ss3->Location = System::Drawing::Point(41, 105);
			this->ss3->Name = L"ss3";
			this->ss3->Size = System::Drawing::Size(186, 36);
			this->ss3->TabIndex = 29;
			this->ss3->Text = L"Total Devidence Paid";
			this->ss3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tnl
			// 
			this->tnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tnl->Dock = System::Windows::Forms::DockStyle::Top;
			this->tnl->Font = (gcnew System::Drawing::Font(L"Arial", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tnl->Location = System::Drawing::Point(0, 0);
			this->tnl->Name = L"tnl";
			this->tnl->Size = System::Drawing::Size(519, 21);
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
			this->label13->Text = L"Nominal Value of Shares";
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
			this->label15->Text = L"No of Shares Bought";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->label18);
			this->panel6->ForeColor = System::Drawing::Color::Black;
			this->panel6->Location = System::Drawing::Point(3, 339);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(523, 52);
			this->panel6->TabIndex = 44;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(3, 19);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(527, 31);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Enter all the required fields to perform the calculation";
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(3, 4);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(502, 15);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Tip: Using Percentage Calculator\r\n";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(531, 397);
			this->Controls->Add(this->showhow1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"bis";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Business and Shares Calculator";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->showhow1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean detValues(TextBox^ a, TextBox^ b, TextBox^ c,TextBox^ d){
			if(a->Text !="" && b->Text != "" && c->Text !="" && d->Text !=""){
				try{					
					setData(a->Text,b->Text,c->Text, d->Text);
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
		void setData(String^ x, String^ b, String^ c, String^ z){
			la =System::Convert::ToDouble(x);
			ir = System::Convert::ToDouble(b);
			pe=System::Convert::ToDouble(c);
			dow=System::Convert::ToDouble(z);
		}
		double la, ir, pe, dow ,tot;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(detValues(ai,mv,nv,d)){
					double tot = (la/ir) * pe*(dow/100);
					tnl->Text ="AI = "+la +"               MV = "+ir+"               NV = "+pe+"               D = "+dow+"%";
					ss1->Text=" = " +System::Convert::ToString(la/ir);
					ss2->Text=" = " + System::Convert::ToString((la/ir) * pe);
					sfa->Text = " = "+ System::Convert::ToString(tot);
					showhow1->Visible=true;
					panel6->Location=System::Drawing::Point(3,339);
					this->Size=System::Drawing::Size(547, 436);
				 }

			 }
};
}
