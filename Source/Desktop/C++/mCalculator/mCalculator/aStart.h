#pragma once

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for aStart
	/// </summary>
	public ref class aStart : public System::Windows::Forms::Form
	{
	public:
		aStart(void)
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
		~aStart()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 








	internal: System::Windows::Forms::Label^  Label5;

	internal: System::Windows::Forms::Label^  Label4;







	internal: System::Windows::Forms::Panel^  Panel6;
	internal: System::Windows::Forms::Panel^  Panel4;
	internal: System::Windows::Forms::PictureBox^  PictureBox13;
	internal: System::Windows::Forms::PictureBox^  PictureBox6;
	internal: System::Windows::Forms::PictureBox^  PictureBox5;
	internal: System::Windows::Forms::PictureBox^  PictureBox1;
	internal: System::Windows::Forms::PictureBox^  PictureBox4;
	internal: System::Windows::Forms::Panel^  Panel1;
	internal: System::Windows::Forms::PictureBox^  PictureBox2;
	internal: System::Windows::Forms::PictureBox^  PictureBox3;
	internal: System::Windows::Forms::PictureBox^  PictureBox11;
	internal: System::Windows::Forms::PictureBox^  PictureBox12;
	internal: System::Windows::Forms::Panel^  Panel5;
	internal: System::Windows::Forms::PictureBox^  PictureBox14;
	internal: System::Windows::Forms::PictureBox^  PictureBox7;
	internal: System::Windows::Forms::PictureBox^  PictureBox8;
	internal: System::Windows::Forms::PictureBox^  PictureBox9;
	internal: System::Windows::Forms::PictureBox^  PictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(aStart::typeid));
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Panel6 = (gcnew System::Windows::Forms::Panel());
			this->Panel4 = (gcnew System::Windows::Forms::Panel());
			this->PictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->PictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->Panel5 = (gcnew System::Windows::Forms::Panel());
			this->PictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->Panel6->SuspendLayout();
			this->Panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox4))->BeginInit();
			this->Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox12))->BeginInit();
			this->Panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->ForeColor = System::Drawing::Color::White;
			this->Label5->Location = System::Drawing::Point(202, 36);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(309, 13);
			this->Label5->TabIndex = 1;
			this->Label5->Text = L"Select a Fixed Shape from the Following to explore more about it";
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label4->ForeColor = System::Drawing::Color::Black;
			this->Label4->Location = System::Drawing::Point(211, 3);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(299, 20);
			this->Label4->TabIndex = 0;
			this->Label4->Text = L"Area and Perimeter of Fixed Shapes";
			// 
			// Panel6
			// 
			this->Panel6->BackColor = System::Drawing::Color::Teal;
			this->Panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel6->Controls->Add(this->pictureBox15);
			this->Panel6->Controls->Add(this->Label4);
			this->Panel6->Location = System::Drawing::Point(-3, 0);
			this->Panel6->Name = L"Panel6";
			this->Panel6->Size = System::Drawing::Size(701, 31);
			this->Panel6->TabIndex = 0;
			// 
			// Panel4
			// 
			this->Panel4->BackColor = System::Drawing::Color::Transparent;
			this->Panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel4->Controls->Add(this->PictureBox13);
			this->Panel4->Controls->Add(this->PictureBox6);
			this->Panel4->Controls->Add(this->PictureBox5);
			this->Panel4->Controls->Add(this->PictureBox1);
			this->Panel4->Controls->Add(this->PictureBox4);
			this->Panel4->Location = System::Drawing::Point(14, 56);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(665, 125);
			this->Panel4->TabIndex = 7;
			// 
			// PictureBox13
			// 
			this->PictureBox13->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox13->Location = System::Drawing::Point(531, 6);
			this->PictureBox13->Name = L"PictureBox13";
			this->PictureBox13->Size = System::Drawing::Size(125, 111);
			this->PictureBox13->TabIndex = 5;
			this->PictureBox13->TabStop = false;
			// 
			// PictureBox6
			// 
			this->PictureBox6->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox6->Location = System::Drawing::Point(400, 6);
			this->PictureBox6->Name = L"PictureBox6";
			this->PictureBox6->Size = System::Drawing::Size(125, 111);
			this->PictureBox6->TabIndex = 4;
			this->PictureBox6->TabStop = false;
			// 
			// PictureBox5
			// 
			this->PictureBox5->BackColor = System::Drawing::Color::White;
			this->PictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox5->Location = System::Drawing::Point(269, 6);
			this->PictureBox5->Name = L"PictureBox5";
			this->PictureBox5->Size = System::Drawing::Size(125, 111);
			this->PictureBox5->TabIndex = 3;
			this->PictureBox5->TabStop = false;
			// 
			// PictureBox1
			// 
			this->PictureBox1->BackColor = System::Drawing::Color::White;
			this->PictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox1->Location = System::Drawing::Point(7, 6);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(125, 111);
			this->PictureBox1->TabIndex = 2;
			this->PictureBox1->TabStop = false;
			// 
			// PictureBox4
			// 
			this->PictureBox4->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox4->Location = System::Drawing::Point(138, 6);
			this->PictureBox4->Name = L"PictureBox4";
			this->PictureBox4->Size = System::Drawing::Size(125, 111);
			this->PictureBox4->TabIndex = 1;
			this->PictureBox4->TabStop = false;
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::Transparent;
			this->Panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel1->Controls->Add(this->PictureBox2);
			this->Panel1->Controls->Add(this->PictureBox3);
			this->Panel1->Controls->Add(this->PictureBox11);
			this->Panel1->Controls->Add(this->PictureBox12);
			this->Panel1->Location = System::Drawing::Point(68, 318);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(535, 125);
			this->Panel1->TabIndex = 9;
			// 
			// PictureBox2
			// 
			this->PictureBox2->BackColor = System::Drawing::Color::White;
			this->PictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox2->Location = System::Drawing::Point(400, 6);
			this->PictureBox2->Name = L"PictureBox2";
			this->PictureBox2->Size = System::Drawing::Size(125, 111);
			this->PictureBox2->TabIndex = 4;
			this->PictureBox2->TabStop = false;
			// 
			// PictureBox3
			// 
			this->PictureBox3->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox3->Location = System::Drawing::Point(269, 6);
			this->PictureBox3->Name = L"PictureBox3";
			this->PictureBox3->Size = System::Drawing::Size(125, 111);
			this->PictureBox3->TabIndex = 3;
			this->PictureBox3->TabStop = false;
			// 
			// PictureBox11
			// 
			this->PictureBox11->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox11->Location = System::Drawing::Point(7, 6);
			this->PictureBox11->Name = L"PictureBox11";
			this->PictureBox11->Size = System::Drawing::Size(125, 111);
			this->PictureBox11->TabIndex = 2;
			this->PictureBox11->TabStop = false;
			// 
			// PictureBox12
			// 
			this->PictureBox12->BackColor = System::Drawing::Color::White;
			this->PictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox12->Location = System::Drawing::Point(138, 6);
			this->PictureBox12->Name = L"PictureBox12";
			this->PictureBox12->Size = System::Drawing::Size(125, 111);
			this->PictureBox12->TabIndex = 1;
			this->PictureBox12->TabStop = false;
			// 
			// Panel5
			// 
			this->Panel5->BackColor = System::Drawing::Color::Transparent;
			this->Panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel5->Controls->Add(this->PictureBox14);
			this->Panel5->Controls->Add(this->PictureBox7);
			this->Panel5->Controls->Add(this->PictureBox8);
			this->Panel5->Controls->Add(this->PictureBox9);
			this->Panel5->Controls->Add(this->PictureBox10);
			this->Panel5->Location = System::Drawing::Point(14, 187);
			this->Panel5->Name = L"Panel5";
			this->Panel5->Size = System::Drawing::Size(665, 125);
			this->Panel5->TabIndex = 8;
			// 
			// PictureBox14
			// 
			this->PictureBox14->BackColor = System::Drawing::Color::White;
			this->PictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox14->Location = System::Drawing::Point(531, 6);
			this->PictureBox14->Name = L"PictureBox14";
			this->PictureBox14->Size = System::Drawing::Size(125, 111);
			this->PictureBox14->TabIndex = 5;
			this->PictureBox14->TabStop = false;
			// 
			// PictureBox7
			// 
			this->PictureBox7->BackColor = System::Drawing::Color::White;
			this->PictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox7->Location = System::Drawing::Point(400, 6);
			this->PictureBox7->Name = L"PictureBox7";
			this->PictureBox7->Size = System::Drawing::Size(125, 111);
			this->PictureBox7->TabIndex = 4;
			this->PictureBox7->TabStop = false;
			// 
			// PictureBox8
			// 
			this->PictureBox8->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox8->Location = System::Drawing::Point(269, 6);
			this->PictureBox8->Name = L"PictureBox8";
			this->PictureBox8->Size = System::Drawing::Size(125, 111);
			this->PictureBox8->TabIndex = 3;
			this->PictureBox8->TabStop = false;
			// 
			// PictureBox9
			// 
			this->PictureBox9->BackColor = System::Drawing::Color::DarkOrange;
			this->PictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox9->Location = System::Drawing::Point(7, 6);
			this->PictureBox9->Name = L"PictureBox9";
			this->PictureBox9->Size = System::Drawing::Size(125, 111);
			this->PictureBox9->TabIndex = 2;
			this->PictureBox9->TabStop = false;
			// 
			// PictureBox10
			// 
			this->PictureBox10->BackColor = System::Drawing::Color::White;
			this->PictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PictureBox10->Location = System::Drawing::Point(138, 6);
			this->PictureBox10->Name = L"PictureBox10";
			this->PictureBox10->Size = System::Drawing::Size(125, 111);
			this->PictureBox10->TabIndex = 1;
			this->PictureBox10->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Location = System::Drawing::Point(663, 5);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(23, 18);
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &aStart::pictureBox15_Click);
			// 
			// aStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(692, 456);
			this->Controls->Add(this->Panel4);
			this->Controls->Add(this->Label5);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->Panel5);
			this->Controls->Add(this->Panel6);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"aStart";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"aStart";
			this->Panel6->ResumeLayout(false);
			this->Panel6->PerformLayout();
			this->Panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox4))->EndInit();
			this->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox12))->EndInit();
			this->Panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
};
}
