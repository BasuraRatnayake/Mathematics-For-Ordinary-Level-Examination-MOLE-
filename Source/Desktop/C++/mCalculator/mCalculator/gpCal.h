#pragma once

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gpCal
	/// </summary>
	public ref class gpCal : public System::Windows::Forms::Form
	{
	public:
		gpCal(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			showP(tnP);
			tn->Checked=true;
		}
		void showP(Panel^ p){
			 p->Location = System::Drawing::Point(12,106);
			 p->Size = System::Drawing::Size(478, 179);
			 p->BringToFront();
			 p->Visible=true;
		 }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gpCal()
		{
			if (components)
			{
				delete components;
			}
		}
		
			 double tv;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  tn;
	private: System::Windows::Forms::RadioButton^  sn;
	private: System::Windows::Forms::RadioButton^  mid;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  tnP;
	private: System::Windows::Forms::Label^  ansT;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  td;
	private: System::Windows::Forms::TextBox^  tnn;
	private: System::Windows::Forms::TextBox^  ta;
	private: System::Windows::Forms::Panel^  snP;
	private: System::Windows::Forms::Label^  ansS;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  sr;

	private: System::Windows::Forms::TextBox^  snn;

	private: System::Windows::Forms::TextBox^  sa;
	private: System::Windows::Forms::Panel^  bnP;
	private: System::Windows::Forms::Label^  ansB;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  bc;


	private: System::Windows::Forms::TextBox^  ba;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(gpCal::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tn = (gcnew System::Windows::Forms::RadioButton());
			this->sn = (gcnew System::Windows::Forms::RadioButton());
			this->mid = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tnP = (gcnew System::Windows::Forms::Panel());
			this->ansT = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->td = (gcnew System::Windows::Forms::TextBox());
			this->tnn = (gcnew System::Windows::Forms::TextBox());
			this->ta = (gcnew System::Windows::Forms::TextBox());
			this->snP = (gcnew System::Windows::Forms::Panel());
			this->ansS = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->sr = (gcnew System::Windows::Forms::TextBox());
			this->snn = (gcnew System::Windows::Forms::TextBox());
			this->sa = (gcnew System::Windows::Forms::TextBox());
			this->bnP = (gcnew System::Windows::Forms::Panel());
			this->ansB = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->bc = (gcnew System::Windows::Forms::TextBox());
			this->ba = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tnP->SuspendLayout();
			this->snP->SuspendLayout();
			this->bnP->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DodgerBlue;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(455, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 33);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &gpCal::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DodgerBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(476, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Geometric Progressions";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->tn);
			this->panel2->Controls->Add(this->sn);
			this->panel2->Controls->Add(this->mid);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel2->Location = System::Drawing::Point(13, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 51);
			this->panel2->TabIndex = 4;
			// 
			// tn
			// 
			this->tn->AutoSize = true;
			this->tn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tn->Location = System::Drawing::Point(17, 18);
			this->tn->Name = L"tn";
			this->tn->Size = System::Drawing::Size(13, 12);
			this->tn->TabIndex = 3;
			this->tn->TabStop = true;
			this->tn->UseVisualStyleBackColor = true;
			this->tn->CheckedChanged += gcnew System::EventHandler(this, &gpCal::tn_CheckedChanged);
			// 
			// sn
			// 
			this->sn->AutoSize = true;
			this->sn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sn->Location = System::Drawing::Point(162, 18);
			this->sn->Name = L"sn";
			this->sn->Size = System::Drawing::Size(13, 12);
			this->sn->TabIndex = 2;
			this->sn->TabStop = true;
			this->sn->UseVisualStyleBackColor = true;
			this->sn->CheckedChanged += gcnew System::EventHandler(this, &gpCal::sn_CheckedChanged);
			// 
			// mid
			// 
			this->mid->AutoSize = true;
			this->mid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mid->Location = System::Drawing::Point(355, 18);
			this->mid->Name = L"mid";
			this->mid->Size = System::Drawing::Size(13, 12);
			this->mid->TabIndex = 1;
			this->mid->TabStop = true;
			this->mid->UseVisualStyleBackColor = true;
			this->mid->CheckedChanged += gcnew System::EventHandler(this, &gpCal::mid_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(-144, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tnP
			// 
			this->tnP->BackColor = System::Drawing::Color::Transparent;
			this->tnP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tnP->Controls->Add(this->ansT);
			this->tnP->Controls->Add(this->button1);
			this->tnP->Controls->Add(this->label4);
			this->tnP->Controls->Add(this->label3);
			this->tnP->Controls->Add(this->label2);
			this->tnP->Controls->Add(this->td);
			this->tnP->Controls->Add(this->tnn);
			this->tnP->Controls->Add(this->ta);
			this->tnP->Location = System::Drawing::Point(455, 261);
			this->tnP->Name = L"tnP";
			this->tnP->Size = System::Drawing::Size(35, 24);
			this->tnP->TabIndex = 6;
			// 
			// ansT
			// 
			this->ansT->BackColor = System::Drawing::Color::Gold;
			this->ansT->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ansT->Location = System::Drawing::Point(56, 143);
			this->ansT->Name = L"ansT";
			this->ansT->Size = System::Drawing::Size(191, 19);
			this->ansT->TabIndex = 9;
			this->ansT->Text = L"Answer = ";
			this->ansT->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ansT->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(314, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 104);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculate";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &gpCal::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(69, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"r(Common Ratio)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"n(Number of Terms)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a(First Term)";
			// 
			// td
			// 
			this->td->BackColor = System::Drawing::Color::CadetBlue;
			this->td->ForeColor = System::Drawing::Color::Black;
			this->td->Location = System::Drawing::Point(178, 107);
			this->td->Name = L"td";
			this->td->Size = System::Drawing::Size(130, 20);
			this->td->TabIndex = 2;
			// 
			// tnn
			// 
			this->tnn->BackColor = System::Drawing::Color::CadetBlue;
			this->tnn->ForeColor = System::Drawing::Color::Black;
			this->tnn->Location = System::Drawing::Point(178, 66);
			this->tnn->Name = L"tnn";
			this->tnn->Size = System::Drawing::Size(130, 20);
			this->tnn->TabIndex = 1;
			// 
			// ta
			// 
			this->ta->BackColor = System::Drawing::Color::CadetBlue;
			this->ta->ForeColor = System::Drawing::Color::Black;
			this->ta->Location = System::Drawing::Point(178, 29);
			this->ta->Name = L"ta";
			this->ta->Size = System::Drawing::Size(130, 20);
			this->ta->TabIndex = 0;
			// 
			// snP
			// 
			this->snP->BackColor = System::Drawing::Color::Transparent;
			this->snP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->snP->Controls->Add(this->ansS);
			this->snP->Controls->Add(this->button2);
			this->snP->Controls->Add(this->label6);
			this->snP->Controls->Add(this->label7);
			this->snP->Controls->Add(this->label8);
			this->snP->Controls->Add(this->sr);
			this->snP->Controls->Add(this->snn);
			this->snP->Controls->Add(this->sa);
			this->snP->Location = System::Drawing::Point(12, 261);
			this->snP->Name = L"snP";
			this->snP->Size = System::Drawing::Size(73, 24);
			this->snP->TabIndex = 7;
			// 
			// ansS
			// 
			this->ansS->BackColor = System::Drawing::Color::Gold;
			this->ansS->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ansS->Location = System::Drawing::Point(56, 143);
			this->ansS->Name = L"ansS";
			this->ansS->Size = System::Drawing::Size(191, 19);
			this->ansS->TabIndex = 9;
			this->ansS->Text = L"Answer = ";
			this->ansS->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ansS->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(314, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 104);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Calculate";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &gpCal::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(69, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"r(Common Ratio)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(56, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 15);
			this->label7->TabIndex = 4;
			this->label7->Text = L"n(Number of Terms)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(91, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 15);
			this->label8->TabIndex = 3;
			this->label8->Text = L"a(First Term)";
			// 
			// sr
			// 
			this->sr->BackColor = System::Drawing::Color::CadetBlue;
			this->sr->ForeColor = System::Drawing::Color::Black;
			this->sr->Location = System::Drawing::Point(178, 107);
			this->sr->Name = L"sr";
			this->sr->Size = System::Drawing::Size(130, 20);
			this->sr->TabIndex = 2;
			// 
			// snn
			// 
			this->snn->BackColor = System::Drawing::Color::CadetBlue;
			this->snn->ForeColor = System::Drawing::Color::Black;
			this->snn->Location = System::Drawing::Point(178, 66);
			this->snn->Name = L"snn";
			this->snn->Size = System::Drawing::Size(130, 20);
			this->snn->TabIndex = 1;
			// 
			// sa
			// 
			this->sa->BackColor = System::Drawing::Color::CadetBlue;
			this->sa->ForeColor = System::Drawing::Color::Black;
			this->sa->Location = System::Drawing::Point(178, 29);
			this->sa->Name = L"sa";
			this->sa->Size = System::Drawing::Size(130, 20);
			this->sa->TabIndex = 0;
			// 
			// bnP
			// 
			this->bnP->BackColor = System::Drawing::Color::Transparent;
			this->bnP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bnP->Controls->Add(this->ansB);
			this->bnP->Controls->Add(this->button3);
			this->bnP->Controls->Add(this->label9);
			this->bnP->Controls->Add(this->label11);
			this->bnP->Controls->Add(this->bc);
			this->bnP->Controls->Add(this->ba);
			this->bnP->Location = System::Drawing::Point(12, 106);
			this->bnP->Name = L"bnP";
			this->bnP->Size = System::Drawing::Size(478, 179);
			this->bnP->TabIndex = 8;
			// 
			// ansB
			// 
			this->ansB->BackColor = System::Drawing::Color::Gold;
			this->ansB->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ansB->Location = System::Drawing::Point(97, 108);
			this->ansB->Name = L"ansB";
			this->ansB->Size = System::Drawing::Size(191, 19);
			this->ansB->TabIndex = 9;
			this->ansB->Text = L"Answer = ";
			this->ansB->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ansB->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(314, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 104);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Calculate";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &gpCal::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(97, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 15);
			this->label9->TabIndex = 5;
			this->label9->Text = L"c(Last Term)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(97, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 15);
			this->label11->TabIndex = 3;
			this->label11->Text = L"a(First Term)";
			// 
			// bc
			// 
			this->bc->BackColor = System::Drawing::Color::CadetBlue;
			this->bc->ForeColor = System::Drawing::Color::Black;
			this->bc->Location = System::Drawing::Point(178, 66);
			this->bc->Name = L"bc";
			this->bc->Size = System::Drawing::Size(130, 20);
			this->bc->TabIndex = 1;
			// 
			// ba
			// 
			this->ba->BackColor = System::Drawing::Color::CadetBlue;
			this->ba->ForeColor = System::Drawing::Color::Black;
			this->ba->Location = System::Drawing::Point(178, 29);
			this->ba->Name = L"ba";
			this->ba->Size = System::Drawing::Size(130, 20);
			this->ba->TabIndex = 0;
			// 
			// gpCal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(502, 303);
			this->Controls->Add(this->bnP);
			this->Controls->Add(this->snP);
			this->Controls->Add(this->tnP);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"gpCal";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"gpCal";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tnP->ResumeLayout(false);
			this->tnP->PerformLayout();
			this->snP->ResumeLayout(false);
			this->snP->PerformLayout();
			this->bnP->ResumeLayout(false);
			this->bnP->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(ta->Text=="" || td->Text=="" || tnn->Text==""){
					 MessageBox::Show("Enter All Required Values");			 
				 }else{
					 double a = System::Convert::ToDouble(ta->Text);
					 double r = System::Convert::ToDouble(td->Text);
					 double n = System::Convert::ToDouble(tnn->Text);
					 tv = Math::Pow(r,n) * a;
					 ansT->Text = "Answer T"+n+ " = "+System::Convert::ToString(tv/r);
					ansT->Visible=true;
			 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(sa->Text=="" || sr->Text=="" || snn->Text==""){
					 MessageBox::Show("Enter All Required Values");			 
				 }else{
					 double a = System::Convert::ToDouble(sa->Text);
					 double r = System::Convert::ToDouble(sr->Text);
					 double n = System::Convert::ToDouble(snn->Text);
					 if(r<1){
						 tv = (a*(1-Math::Pow(r,n)))/1-r;
					 }else{
						  tv = (a*(Math::Pow(r,n) - 1))/r -1;
					 }
					 
					 ansS->Text = "Answer S"+n+ " = "+System::Convert::ToString(tv/r);
					ansS->Visible=true;
			 }
		 }
private: System::Void tn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 showP(tnP);
		 }
private: System::Void sn_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 showP(snP);
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
		 }
private: System::Void mid_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 showP(bnP);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ba->Text=="" || bc->Text==""){
					 MessageBox::Show("Enter All Required Values");			 
				 }else{
					 double a = System::Convert::ToDouble(ba->Text);
					 double r = System::Convert::ToDouble(bc->Text);
					 tv = Math::Sqrt((a*r));
					 ansB->Text = "Answer c = "+System::Convert::ToString(tv/r);
					ansB->Visible=true;
			 }
		 }
};
}
