#pragma once
#include "CoreControls.h"

namespace mExams {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for freqD
	/// </summary>
	public ref class freqD : public System::Windows::Forms::Form
	{
	public:
		Core ^ core;
		freqD(void)
		{
			InitializeComponent();
			core= gcnew Core("Frequency Distribution", this,"fd");
			setAnswer();
		}
		void setAnswer(){
			 core->aSet[0]=q1c;
			 core->aSet[1]=q2d;
			 core->aSet[2]=q3b;
			 core->aSet[3]=q4d;
			 core->aSet[4]=q5a;
			 core->aSet[5]=q6a;
			 core->aSet[6]=q7b;
			 core->aSet[7]=q8c;
			 core->aSet[8]=q9d;
			 core->aSet[9]=q10b;
		 }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~freqD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  q5d;
	protected: 
	private: System::Windows::Forms::RadioButton^  q4d;
	private: System::Windows::Forms::RadioButton^  q4b;
	private: System::Windows::Forms::RadioButton^  q4c;
	private: System::Windows::Forms::RadioButton^  q4a;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::Panel^  panel6;
	private: 
	private: System::Windows::Forms::RadioButton^  q5b;
	internal: 
	private: System::Windows::Forms::RadioButton^  q5c;
	private: System::Windows::Forms::RadioButton^  q5a;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::RadioButton^  q6d;
	private: System::Windows::Forms::RadioButton^  q6b;
	private: System::Windows::Forms::RadioButton^  q6c;
	private: System::Windows::Forms::RadioButton^  q6a;
	internal: System::Windows::Forms::Panel^  panel5;
	private: 
	private: System::Windows::Forms::RadioButton^  q3d;
	internal: 
	private: System::Windows::Forms::RadioButton^  q3b;
	private: System::Windows::Forms::RadioButton^  q3c;
	private: System::Windows::Forms::RadioButton^  q3a;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::RadioButton^  q1d;
	private: System::Windows::Forms::RadioButton^  q1b;
	private: System::Windows::Forms::RadioButton^  q1c;
	private: System::Windows::Forms::RadioButton^  q1a;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  q2d;
	private: System::Windows::Forms::RadioButton^  q2b;
	private: System::Windows::Forms::RadioButton^  q2c;
	internal: System::Windows::Forms::Panel^  panel2;
	private: 
	private: System::Windows::Forms::Label^  label2;
	internal: 
	private: System::Windows::Forms::RadioButton^  q2a;
	private: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Panel^  panel4;
	private: 
	private: System::Windows::Forms::Label^  label3;
	internal: 
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ToolTip^  ttip;
	private: System::Windows::Forms::Panel^  panel1;
	internal: System::Windows::Forms::Panel^  panel7;
	private: 
	private: System::Windows::Forms::RadioButton^  q10d;
	internal: 
	private: System::Windows::Forms::RadioButton^  q10b;
	private: System::Windows::Forms::RadioButton^  q10c;
	private: System::Windows::Forms::RadioButton^  q10a;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	internal: System::Windows::Forms::Panel^  panel9;
	private: 
	private: System::Windows::Forms::RadioButton^  q9d;
	internal: 
	private: System::Windows::Forms::RadioButton^  q9b;
	private: System::Windows::Forms::RadioButton^  q9c;
	private: System::Windows::Forms::RadioButton^  q9a;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	internal: System::Windows::Forms::Panel^  panel10;
	private: 
	private: System::Windows::Forms::RadioButton^  q8d;
	internal: 
	private: System::Windows::Forms::RadioButton^  q8b;
	private: System::Windows::Forms::RadioButton^  q8c;
	private: System::Windows::Forms::RadioButton^  q8a;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::Panel^  panel11;
	private: 
	private: System::Windows::Forms::RadioButton^  q7d;
	internal: 
	private: System::Windows::Forms::RadioButton^  q7b;
	private: System::Windows::Forms::RadioButton^  q7c;
	private: System::Windows::Forms::RadioButton^  q7a;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	internal: System::Windows::Forms::Panel^  panel12;
	private: 
	private: System::Windows::Forms::Label^  label13;
	internal: 
	internal: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
internal: 
	private: 
	private: System::ComponentModel::IContainer^  components;
	internal: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(freqD::typeid));
			this->q5d = (gcnew System::Windows::Forms::RadioButton());
			this->q4d = (gcnew System::Windows::Forms::RadioButton());
			this->q4b = (gcnew System::Windows::Forms::RadioButton());
			this->q4c = (gcnew System::Windows::Forms::RadioButton());
			this->q4a = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->q5b = (gcnew System::Windows::Forms::RadioButton());
			this->q5c = (gcnew System::Windows::Forms::RadioButton());
			this->q5a = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->q6d = (gcnew System::Windows::Forms::RadioButton());
			this->q6b = (gcnew System::Windows::Forms::RadioButton());
			this->q6c = (gcnew System::Windows::Forms::RadioButton());
			this->q6a = (gcnew System::Windows::Forms::RadioButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->q3d = (gcnew System::Windows::Forms::RadioButton());
			this->q3b = (gcnew System::Windows::Forms::RadioButton());
			this->q3c = (gcnew System::Windows::Forms::RadioButton());
			this->q3a = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->q1d = (gcnew System::Windows::Forms::RadioButton());
			this->q1b = (gcnew System::Windows::Forms::RadioButton());
			this->q1c = (gcnew System::Windows::Forms::RadioButton());
			this->q1a = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->q2d = (gcnew System::Windows::Forms::RadioButton());
			this->q2b = (gcnew System::Windows::Forms::RadioButton());
			this->q2c = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->q2a = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->q10d = (gcnew System::Windows::Forms::RadioButton());
			this->q10b = (gcnew System::Windows::Forms::RadioButton());
			this->q10c = (gcnew System::Windows::Forms::RadioButton());
			this->q10a = (gcnew System::Windows::Forms::RadioButton());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->q9d = (gcnew System::Windows::Forms::RadioButton());
			this->q9b = (gcnew System::Windows::Forms::RadioButton());
			this->q9c = (gcnew System::Windows::Forms::RadioButton());
			this->q9a = (gcnew System::Windows::Forms::RadioButton());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->q8d = (gcnew System::Windows::Forms::RadioButton());
			this->q8b = (gcnew System::Windows::Forms::RadioButton());
			this->q8c = (gcnew System::Windows::Forms::RadioButton());
			this->q8a = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->q7d = (gcnew System::Windows::Forms::RadioButton());
			this->q7b = (gcnew System::Windows::Forms::RadioButton());
			this->q7c = (gcnew System::Windows::Forms::RadioButton());
			this->q7a = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// q5d
			// 
			this->q5d->AutoSize = true;
			this->q5d->BackColor = System::Drawing::Color::Transparent;
			this->q5d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q5d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q5d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q5d->Location = System::Drawing::Point(285, 65);
			this->q5d->Name = L"q5d";
			this->q5d->Size = System::Drawing::Size(105, 20);
			this->q5d->TabIndex = 11;
			this->q5d->TabStop = true;
			this->q5d->Text = L"D) 41 Celsius";
			this->q5d->UseVisualStyleBackColor = false;
			// 
			// q4d
			// 
			this->q4d->AutoSize = true;
			this->q4d->BackColor = System::Drawing::Color::Transparent;
			this->q4d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q4d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q4d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q4d->Location = System::Drawing::Point(285, 65);
			this->q4d->Name = L"q4d";
			this->q4d->Size = System::Drawing::Size(106, 20);
			this->q4d->TabIndex = 11;
			this->q4d->TabStop = true;
			this->q4d->Text = L"D) 14 and -65";
			this->q4d->UseVisualStyleBackColor = false;
			// 
			// q4b
			// 
			this->q4b->AutoSize = true;
			this->q4b->BackColor = System::Drawing::Color::Transparent;
			this->q4b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q4b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q4b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q4b->Location = System::Drawing::Point(126, 66);
			this->q4b->Name = L"q4b";
			this->q4b->Size = System::Drawing::Size(106, 20);
			this->q4b->TabIndex = 10;
			this->q4b->TabStop = true;
			this->q4b->Text = L"B) -78 and 14";
			this->q4b->UseVisualStyleBackColor = false;
			// 
			// q4c
			// 
			this->q4c->AutoSize = true;
			this->q4c->BackColor = System::Drawing::Color::Transparent;
			this->q4c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q4c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q4c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q4c->Location = System::Drawing::Point(285, 45);
			this->q4c->Name = L"q4c";
			this->q4c->Size = System::Drawing::Size(101, 20);
			this->q4c->TabIndex = 9;
			this->q4c->TabStop = true;
			this->q4c->Text = L"C) 56 and 11";
			this->q4c->UseVisualStyleBackColor = false;
			// 
			// q4a
			// 
			this->q4a->AutoSize = true;
			this->q4a->BackColor = System::Drawing::Color::Transparent;
			this->q4a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q4a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q4a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q4a->Location = System::Drawing::Point(126, 46);
			this->q4a->Name = L"q4a";
			this->q4a->Size = System::Drawing::Size(105, 20);
			this->q4a->TabIndex = 8;
			this->q4a->TabStop = true;
			this->q4a->Text = L"A) 11 and -56";
			this->q4a->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(41, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(553, 37);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Taking A to be 35, what would ∑f and ∑fd be\?";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label8->Dock = System::Windows::Forms::DockStyle::Left;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 100);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Q4";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->q4d);
			this->panel6->Controls->Add(this->q4b);
			this->panel6->Controls->Add(this->q4c);
			this->panel6->Controls->Add(this->q4a);
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 496);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(594, 100);
			this->panel6->TabIndex = 11;
			// 
			// q5b
			// 
			this->q5b->AutoSize = true;
			this->q5b->BackColor = System::Drawing::Color::Transparent;
			this->q5b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q5b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q5b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q5b->Location = System::Drawing::Point(126, 66);
			this->q5b->Name = L"q5b";
			this->q5b->Size = System::Drawing::Size(105, 20);
			this->q5b->TabIndex = 10;
			this->q5b->TabStop = true;
			this->q5b->Text = L"B) 32 Celsius";
			this->q5b->UseVisualStyleBackColor = false;
			// 
			// q5c
			// 
			this->q5c->AutoSize = true;
			this->q5c->BackColor = System::Drawing::Color::Transparent;
			this->q5c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q5c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q5c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q5c->Location = System::Drawing::Point(285, 45);
			this->q5c->Name = L"q5c";
			this->q5c->Size = System::Drawing::Size(105, 20);
			this->q5c->TabIndex = 9;
			this->q5c->TabStop = true;
			this->q5c->Text = L"C) 35 Celsius";
			this->q5c->UseVisualStyleBackColor = false;
			// 
			// q5a
			// 
			this->q5a->AutoSize = true;
			this->q5a->BackColor = System::Drawing::Color::Transparent;
			this->q5a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q5a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q5a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q5a->Location = System::Drawing::Point(126, 46);
			this->q5a->Name = L"q5a";
			this->q5a->Size = System::Drawing::Size(105, 20);
			this->q5a->TabIndex = 8;
			this->q5a->TabStop = true;
			this->q5a->Text = L"A) 30 Celsius";
			this->q5a->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label10->Dock = System::Windows::Forms::DockStyle::Top;
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(41, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(553, 37);
			this->label10->TabIndex = 7;
			this->label10->Text = L"If A is 35, the mean temperature of the city would be, ";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// q6d
			// 
			this->q6d->AutoSize = true;
			this->q6d->BackColor = System::Drawing::Color::Transparent;
			this->q6d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q6d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q6d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q6d->Location = System::Drawing::Point(285, 140);
			this->q6d->Name = L"q6d";
			this->q6d->Size = System::Drawing::Size(67, 20);
			this->q6d->TabIndex = 11;
			this->q6d->TabStop = true;
			this->q6d->Text = L"D) 25.4";
			this->q6d->UseVisualStyleBackColor = false;
			// 
			// q6b
			// 
			this->q6b->AutoSize = true;
			this->q6b->BackColor = System::Drawing::Color::Transparent;
			this->q6b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q6b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q6b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q6b->Location = System::Drawing::Point(126, 141);
			this->q6b->Name = L"q6b";
			this->q6b->Size = System::Drawing::Size(56, 20);
			this->q6b->TabIndex = 10;
			this->q6b->TabStop = true;
			this->q6b->Text = L"B) 29";
			this->q6b->UseVisualStyleBackColor = false;
			// 
			// q6c
			// 
			this->q6c->AutoSize = true;
			this->q6c->BackColor = System::Drawing::Color::Transparent;
			this->q6c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q6c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q6c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q6c->Location = System::Drawing::Point(285, 120);
			this->q6c->Name = L"q6c";
			this->q6c->Size = System::Drawing::Size(67, 20);
			this->q6c->TabIndex = 9;
			this->q6c->TabStop = true;
			this->q6c->Text = L"C) 24.9";
			this->q6c->UseVisualStyleBackColor = false;
			// 
			// q6a
			// 
			this->q6a->AutoSize = true;
			this->q6a->BackColor = System::Drawing::Color::Transparent;
			this->q6a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q6a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q6a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q6a->Location = System::Drawing::Point(126, 121);
			this->q6a->Name = L"q6a";
			this->q6a->Size = System::Drawing::Size(56, 20);
			this->q6a->TabIndex = 8;
			this->q6a->TabStop = true;
			this->q6a->Text = L"A) 27";
			this->q6a->UseVisualStyleBackColor = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->q3d);
			this->panel5->Controls->Add(this->q3b);
			this->panel5->Controls->Add(this->q3c);
			this->panel5->Controls->Add(this->q3a);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 396);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(594, 100);
			this->panel5->TabIndex = 10;
			// 
			// q3d
			// 
			this->q3d->AutoSize = true;
			this->q3d->BackColor = System::Drawing::Color::Transparent;
			this->q3d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q3d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q3d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q3d->Location = System::Drawing::Point(285, 65);
			this->q3d->Name = L"q3d";
			this->q3d->Size = System::Drawing::Size(56, 20);
			this->q3d->TabIndex = 11;
			this->q3d->TabStop = true;
			this->q3d->Text = L"D) 15";
			this->q3d->UseVisualStyleBackColor = false;
			// 
			// q3b
			// 
			this->q3b->AutoSize = true;
			this->q3b->BackColor = System::Drawing::Color::Transparent;
			this->q3b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q3b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q3b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q3b->Location = System::Drawing::Point(126, 66);
			this->q3b->Name = L"q3b";
			this->q3b->Size = System::Drawing::Size(60, 20);
			this->q3b->TabIndex = 10;
			this->q3b->TabStop = true;
			this->q3b->Text = L"B) -20";
			this->q3b->UseVisualStyleBackColor = false;
			// 
			// q3c
			// 
			this->q3c->AutoSize = true;
			this->q3c->BackColor = System::Drawing::Color::Transparent;
			this->q3c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q3c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q3c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q3c->Location = System::Drawing::Point(285, 45);
			this->q3c->Name = L"q3c";
			this->q3c->Size = System::Drawing::Size(60, 20);
			this->q3c->TabIndex = 9;
			this->q3c->TabStop = true;
			this->q3c->Text = L"C) -10";
			this->q3c->UseVisualStyleBackColor = false;
			// 
			// q3a
			// 
			this->q3a->AutoSize = true;
			this->q3a->BackColor = System::Drawing::Color::Transparent;
			this->q3a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q3a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q3a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q3a->Location = System::Drawing::Point(126, 46);
			this->q3a->Name = L"q3a";
			this->q3a->Size = System::Drawing::Size(49, 20);
			this->q3a->TabIndex = 8;
			this->q3a->TabStop = true;
			this->q3a->Text = L"A) 6";
			this->q3a->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(41, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(553, 37);
			this->label5->TabIndex = 7;
			this->label5->Text = L"If the assumed mean is 35, what would fd be when x=31\?";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Dock = System::Windows::Forms::DockStyle::Left;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 100);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Q3";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label11->Dock = System::Windows::Forms::DockStyle::Left;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(0, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 100);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Q5";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// q1d
			// 
			this->q1d->AutoSize = true;
			this->q1d->BackColor = System::Drawing::Color::Transparent;
			this->q1d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q1d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q1d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q1d->Location = System::Drawing::Point(303, 265);
			this->q1d->Name = L"q1d";
			this->q1d->Size = System::Drawing::Size(60, 20);
			this->q1d->TabIndex = 5;
			this->q1d->TabStop = true;
			this->q1d->Text = L"D) 2.5";
			this->q1d->UseVisualStyleBackColor = false;
			// 
			// q1b
			// 
			this->q1b->AutoSize = true;
			this->q1b->BackColor = System::Drawing::Color::Transparent;
			this->q1b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q1b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q1b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q1b->Location = System::Drawing::Point(144, 266);
			this->q1b->Name = L"q1b";
			this->q1b->Size = System::Drawing::Size(49, 20);
			this->q1b->TabIndex = 4;
			this->q1b->TabStop = true;
			this->q1b->Text = L"B) 3";
			this->q1b->UseVisualStyleBackColor = false;
			// 
			// q1c
			// 
			this->q1c->AutoSize = true;
			this->q1c->BackColor = System::Drawing::Color::Transparent;
			this->q1c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q1c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q1c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q1c->Location = System::Drawing::Point(303, 245);
			this->q1c->Name = L"q1c";
			this->q1c->Size = System::Drawing::Size(56, 20);
			this->q1c->TabIndex = 3;
			this->q1c->TabStop = true;
			this->q1c->Text = L"C) 35";
			this->q1c->UseVisualStyleBackColor = false;
			// 
			// q1a
			// 
			this->q1a->AutoSize = true;
			this->q1a->BackColor = System::Drawing::Color::Transparent;
			this->q1a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q1a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q1a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q1a->Location = System::Drawing::Point(144, 246);
			this->q1a->Name = L"q1a";
			this->q1a->Size = System::Drawing::Size(49, 20);
			this->q1a->TabIndex = 2;
			this->q1a->TabStop = true;
			this->q1a->Text = L"A) 6";
			this->q1a->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 102);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Q1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// q2d
			// 
			this->q2d->AutoSize = true;
			this->q2d->BackColor = System::Drawing::Color::Transparent;
			this->q2d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q2d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q2d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q2d->Location = System::Drawing::Point(285, 65);
			this->q2d->Name = L"q2d";
			this->q2d->Size = System::Drawing::Size(60, 20);
			this->q2d->TabIndex = 11;
			this->q2d->TabStop = true;
			this->q2d->Text = L"D) -15";
			this->q2d->UseVisualStyleBackColor = false;
			// 
			// q2b
			// 
			this->q2b->AutoSize = true;
			this->q2b->BackColor = System::Drawing::Color::Transparent;
			this->q2b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q2b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q2b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q2b->Location = System::Drawing::Point(126, 66);
			this->q2b->Name = L"q2b";
			this->q2b->Size = System::Drawing::Size(49, 20);
			this->q2b->TabIndex = 10;
			this->q2b->TabStop = true;
			this->q2b->Text = L"B) 5";
			this->q2b->UseVisualStyleBackColor = false;
			// 
			// q2c
			// 
			this->q2c->AutoSize = true;
			this->q2c->BackColor = System::Drawing::Color::Transparent;
			this->q2c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q2c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q2c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q2c->Location = System::Drawing::Point(285, 45);
			this->q2c->Name = L"q2c";
			this->q2c->Size = System::Drawing::Size(60, 20);
			this->q2c->TabIndex = 9;
			this->q2c->TabStop = true;
			this->q2c->Text = L"C) -10";
			this->q2c->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->q1d);
			this->panel2->Controls->Add(this->q1b);
			this->panel2->Controls->Add(this->q1c);
			this->panel2->Controls->Add(this->q1a);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(594, 296);
			this->panel2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Teal;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(594, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Q1- Q5 are based on the following:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// q2a
			// 
			this->q2a->AutoSize = true;
			this->q2a->BackColor = System::Drawing::Color::Transparent;
			this->q2a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q2a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q2a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q2a->Location = System::Drawing::Point(126, 46);
			this->q2a->Name = L"q2a";
			this->q2a->Size = System::Drawing::Size(60, 20);
			this->q2a->TabIndex = 8;
			this->q2a->TabStop = true;
			this->q2a->Text = L"A) -20";
			this->q2a->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Dock = System::Windows::Forms::DockStyle::Left;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 100);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Q2";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->q2d);
			this->panel4->Controls->Add(this->q2b);
			this->panel4->Controls->Add(this->q2c);
			this->panel4->Controls->Add(this->q2a);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 296);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(594, 100);
			this->panel4->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(41, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(553, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = L"The deviation (d) when x=20, under an assumed mean of 35 would be,  ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(38, 70);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(553, 37);
			this->label12->TabIndex = 7;
			this->label12->Text = L"If the mid-value (x), needed to be calculated here, what would it be for the tank" 
				L"s in the range of 25-29\?";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(3, 88);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(611, 338);
			this->panel1->TabIndex = 11;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->q10d);
			this->panel7->Controls->Add(this->q10b);
			this->panel7->Controls->Add(this->q10c);
			this->panel7->Controls->Add(this->q10a);
			this->panel7->Controls->Add(this->label20);
			this->panel7->Controls->Add(this->label21);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 1206);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(594, 100);
			this->panel7->TabIndex = 18;
			// 
			// q10d
			// 
			this->q10d->AutoSize = true;
			this->q10d->BackColor = System::Drawing::Color::Transparent;
			this->q10d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q10d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q10d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q10d->Location = System::Drawing::Point(285, 65);
			this->q10d->Name = L"q10d";
			this->q10d->Size = System::Drawing::Size(56, 20);
			this->q10d->TabIndex = 11;
			this->q10d->TabStop = true;
			this->q10d->Text = L"D) 49";
			this->q10d->UseVisualStyleBackColor = false;
			// 
			// q10b
			// 
			this->q10b->AutoSize = true;
			this->q10b->BackColor = System::Drawing::Color::Transparent;
			this->q10b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q10b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q10b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q10b->Location = System::Drawing::Point(126, 66);
			this->q10b->Name = L"q10b";
			this->q10b->Size = System::Drawing::Size(56, 20);
			this->q10b->TabIndex = 10;
			this->q10b->TabStop = true;
			this->q10b->Text = L"B) 28";
			this->q10b->UseVisualStyleBackColor = false;
			// 
			// q10c
			// 
			this->q10c->AutoSize = true;
			this->q10c->BackColor = System::Drawing::Color::Transparent;
			this->q10c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q10c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q10c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q10c->Location = System::Drawing::Point(285, 45);
			this->q10c->Name = L"q10c";
			this->q10c->Size = System::Drawing::Size(56, 20);
			this->q10c->TabIndex = 9;
			this->q10c->TabStop = true;
			this->q10c->Text = L"C) 37";
			this->q10c->UseVisualStyleBackColor = false;
			// 
			// q10a
			// 
			this->q10a->AutoSize = true;
			this->q10a->BackColor = System::Drawing::Color::Transparent;
			this->q10a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q10a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q10a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q10a->Location = System::Drawing::Point(126, 46);
			this->q10a->Name = L"q10a";
			this->q10a->Size = System::Drawing::Size(56, 20);
			this->q10a->TabIndex = 8;
			this->q10a->TabStop = true;
			this->q10a->Text = L"A) 21";
			this->q10a->UseVisualStyleBackColor = false;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label20->Dock = System::Windows::Forms::DockStyle::Top;
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(41, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(553, 37);
			this->label20->TabIndex = 7;
			this->label20->Text = L"The mean average sales of the factory would be, ";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label21->Dock = System::Windows::Forms::DockStyle::Left;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(0, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 100);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Q10";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Controls->Add(this->q9d);
			this->panel9->Controls->Add(this->q9b);
			this->panel9->Controls->Add(this->q9c);
			this->panel9->Controls->Add(this->q9a);
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->label19);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 1083);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(594, 123);
			this->panel9->TabIndex = 17;
			// 
			// q9d
			// 
			this->q9d->AutoSize = true;
			this->q9d->BackColor = System::Drawing::Color::Transparent;
			this->q9d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q9d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q9d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q9d->Location = System::Drawing::Point(285, 85);
			this->q9d->Name = L"q9d";
			this->q9d->Size = System::Drawing::Size(70, 20);
			this->q9d->TabIndex = 11;
			this->q9d->TabStop = true;
			this->q9d->Text = L"D) 1270";
			this->q9d->UseVisualStyleBackColor = false;
			// 
			// q9b
			// 
			this->q9b->AutoSize = true;
			this->q9b->BackColor = System::Drawing::Color::Transparent;
			this->q9b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q9b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q9b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q9b->Location = System::Drawing::Point(126, 86);
			this->q9b->Name = L"q9b";
			this->q9b->Size = System::Drawing::Size(70, 20);
			this->q9b->TabIndex = 10;
			this->q9b->TabStop = true;
			this->q9b->Text = L"B) 1322";
			this->q9b->UseVisualStyleBackColor = false;
			// 
			// q9c
			// 
			this->q9c->AutoSize = true;
			this->q9c->BackColor = System::Drawing::Color::Transparent;
			this->q9c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q9c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q9c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q9c->Location = System::Drawing::Point(285, 65);
			this->q9c->Name = L"q9c";
			this->q9c->Size = System::Drawing::Size(70, 20);
			this->q9c->TabIndex = 9;
			this->q9c->TabStop = true;
			this->q9c->Text = L"C) 1981";
			this->q9c->UseVisualStyleBackColor = false;
			// 
			// q9a
			// 
			this->q9a->AutoSize = true;
			this->q9a->BackColor = System::Drawing::Color::Transparent;
			this->q9a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q9a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q9a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q9a->Location = System::Drawing::Point(126, 66);
			this->q9a->Name = L"q9a";
			this->q9a->Size = System::Drawing::Size(63, 20);
			this->q9a->TabIndex = 8;
			this->q9a->TabStop = true;
			this->q9a->Text = L"A) 764";
			this->q9a->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label18->Dock = System::Windows::Forms::DockStyle::Top;
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(41, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(553, 51);
			this->label18->TabIndex = 7;
			this->label18->Text = L"What would ∑fx be\?";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label19->Dock = System::Windows::Forms::DockStyle::Left;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(0, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 123);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Q9";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->Controls->Add(this->q8d);
			this->panel10->Controls->Add(this->q8b);
			this->panel10->Controls->Add(this->q8c);
			this->panel10->Controls->Add(this->q8a);
			this->panel10->Controls->Add(this->label16);
			this->panel10->Controls->Add(this->label17);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 983);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(594, 100);
			this->panel10->TabIndex = 16;
			// 
			// q8d
			// 
			this->q8d->AutoSize = true;
			this->q8d->BackColor = System::Drawing::Color::Transparent;
			this->q8d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q8d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q8d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q8d->Location = System::Drawing::Point(285, 65);
			this->q8d->Name = L"q8d";
			this->q8d->Size = System::Drawing::Size(56, 20);
			this->q8d->TabIndex = 11;
			this->q8d->TabStop = true;
			this->q8d->Text = L"D) 52";
			this->q8d->UseVisualStyleBackColor = false;
			// 
			// q8b
			// 
			this->q8b->AutoSize = true;
			this->q8b->BackColor = System::Drawing::Color::Transparent;
			this->q8b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q8b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q8b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q8b->Location = System::Drawing::Point(126, 66);
			this->q8b->Name = L"q8b";
			this->q8b->Size = System::Drawing::Size(56, 20);
			this->q8b->TabIndex = 10;
			this->q8b->TabStop = true;
			this->q8b->Text = L"B) 35";
			this->q8b->UseVisualStyleBackColor = false;
			// 
			// q8c
			// 
			this->q8c->AutoSize = true;
			this->q8c->BackColor = System::Drawing::Color::Transparent;
			this->q8c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q8c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q8c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q8c->Location = System::Drawing::Point(285, 45);
			this->q8c->Name = L"q8c";
			this->q8c->Size = System::Drawing::Size(56, 20);
			this->q8c->TabIndex = 9;
			this->q8c->TabStop = true;
			this->q8c->Text = L"C) 45";
			this->q8c->UseVisualStyleBackColor = false;
			// 
			// q8a
			// 
			this->q8a->AutoSize = true;
			this->q8a->BackColor = System::Drawing::Color::Transparent;
			this->q8a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q8a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q8a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q8a->Location = System::Drawing::Point(126, 46);
			this->q8a->Name = L"q8a";
			this->q8a->Size = System::Drawing::Size(56, 20);
			this->q8a->TabIndex = 8;
			this->q8a->TabStop = true;
			this->q8a->Text = L"A) 51";
			this->q8a->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label16->Dock = System::Windows::Forms::DockStyle::Top;
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(41, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(553, 37);
			this->label16->TabIndex = 7;
			this->label16->Text = L"∑f would be, ";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label17->Dock = System::Windows::Forms::DockStyle::Left;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 100);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Q8";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Transparent;
			this->panel11->Controls->Add(this->q7d);
			this->panel11->Controls->Add(this->q7b);
			this->panel11->Controls->Add(this->q7c);
			this->panel11->Controls->Add(this->q7a);
			this->panel11->Controls->Add(this->label14);
			this->panel11->Controls->Add(this->label15);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 883);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(594, 100);
			this->panel11->TabIndex = 15;
			// 
			// q7d
			// 
			this->q7d->AutoSize = true;
			this->q7d->BackColor = System::Drawing::Color::Transparent;
			this->q7d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q7d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q7d->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q7d->Location = System::Drawing::Point(285, 65);
			this->q7d->Name = L"q7d";
			this->q7d->Size = System::Drawing::Size(56, 20);
			this->q7d->TabIndex = 11;
			this->q7d->TabStop = true;
			this->q7d->Text = L"D) 14";
			this->q7d->UseVisualStyleBackColor = false;
			// 
			// q7b
			// 
			this->q7b->AutoSize = true;
			this->q7b->BackColor = System::Drawing::Color::Transparent;
			this->q7b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q7b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q7b->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q7b->Location = System::Drawing::Point(126, 66);
			this->q7b->Name = L"q7b";
			this->q7b->Size = System::Drawing::Size(63, 20);
			this->q7b->TabIndex = 10;
			this->q7b->TabStop = true;
			this->q7b->Text = L"B) 672";
			this->q7b->UseVisualStyleBackColor = false;
			// 
			// q7c
			// 
			this->q7c->AutoSize = true;
			this->q7c->BackColor = System::Drawing::Color::Transparent;
			this->q7c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q7c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q7c->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q7c->Location = System::Drawing::Point(285, 45);
			this->q7c->Name = L"q7c";
			this->q7c->Size = System::Drawing::Size(70, 20);
			this->q7c->TabIndex = 9;
			this->q7c->TabStop = true;
			this->q7c->Text = L"C) 1056";
			this->q7c->UseVisualStyleBackColor = false;
			// 
			// q7a
			// 
			this->q7a->AutoSize = true;
			this->q7a->BackColor = System::Drawing::Color::Transparent;
			this->q7a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->q7a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->q7a->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q7a->Location = System::Drawing::Point(126, 46);
			this->q7a->Name = L"q7a";
			this->q7a->Size = System::Drawing::Size(63, 20);
			this->q7a->TabIndex = 8;
			this->q7a->TabStop = true;
			this->q7a->Text = L"A) 512";
			this->q7a->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label14->Dock = System::Windows::Forms::DockStyle::Top;
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(41, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(553, 37);
			this->label14->TabIndex = 7;
			this->label14->Text = L"The fx for the range 30-35 would be,";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label15->Dock = System::Windows::Forms::DockStyle::Left;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 100);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Q7";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Transparent;
			this->panel12->Controls->Add(this->label23);
			this->panel12->Controls->Add(this->label24);
			this->panel12->Controls->Add(this->q6d);
			this->panel12->Controls->Add(this->q6b);
			this->panel12->Controls->Add(this->q6c);
			this->panel12->Controls->Add(this->q6a);
			this->panel12->Controls->Add(this->label12);
			this->panel12->Controls->Add(this->label13);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 696);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(594, 187);
			this->panel12->TabIndex = 14;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(0, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 117);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Q6";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->q5d);
			this->panel8->Controls->Add(this->q5b);
			this->panel8->Controls->Add(this->q5c);
			this->panel8->Controls->Add(this->q5a);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Controls->Add(this->label11);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 596);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(594, 100);
			this->panel8->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Teal;
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(0, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(594, 39);
			this->label9->TabIndex = 6;
			this->label9->Text = L"A group of Students observed the Temperature (in Celsius) of a particular City fo" 
				L"r 2 weeks and have recorded their findings as follows- ";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(40, 194);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(553, 37);
			this->label22->TabIndex = 7;
			this->label22->Text = L"The most suitable value to be taken as the assumed mean (A) here is, ";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(212, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 128);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Teal;
			this->label23->Dock = System::Windows::Forms::DockStyle::Top;
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(0, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(594, 39);
			this->label23->TabIndex = 13;
			this->label23->Text = resources->GetString(L"label23.Text");
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Teal;
			this->label24->Dock = System::Windows::Forms::DockStyle::Top;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(0, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(594, 27);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Q6- Q10 are based on the following:";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// freqD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 447);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"freqD";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"freqD";
			this->SizeChanged += gcnew System::EventHandler(this, &freqD::freqD_SizeChanged);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void freqD_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
				 this->CenterToScreen();
			 }
};
}
