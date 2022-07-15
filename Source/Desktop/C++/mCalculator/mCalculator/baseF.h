#pragma once
#include "apCal.h"
#include "gpCal.h"
#include "percen.h"
#include "bis.h"
#include "pyth.h"

namespace mCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for baseF
	/// </summary>
	public ref class baseF : public System::Windows::Forms::Form
	{
	public:
		baseF(void)
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
		~baseF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  p1_17;
	private: System::Windows::Forms::Button^  p1_22;
	private: System::Windows::Forms::Button^  p1_2;
	private: System::Windows::Forms::Button^  p1_5;
	private: System::Windows::Forms::Button^  p1_4;
	private: System::Windows::Forms::Button^  p1_3;
	private: System::Windows::Forms::Button^  p1_12;
	private: System::Windows::Forms::Button^  p1_21;
	private: System::Windows::Forms::Button^  p1_16;
	private: System::Windows::Forms::Button^  p1_15;
	private: System::Windows::Forms::Button^  p1_14;
	private: System::Windows::Forms::Button^  p1_13;
	private: System::Windows::Forms::Button^  p1_11;
	private: System::Windows::Forms::Button^  p1_24;
	private: System::Windows::Forms::Button^  p1_23;
	private: System::Windows::Forms::Button^  p1_20;
	private: System::Windows::Forms::Button^  p1_19;
	private: System::Windows::Forms::Button^  p1_18;
	private: System::Windows::Forms::Button^  p1_1;
	private: System::Windows::Forms::Button^  p1_10;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->p1_17 = (gcnew System::Windows::Forms::Button());
			this->p1_22 = (gcnew System::Windows::Forms::Button());
			this->p1_2 = (gcnew System::Windows::Forms::Button());
			this->p1_5 = (gcnew System::Windows::Forms::Button());
			this->p1_4 = (gcnew System::Windows::Forms::Button());
			this->p1_3 = (gcnew System::Windows::Forms::Button());
			this->p1_12 = (gcnew System::Windows::Forms::Button());
			this->p1_21 = (gcnew System::Windows::Forms::Button());
			this->p1_16 = (gcnew System::Windows::Forms::Button());
			this->p1_15 = (gcnew System::Windows::Forms::Button());
			this->p1_14 = (gcnew System::Windows::Forms::Button());
			this->p1_13 = (gcnew System::Windows::Forms::Button());
			this->p1_11 = (gcnew System::Windows::Forms::Button());
			this->p1_24 = (gcnew System::Windows::Forms::Button());
			this->p1_23 = (gcnew System::Windows::Forms::Button());
			this->p1_20 = (gcnew System::Windows::Forms::Button());
			this->p1_19 = (gcnew System::Windows::Forms::Button());
			this->p1_18 = (gcnew System::Windows::Forms::Button());
			this->p1_1 = (gcnew System::Windows::Forms::Button());
			this->p1_10 = (gcnew System::Windows::Forms::Button());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(3, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 78);
			this->button1->TabIndex = 314;
			this->ttip->SetToolTip(this->button1, L"Volume Calculator");
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(107, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 78);
			this->button3->TabIndex = 305;
			this->ttip->SetToolTip(this->button3, L"Sets Calculator");
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(107, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 78);
			this->button4->TabIndex = 300;
			this->ttip->SetToolTip(this->button4, L"Perimeter Calculator");
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(418, 10);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 78);
			this->button5->TabIndex = 303;
			this->ttip->SetToolTip(this->button5, L"Ratio Calculator");
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(314, 9);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 78);
			this->button6->TabIndex = 302;
			this->ttip->SetToolTip(this->button6, L"Pythagoras Theorem");
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &baseF::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(210, 10);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 78);
			this->button7->TabIndex = 301;
			this->ttip->SetToolTip(this->button7, L"Probability Calculator");
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(210, 88);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 78);
			this->button8->TabIndex = 306;
			this->ttip->SetToolTip(this->button8, L"Representation Calculator");
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(107, 167);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(103, 78);
			this->button9->TabIndex = 310;
			this->ttip->SetToolTip(this->button9, L"Real Number Calculator");
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(210, 165);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(103, 78);
			this->button11->TabIndex = 313;
			this->ttip->SetToolTip(this->button11, L"Triangle Calculator");
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(418, 166);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(103, 78);
			this->button12->TabIndex = 312;
			this->ttip->SetToolTip(this->button12, L"Trigonometry Calculator");
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(314, 165);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(103, 78);
			this->button13->TabIndex = 311;
			this->ttip->SetToolTip(this->button13, L"Tax and Insurance Calculator");
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(3, 167);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(103, 78);
			this->button15->TabIndex = 309;
			this->ttip->SetToolTip(this->button15, L"Surface Area Calculator");
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(3, 11);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(103, 78);
			this->button22->TabIndex = 299;
			this->ttip->SetToolTip(this->button22, L"Percentage Calculator");
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &baseF::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(418, 88);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(103, 78);
			this->button23->TabIndex = 308;
			this->ttip->SetToolTip(this->button23, L"Square Root Calculator");
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(314, 87);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(103, 78);
			this->button24->TabIndex = 307;
			this->ttip->SetToolTip(this->button24, L"Speed Calculator");
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(3, 89);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(103, 78);
			this->button25->TabIndex = 304;
			this->ttip->SetToolTip(this->button25, L"Rationla Number Calculator");
			this->button25->UseVisualStyleBackColor = false;
			// 
			// p1_17
			// 
			this->p1_17->BackColor = System::Drawing::Color::Transparent;
			this->p1_17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_17->FlatAppearance->BorderSize = 0;
			this->p1_17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_17->ForeColor = System::Drawing::Color::White;
			this->p1_17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_17.Image")));
			this->p1_17->Location = System::Drawing::Point(210, 316);
			this->p1_17->Name = L"p1_17";
			this->p1_17->Size = System::Drawing::Size(103, 78);
			this->p1_17->TabIndex = 331;
			this->ttip->SetToolTip(this->p1_17, L"Inequality Calculator");
			this->p1_17->UseVisualStyleBackColor = false;
			// 
			// p1_22
			// 
			this->p1_22->BackColor = System::Drawing::Color::Transparent;
			this->p1_22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_22->FlatAppearance->BorderSize = 0;
			this->p1_22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_22->ForeColor = System::Drawing::Color::White;
			this->p1_22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_22.Image")));
			this->p1_22->Location = System::Drawing::Point(210, 395);
			this->p1_22->Name = L"p1_22";
			this->p1_22->Size = System::Drawing::Size(103, 78);
			this->p1_22->TabIndex = 336;
			this->ttip->SetToolTip(this->p1_22, L"Matrice Calculator");
			this->p1_22->UseVisualStyleBackColor = false;
			// 
			// p1_2
			// 
			this->p1_2->BackColor = System::Drawing::Color::Transparent;
			this->p1_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_2->FlatAppearance->BorderSize = 0;
			this->p1_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_2->ForeColor = System::Drawing::Color::White;
			this->p1_2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_2.Image")));
			this->p1_2->Location = System::Drawing::Point(107, 394);
			this->p1_2->Name = L"p1_2";
			this->p1_2->Size = System::Drawing::Size(103, 78);
			this->p1_2->TabIndex = 316;
			this->ttip->SetToolTip(this->p1_2, L"Area Calculator");
			this->p1_2->UseVisualStyleBackColor = false;
			this->p1_2->Click += gcnew System::EventHandler(this, &baseF::p1_2_Click);
			// 
			// p1_5
			// 
			this->p1_5->BackColor = System::Drawing::Color::Transparent;
			this->p1_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_5->FlatAppearance->BorderSize = 0;
			this->p1_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_5->ForeColor = System::Drawing::Color::White;
			this->p1_5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_5.Image")));
			this->p1_5->Location = System::Drawing::Point(518, 314);
			this->p1_5->Name = L"p1_5";
			this->p1_5->Size = System::Drawing::Size(103, 78);
			this->p1_5->TabIndex = 319;
			this->ttip->SetToolTip(this->p1_5, L"Chord of a Circle Calculator");
			this->p1_5->UseVisualStyleBackColor = false;
			// 
			// p1_4
			// 
			this->p1_4->BackColor = System::Drawing::Color::Transparent;
			this->p1_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_4->FlatAppearance->BorderSize = 0;
			this->p1_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_4->ForeColor = System::Drawing::Color::White;
			this->p1_4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_4.Image")));
			this->p1_4->Location = System::Drawing::Point(518, 393);
			this->p1_4->Name = L"p1_4";
			this->p1_4->Size = System::Drawing::Size(103, 78);
			this->p1_4->TabIndex = 318;
			this->ttip->SetToolTip(this->p1_4, L"Business and Shares Calculator");
			this->p1_4->UseVisualStyleBackColor = false;
			this->p1_4->Click += gcnew System::EventHandler(this, &baseF::p1_4_Click);
			// 
			// p1_3
			// 
			this->p1_3->BackColor = System::Drawing::Color::Transparent;
			this->p1_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_3->FlatAppearance->BorderSize = 0;
			this->p1_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_3->ForeColor = System::Drawing::Color::White;
			this->p1_3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_3.Image")));
			this->p1_3->Location = System::Drawing::Point(418, 394);
			this->p1_3->Name = L"p1_3";
			this->p1_3->Size = System::Drawing::Size(103, 78);
			this->p1_3->TabIndex = 317;
			this->ttip->SetToolTip(this->p1_3, L"Binomial Expressions");
			this->p1_3->UseVisualStyleBackColor = false;
			// 
			// p1_12
			// 
			this->p1_12->BackColor = System::Drawing::Color::Transparent;
			this->p1_12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_12->FlatAppearance->BorderSize = 0;
			this->p1_12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_12->ForeColor = System::Drawing::Color::White;
			this->p1_12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_12.Image")));
			this->p1_12->Location = System::Drawing::Point(210, 239);
			this->p1_12->Name = L"p1_12";
			this->p1_12->Size = System::Drawing::Size(103, 78);
			this->p1_12->TabIndex = 326;
			this->ttip->SetToolTip(this->p1_12, L"Fraction Calculator");
			this->p1_12->UseVisualStyleBackColor = false;
			// 
			// p1_21
			// 
			this->p1_21->BackColor = System::Drawing::Color::Transparent;
			this->p1_21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_21->FlatAppearance->BorderSize = 0;
			this->p1_21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_21->ForeColor = System::Drawing::Color::White;
			this->p1_21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_21.Image")));
			this->p1_21->Location = System::Drawing::Point(3, 395);
			this->p1_21->Name = L"p1_21";
			this->p1_21->Size = System::Drawing::Size(103, 78);
			this->p1_21->TabIndex = 335;
			this->ttip->SetToolTip(this->p1_21, L"Logarithms Calculator");
			this->p1_21->UseVisualStyleBackColor = false;
			// 
			// p1_16
			// 
			this->p1_16->BackColor = System::Drawing::Color::Transparent;
			this->p1_16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_16->FlatAppearance->BorderSize = 0;
			this->p1_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_16->ForeColor = System::Drawing::Color::White;
			this->p1_16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_16.Image")));
			this->p1_16->Location = System::Drawing::Point(107, 319);
			this->p1_16->Name = L"p1_16";
			this->p1_16->Size = System::Drawing::Size(103, 78);
			this->p1_16->TabIndex = 330;
			this->ttip->SetToolTip(this->p1_16, L"Indices and Logarithm Calculator");
			this->p1_16->UseVisualStyleBackColor = false;
			// 
			// p1_15
			// 
			this->p1_15->BackColor = System::Drawing::Color::Transparent;
			this->p1_15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_15->FlatAppearance->BorderSize = 0;
			this->p1_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_15->ForeColor = System::Drawing::Color::White;
			this->p1_15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_15.Image")));
			this->p1_15->Location = System::Drawing::Point(518, 89);
			this->p1_15->Name = L"p1_15";
			this->p1_15->Size = System::Drawing::Size(103, 78);
			this->p1_15->TabIndex = 329;
			this->ttip->SetToolTip(this->p1_15, L"Graph Calculator");
			this->p1_15->UseVisualStyleBackColor = false;
			// 
			// p1_14
			// 
			this->p1_14->BackColor = System::Drawing::Color::Transparent;
			this->p1_14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_14->FlatAppearance->BorderSize = 0;
			this->p1_14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_14->ForeColor = System::Drawing::Color::White;
			this->p1_14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_14.Image")));
			this->p1_14->Location = System::Drawing::Point(518, 239);
			this->p1_14->Name = L"p1_14";
			this->p1_14->Size = System::Drawing::Size(103, 78);
			this->p1_14->TabIndex = 328;
			this->ttip->SetToolTip(this->p1_14, L"Geometric Progression Calculator");
			this->p1_14->UseVisualStyleBackColor = false;
			this->p1_14->Click += gcnew System::EventHandler(this, &baseF::p1_14_Click);
			// 
			// p1_13
			// 
			this->p1_13->BackColor = System::Drawing::Color::Transparent;
			this->p1_13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_13->FlatAppearance->BorderSize = 0;
			this->p1_13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_13->ForeColor = System::Drawing::Color::White;
			this->p1_13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_13.Image")));
			this->p1_13->Location = System::Drawing::Point(314, 315);
			this->p1_13->Name = L"p1_13";
			this->p1_13->Size = System::Drawing::Size(103, 78);
			this->p1_13->TabIndex = 327;
			this->ttip->SetToolTip(this->p1_13, L"Frequency Distribution Calculator");
			this->p1_13->UseVisualStyleBackColor = false;
			// 
			// p1_11
			// 
			this->p1_11->BackColor = System::Drawing::Color::Transparent;
			this->p1_11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_11->FlatAppearance->BorderSize = 0;
			this->p1_11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_11->ForeColor = System::Drawing::Color::White;
			this->p1_11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_11.Image")));
			this->p1_11->Location = System::Drawing::Point(107, 239);
			this->p1_11->Name = L"p1_11";
			this->p1_11->Size = System::Drawing::Size(103, 78);
			this->p1_11->TabIndex = 325;
			this->ttip->SetToolTip(this->p1_11, L"Equi-Angular Calculator");
			this->p1_11->UseVisualStyleBackColor = false;
			// 
			// p1_24
			// 
			this->p1_24->BackColor = System::Drawing::Color::Transparent;
			this->p1_24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_24->FlatAppearance->BorderSize = 0;
			this->p1_24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_24->ForeColor = System::Drawing::Color::White;
			this->p1_24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_24.Image")));
			this->p1_24->Location = System::Drawing::Point(418, 314);
			this->p1_24->Name = L"p1_24";
			this->p1_24->Size = System::Drawing::Size(103, 78);
			this->p1_24->TabIndex = 338;
			this->ttip->SetToolTip(this->p1_24, L"Number Base Calculator");
			this->p1_24->UseVisualStyleBackColor = false;
			// 
			// p1_23
			// 
			this->p1_23->BackColor = System::Drawing::Color::Transparent;
			this->p1_23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_23->FlatAppearance->BorderSize = 0;
			this->p1_23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_23->ForeColor = System::Drawing::Color::White;
			this->p1_23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_23.Image")));
			this->p1_23->Location = System::Drawing::Point(314, 395);
			this->p1_23->Name = L"p1_23";
			this->p1_23->Size = System::Drawing::Size(103, 78);
			this->p1_23->TabIndex = 337;
			this->ttip->SetToolTip(this->p1_23, L"Mid Point Theorem Calculator");
			this->p1_23->UseVisualStyleBackColor = false;
			// 
			// p1_20
			// 
			this->p1_20->BackColor = System::Drawing::Color::Transparent;
			this->p1_20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_20->FlatAppearance->BorderSize = 0;
			this->p1_20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_20->ForeColor = System::Drawing::Color::White;
			this->p1_20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_20.Image")));
			this->p1_20->Location = System::Drawing::Point(518, 165);
			this->p1_20->Name = L"p1_20";
			this->p1_20->Size = System::Drawing::Size(103, 78);
			this->p1_20->TabIndex = 334;
			this->ttip->SetToolTip(this->p1_20, L"LCM Calculator");
			this->p1_20->UseVisualStyleBackColor = false;
			// 
			// p1_19
			// 
			this->p1_19->BackColor = System::Drawing::Color::Transparent;
			this->p1_19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_19->FlatAppearance->BorderSize = 0;
			this->p1_19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_19->ForeColor = System::Drawing::Color::White;
			this->p1_19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_19.Image")));
			this->p1_19->Location = System::Drawing::Point(418, 239);
			this->p1_19->Name = L"p1_19";
			this->p1_19->Size = System::Drawing::Size(103, 78);
			this->p1_19->TabIndex = 333;
			this->ttip->SetToolTip(this->p1_19, L"Representation Data Calculator");
			this->p1_19->UseVisualStyleBackColor = false;
			// 
			// p1_18
			// 
			this->p1_18->BackColor = System::Drawing::Color::Transparent;
			this->p1_18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_18->FlatAppearance->BorderSize = 0;
			this->p1_18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_18->ForeColor = System::Drawing::Color::White;
			this->p1_18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_18.Image")));
			this->p1_18->Location = System::Drawing::Point(314, 239);
			this->p1_18->Name = L"p1_18";
			this->p1_18->Size = System::Drawing::Size(103, 78);
			this->p1_18->TabIndex = 332;
			this->ttip->SetToolTip(this->p1_18, L"Algebraic Inequality Calculator");
			this->p1_18->UseVisualStyleBackColor = false;
			// 
			// p1_1
			// 
			this->p1_1->BackColor = System::Drawing::Color::Transparent;
			this->p1_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_1->FlatAppearance->BorderSize = 0;
			this->p1_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_1->ForeColor = System::Drawing::Color::White;
			this->p1_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_1.Image")));
			this->p1_1->Location = System::Drawing::Point(3, 315);
			this->p1_1->Name = L"p1_1";
			this->p1_1->Size = System::Drawing::Size(103, 78);
			this->p1_1->TabIndex = 315;
			this->ttip->SetToolTip(this->p1_1, L"Arithmatic Progression Calculator");
			this->p1_1->UseVisualStyleBackColor = false;
			this->p1_1->Click += gcnew System::EventHandler(this, &baseF::p1_1_Click);
			// 
			// p1_10
			// 
			this->p1_10->BackColor = System::Drawing::Color::Transparent;
			this->p1_10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->p1_10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p1_10->FlatAppearance->BorderSize = 0;
			this->p1_10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->p1_10->ForeColor = System::Drawing::Color::White;
			this->p1_10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p1_10.Image")));
			this->p1_10->Location = System::Drawing::Point(518, 9);
			this->p1_10->Name = L"p1_10";
			this->p1_10->Size = System::Drawing::Size(103, 78);
			this->p1_10->TabIndex = 324;
			this->ttip->SetToolTip(this->p1_10, L"Cylinder Calculator");
			this->p1_10->UseVisualStyleBackColor = false;
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
			this->ClientSize = System::Drawing::Size(626, 486);
			this->Controls->Add(this->p1_17);
			this->Controls->Add(this->p1_22);
			this->Controls->Add(this->p1_2);
			this->Controls->Add(this->p1_5);
			this->Controls->Add(this->p1_4);
			this->Controls->Add(this->p1_3);
			this->Controls->Add(this->p1_12);
			this->Controls->Add(this->p1_21);
			this->Controls->Add(this->p1_16);
			this->Controls->Add(this->p1_15);
			this->Controls->Add(this->p1_14);
			this->Controls->Add(this->p1_13);
			this->Controls->Add(this->p1_11);
			this->Controls->Add(this->p1_24);
			this->Controls->Add(this->p1_23);
			this->Controls->Add(this->p1_20);
			this->Controls->Add(this->p1_19);
			this->Controls->Add(this->p1_18);
			this->Controls->Add(this->p1_1);
			this->Controls->Add(this->p1_10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"baseF";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MOLE Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void p1_2_Click(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void p1_1_Click(System::Object^  sender, System::EventArgs^  e) {
			 apCal a;
			 a.ShowDialog();
		 }
private: System::Void p1_14_Click(System::Object^  sender, System::EventArgs^  e) {
			 gpCal g;
			 g.ShowDialog();
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 percen p;
			 p.ShowDialog();
		 }
private: System::Void p1_4_Click(System::Object^  sender, System::EventArgs^  e) {
			 bis bb;
			 bb.ShowDialog();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 pyth py;
			 py.ShowDialog();
		 }
};
}
