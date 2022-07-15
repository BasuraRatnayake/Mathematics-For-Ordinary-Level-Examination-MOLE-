#pragma once

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for pyth
	/// </summary>
	public ref class pyth : public System::Windows::Forms::Form
	{
	public:
		pyth(void)
		{
			InitializeComponent();
			this->Size = System::Drawing::Size(508,228);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pyth()
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: 


	internal: System::Windows::Forms::Button^  button2;
	internal: System::Windows::Forms::Button^  button3;
	internal: System::Windows::Forms::Panel^  panel7;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::TextBox^  b;

	internal: System::Windows::Forms::TextBox^  a;

	internal: System::Windows::Forms::Label^  label2;
	internal: System::Windows::Forms::Label^  label1;
	internal: System::Windows::Forms::TextBox^  c;

	internal: System::Windows::Forms::Label^  label18;
	internal: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::Label^  ab;
	internal: System::Windows::Forms::Label^  bc;


	internal: System::Windows::Forms::Label^  ac;
	private: System::Windows::Forms::PictureBox^  abN;
	internal: 
	internal: System::Windows::Forms::Label^  fa;
	private: 
	internal: System::Windows::Forms::Label^  s2;
	internal: System::Windows::Forms::Label^  s1;
	private: System::Windows::Forms::PictureBox^  bcN;
	internal: 
	private: System::Windows::Forms::PictureBox^  acN;




	private: 

	private: 


	internal: 

	internal: 

	internal: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(pyth::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->caln = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->ab = (gcnew System::Windows::Forms::Label());
			this->bc = (gcnew System::Windows::Forms::Label());
			this->ac = (gcnew System::Windows::Forms::Label());
			this->abN = (gcnew System::Windows::Forms::PictureBox());
			this->fa = (gcnew System::Windows::Forms::Label());
			this->s2 = (gcnew System::Windows::Forms::Label());
			this->s1 = (gcnew System::Windows::Forms::Label());
			this->bcN = (gcnew System::Windows::Forms::PictureBox());
			this->acN = (gcnew System::Windows::Forms::PictureBox());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->abN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bcN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->acN))->BeginInit();
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
			this->panel3->Location = System::Drawing::Point(0, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(555, 49);
			this->panel3->TabIndex = 8;
			// 
			// caln
			// 
			this->caln->BackColor = System::Drawing::Color::Transparent;
			this->caln->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->caln->Location = System::Drawing::Point(141, 25);
			this->caln->Name = L"caln";
			this->caln->Size = System::Drawing::Size(187, 14);
			this->caln->TabIndex = 2;
			this->caln->Text = L"Hypotenuse Side";
			this->caln->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(331, 7);
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
			this->label9->Location = System::Drawing::Point(79, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(251, 19);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Pythagoras Theorem Calculator";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(20, 196);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 261);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &pyth::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Maroon;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(247, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 45;
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
			this->button3->Location = System::Drawing::Point(369, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &pyth::button3_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->b);
			this->panel7->Controls->Add(this->a);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->c);
			this->panel7->Location = System::Drawing::Point(0, 53);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(502, 82);
			this->panel7->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gold;
			this->label6->Location = System::Drawing::Point(170, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 19);
			this->label6->TabIndex = 60;
			this->label6->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(234, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 19);
			this->label4->TabIndex = 59;
			this->label4->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(309, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 19);
			this->label3->TabIndex = 58;
			this->label3->Text = L"2";
			// 
			// b
			// 
			this->b->BackColor = System::Drawing::Color::Black;
			this->b->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->b->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b->ForeColor = System::Drawing::Color::White;
			this->b->Location = System::Drawing::Point(277, 30);
			this->b->MaxLength = 2;
			this->b->Multiline = true;
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(41, 23);
			this->b->TabIndex = 57;
			this->b->Text = L"BC";
			this->b->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::Black;
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->a->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->ForeColor = System::Drawing::Color::White;
			this->a->Location = System::Drawing::Point(200, 30);
			this->a->MaxLength = 2;
			this->a->Multiline = true;
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(41, 23);
			this->a->TabIndex = 56;
			this->a->Text = L"AB";
			this->a->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(251, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 22);
			this->label2->TabIndex = 55;
			this->label2->Text = L"+";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(183, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 22);
			this->label1->TabIndex = 53;
			this->label1->Text = L"=";
			// 
			// c
			// 
			this->c->BackColor = System::Drawing::Color::Black;
			this->c->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->c->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c->ForeColor = System::Drawing::Color::White;
			this->c->Location = System::Drawing::Point(136, 29);
			this->c->MaxLength = 2;
			this->c->Multiline = true;
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(41, 23);
			this->c->TabIndex = 39;
			this->c->Text = L"AC";
			this->c->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(3, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(238, 15);
			this->label18->TabIndex = 47;
			this->label18->Text = L"Tip: Using Pythagoras Theorem Calculator";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Location = System::Drawing::Point(3, 152);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(237, 31);
			this->label17->TabIndex = 48;
			this->label17->Text = L"Type \? inside AC to find the value of AC Similarly Use the Same Method to find BC" 
				L" or AB";
			// 
			// ab
			// 
			this->ab->AutoSize = true;
			this->ab->BackColor = System::Drawing::Color::Transparent;
			this->ab->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ab->ForeColor = System::Drawing::Color::Black;
			this->ab->Location = System::Drawing::Point(8, 314);
			this->ab->Name = L"ab";
			this->ab->Size = System::Drawing::Size(21, 22);
			this->ab->TabIndex = 54;
			this->ab->Text = L"=";
			// 
			// bc
			// 
			this->bc->AutoSize = true;
			this->bc->BackColor = System::Drawing::Color::Transparent;
			this->bc->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bc->ForeColor = System::Drawing::Color::Black;
			this->bc->Location = System::Drawing::Point(124, 430);
			this->bc->Name = L"bc";
			this->bc->Size = System::Drawing::Size(21, 22);
			this->bc->TabIndex = 55;
			this->bc->Text = L"=";
			// 
			// ac
			// 
			this->ac->AutoSize = true;
			this->ac->BackColor = System::Drawing::Color::Transparent;
			this->ac->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ac->ForeColor = System::Drawing::Color::Black;
			this->ac->Location = System::Drawing::Point(146, 302);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(21, 22);
			this->ac->TabIndex = 56;
			this->ac->Text = L"=";
			// 
			// abN
			// 
			this->abN->BackColor = System::Drawing::Color::Transparent;
			this->abN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"abN.BackgroundImage")));
			this->abN->Location = System::Drawing::Point(290, 228);
			this->abN->Name = L"abN";
			this->abN->Size = System::Drawing::Size(203, 183);
			this->abN->TabIndex = 57;
			this->abN->TabStop = false;
			this->abN->Visible = false;
			// 
			// fa
			// 
			this->fa->AutoSize = true;
			this->fa->BackColor = System::Drawing::Color::Transparent;
			this->fa->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fa->ForeColor = System::Drawing::Color::Black;
			this->fa->Location = System::Drawing::Point(358, 401);
			this->fa->Name = L"fa";
			this->fa->Size = System::Drawing::Size(21, 22);
			this->fa->TabIndex = 63;
			this->fa->Text = L"=";
			// 
			// s2
			// 
			this->s2->AutoSize = true;
			this->s2->BackColor = System::Drawing::Color::Transparent;
			this->s2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s2->ForeColor = System::Drawing::Color::Black;
			this->s2->Location = System::Drawing::Point(407, 364);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(64, 22);
			this->s2->TabIndex = 62;
			this->s2->Text = L"99 + 5";
			// 
			// s1
			// 
			this->s1->AutoSize = true;
			this->s1->BackColor = System::Drawing::Color::Transparent;
			this->s1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s1->ForeColor = System::Drawing::Color::Black;
			this->s1->Location = System::Drawing::Point(407, 303);
			this->s1->Name = L"s1";
			this->s1->Size = System::Drawing::Size(64, 22);
			this->s1->TabIndex = 61;
			this->s1->Text = L"99 + 5";
			// 
			// bcN
			// 
			this->bcN->BackColor = System::Drawing::Color::Transparent;
			this->bcN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bcN.BackgroundImage")));
			this->bcN->Location = System::Drawing::Point(314, 269);
			this->bcN->Name = L"bcN";
			this->bcN->Size = System::Drawing::Size(131, 172);
			this->bcN->TabIndex = 64;
			this->bcN->TabStop = false;
			this->bcN->Visible = false;
			// 
			// acN
			// 
			this->acN->BackColor = System::Drawing::Color::Transparent;
			this->acN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"acN.BackgroundImage")));
			this->acN->Location = System::Drawing::Point(362, 196);
			this->acN->Name = L"acN";
			this->acN->Size = System::Drawing::Size(203, 183);
			this->acN->TabIndex = 65;
			this->acN->TabStop = false;
			this->acN->Visible = false;
			// 
			// pyth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(492, 453);
			this->Controls->Add(this->fa);
			this->Controls->Add(this->s2);
			this->Controls->Add(this->s1);
			this->Controls->Add(this->ac);
			this->Controls->Add(this->bc);
			this->Controls->Add(this->ab);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->acN);
			this->Controls->Add(this->bcN);
			this->Controls->Add(this->abN);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"pyth";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pythagoras Theorem Calculator";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->abN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bcN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->acN))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
			 Boolean detValues(TextBox^ a, TextBox^ b, TextBox^ c){
				if(a->Text !="" && b->Text != "" && c->Text !=""){
					try{					
						if(a->Text == "?" && b->Text != "" && c->Text !=""){
							setData("0",b->Text, c->Text);
							ab->Text = a->Text;
						}else if(a->Text == "?" && b->Text != "" && c->Text !=""){
							setData(a->Text,"0", c->Text);
							bc->Text = b->Text;
						}else if(a->Text == "?" && b->Text != "" && c->Text !=""){
							setData(a->Text,b->Text, "0");
							ac->Text = c->Text;
						}
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
			void setData(String^ x, String^ b, String^ c){
				a1 =Math::Pow(System::Convert::ToDouble(x),2);
				b1 = Math::Pow(System::Convert::ToDouble(b),2);
				c1=Math::Pow(System::Convert::ToDouble(c),2);
			}
			void showP(PictureBox^ p){
				p->Location = System::Drawing::Point(290,228);
				p->Size = System::Drawing::Size(203, 183);
				p->Visible=true;
				p->BringToFront();
			}
			void detCal(){
				double eq;
				if(a1 == 0){
					eq = Math::Sqrt(c1 - b1);
					showP(abN);
				}else if(b1 == 0){
					eq = Math::Sqrt(c1 - a1);
					showP(bcN);
				}else if(c1 == 0){
					eq = Math::Sqrt(a1 + b1);
					showP(acN);
				}
			}
			double a1, b1, c1;
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(detValues(a,b,c)){
					this->Size = System::Drawing::Size(508,492);
				 }
		 }
};
}
