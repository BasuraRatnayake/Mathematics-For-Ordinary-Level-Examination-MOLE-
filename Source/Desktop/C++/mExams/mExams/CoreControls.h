//Never Change anything below for any reason. - Basura
#pragma once
#include "showR.h"
namespace mExams {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Core{
	private:
		Form^ f;
		Panel^ botP, ^topP,^topP1;
		Label^ botP_L, ^topP1_L, ^topP2_L, ^topP3_L, ^topP4_L, ^topP1_1;
		Button^ botP_B, ^topP_B,^topB1_1,^topB1_2;
		int count; //Total Time
		int h,m,s; //Timer Variables	
		String^ path, ^name, ^sName;
		Timer^ tim;
	public:
		array< RadioButton^ >^ aSet;
	
		int total; //Total Marks
		void showD(String^ a , String^ b){
			StreamWriter^ sw = gcnew StreamWriter(path->Replace("mExams.exe","config.ms"));
			sw->WriteLine("ETYPE = "+a);
			sw->WriteLine("FILE = user//"+b);		
			sw->Close();
			System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("mExams.exe","mCore.exe"))->WaitForExit();
		}
		Core(String^ a, Form^ b, String^ c){
			try{
				aSet= gcnew array< RadioButton^ >(10);
				path=Application::ExecutablePath;
				showD("D","exams.ms");
				f=b;
				name=a;
				sName=c;
				createControls();
				readEData();
				showD("E","exams.ms");
			}catch(Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + " Try reinstalling the Application");
			}
			
		}
		~Core(){}
	
		void createControls(){
			f->BackgroundImage=System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\bacm.mi"));
			f->Text=name;
			//Timer - Start
			tim = (gcnew System::Windows::Forms::Timer);
			tim->Interval = 1000;
			tim->Enabled=false;
			tim->Tick += gcnew System::EventHandler(this, &Core::tim_Tick);
			//Timer - End

			//Bottom Panel - Start
			botP_L=(gcnew System::Windows::Forms::Label());
			botP_L->BackColor = System::Drawing::Color::Transparent;
			botP_L->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			botP_L->ForeColor = System::Drawing::Color::Black;
			botP_L->Location = System::Drawing::Point(11, 12);
			botP_L->Name = L"botP_L";
			botP_L->Size = System::Drawing::Size(348, 15);
			botP_L->TabIndex = 29;
			botP_L->Text = L"Always try, never leave any question unanswered";

			botP_B=(gcnew System::Windows::Forms::Button());
			botP_B->BackColor = System::Drawing::Color::Transparent;
			botP_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			botP_B->Cursor = System::Windows::Forms::Cursors::Hand;
			botP_B->Dock = System::Windows::Forms::DockStyle::Right;
			botP_B->FlatAppearance->BorderSize = 0;
			botP_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			botP_B->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			botP_B->ForeColor = System::Drawing::Color::White;
			botP_B->Image = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\buttonback.mi"));
			botP_B->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			botP_B->Location = System::Drawing::Point(509, 0);
			botP_B->Name = L"button1";
			botP_B->Size = System::Drawing::Size(112, 40);
			botP_B->TabIndex = 357;
			botP_B->Text = L"Hand Over Exam Paper";
			botP_B->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			botP_B->UseVisualStyleBackColor = false;
			botP_B->Click += gcnew System::EventHandler(this, &Core::botP_B_Click);

			botP=(gcnew System::Windows::Forms::Panel());
			botP->BackColor = System::Drawing::Color::Black;
			botP->BackgroundImage = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\bacm1.mi"));
			botP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			botP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			botP->Controls->Add(botP_B);
			botP->Controls->Add(botP_L);
			botP->Dock = System::Windows::Forms::DockStyle::Bottom;
			botP->Location = System::Drawing::Point(0, 405);
			botP->Name = L"botP";
			botP->Size = System::Drawing::Size(623, 42);
			botP->TabIndex = 7;
			botP->Visible = false;
			f->Controls->Add(botP);
			//Bottom Panel - End

			//Top Panel - Start
			topP1_L= (gcnew System::Windows::Forms::Label());
			topP1_L->BackColor = System::Drawing::Color::Transparent;
			topP1_L->Dock = System::Windows::Forms::DockStyle::Top;
			topP1_L->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topP1_L->Location = System::Drawing::Point(0, 0);
			topP1_L->Name = "topP1_L";
			topP1_L->Size = System::Drawing::Size(514, 35);
			topP1_L->TabIndex = 1;
			topP1_L->Text = name;
			topP1_L->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			
			topP2_L= (gcnew System::Windows::Forms::Label());
			topP2_L->BackColor = System::Drawing::Color::Teal;
			topP2_L->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topP2_L->ForeColor = System::Drawing::Color::White;
			topP2_L->Location = System::Drawing::Point(0, 35);
			topP2_L->Name = L"topP2_L";
			topP2_L->Size = System::Drawing::Size(414, 23);
			topP2_L->TabIndex = 2;
			topP2_L->Text = "Your Examination Progress";
			topP2_L->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			topP3_L = (gcnew System::Windows::Forms::Label());
			topP3_L->BackColor = System::Drawing::Color::Gold;
			topP3_L->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topP3_L->Location = System::Drawing::Point(0, 59);
			topP3_L->Name = L"topP3_L";
			topP3_L->Size = System::Drawing::Size(414, 25);
			topP3_L->TabIndex = 3;
			topP3_L->Text = L"Current Exam Progress = 100                  Last Exam Progress = 100";
			topP3_L->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			
			
			topP4_L = (gcnew System::Windows::Forms::Label());
			topP4_L->BackColor = System::Drawing::Color::Maroon;
			topP4_L->Dock = System::Windows::Forms::DockStyle::Right;
			topP4_L->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topP4_L->ForeColor = System::Drawing::Color::White;
			topP4_L->Location = System::Drawing::Point(408, 35);
			topP4_L->Name = L"topP4_L";
			topP4_L->Size = System::Drawing::Size(106, 47);
			topP4_L->TabIndex = 358;
			topP4_L->Text = "Time: 0:30:00";
			topP4_L->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			topP4_L->BringToFront();
			f->Controls->Add(topP4_L);
			

			topP_B = (gcnew System::Windows::Forms::Button());
			topP_B->BackColor = System::Drawing::Color::Transparent;
			topP_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			topP_B->Cursor = System::Windows::Forms::Cursors::Hand;
			topP_B->Dock = System::Windows::Forms::DockStyle::Right;
			topP_B->FlatAppearance->BorderSize = 0;
			topP_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			topP_B->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topP_B->ForeColor = System::Drawing::Color::White;
			topP_B->Image = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\buttonback1.mi"));
			topP_B->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			topP_B->Location = System::Drawing::Point(514, 0);
			topP_B->Name = L"topP_B";
			topP_B->Size = System::Drawing::Size(103, 82);
			topP_B->TabIndex = 356;
			topP_B->Text = "Start Examination";
			topP_B->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			topP_B->UseVisualStyleBackColor = false;
			topP_B->Click += gcnew System::EventHandler(this, &Core::topP_B_Click);
			

			topP = (gcnew System::Windows::Forms::Panel());
			topP->BackColor = System::Drawing::Color::DodgerBlue;
			topP->BackgroundImage = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\bacm1.mi"));
			topP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			topP->Controls->Add(topP1_L);
			topP->Controls->Add(topP4_L);
			topP->Controls->Add(topP2_L);
			
			topP->Controls->Add(topP3_L);
			topP->Controls->Add(topP_B);	
			topP->Location = System::Drawing::Point(0, 0);
			topP->Name = L"topP";
			topP->Size = System::Drawing::Size(617, 82);
			topP->TabIndex = 6;
			f->Controls->Add(topP);

			
			topP1_1 = (gcnew System::Windows::Forms::Label());
			topP1_1->BackColor = System::Drawing::Color::DarkSlateGray;
			topP1_1->Dock = System::Windows::Forms::DockStyle::Top;
			topP1_1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			topP1_1->ForeColor = System::Drawing::Color::White;
			topP1_1->Location = System::Drawing::Point(0, 0);
			topP1_1->Name = L"topP1_1";
			topP1_1->Size = System::Drawing::Size(291, 40);
			topP1_1->TabIndex = 12;
			topP1_1->Text = L"Once the examination started you cannot quit, Are you ready to start the examinat" 
				L"ion\?";
			topP1_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			topB1_1 = (gcnew System::Windows::Forms::Button());
			topB1_1->BackgroundImage = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\bacm1.mi"));
			topB1_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			topB1_1->Cursor = System::Windows::Forms::Cursors::Hand;
			topB1_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			topB1_1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			topB1_1->ForeColor = System::Drawing::Color::White;
			topB1_1->Location = System::Drawing::Point(31, 45);
			topB1_1->Name = L"topB1_1";
			topB1_1->Size = System::Drawing::Size(143, 23);
			topB1_1->TabIndex = 14;
			topB1_1->Text = L"YES";
			topB1_1->UseVisualStyleBackColor = true;
			topB1_1->Click += gcnew System::EventHandler(this, &Core::topB1_1_Click);

			topB1_2 = (gcnew System::Windows::Forms::Button());
			topB1_2->BackColor = System::Drawing::Color::Maroon;
			topB1_2->Cursor = System::Windows::Forms::Cursors::Hand;
			topB1_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			topB1_2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			topB1_2->ForeColor = System::Drawing::Color::White;
			topB1_2->Location = System::Drawing::Point(180, 45);
			topB1_2->Name = L"topB1_2";
			topB1_2->Size = System::Drawing::Size(143, 23);
			topB1_2->TabIndex = 13;
			topB1_2->Text = L"NO";
			topB1_2->UseVisualStyleBackColor = false;
			topB1_2->Click += gcnew System::EventHandler(this, &Core::topB1_2_Click);
			
			topP1 = (gcnew System::Windows::Forms::Panel());
			topP1->BackgroundImage = System::Drawing::Image::FromFile(path->Replace("mExams.exe","core\\bacm1.mi"));
			topP1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			topP1->Controls->Add(topB1_1);
			topP1->Controls->Add(topB1_2);
			topP1->Controls->Add(topP1_1);
			topP1->Location = System::Drawing::Point(280, 4);
			topP1->Name = L"topP1";
			topP1->Size = System::Drawing::Size(113, 79);
			topP1->TabIndex = 9;
			topP1->Visible = false;
			f->Controls->Add(topP1);
			//Top Panel - End
		}
		Void topB1_2_Click(System::Object^  sender, System::EventArgs^  e) {
			 topP1->Visible=false;
		 }
		Void topB1_1_Click(System::Object^  sender, System::EventArgs^  e) {
			showExam();
		 }
		Void topP_B_Click(System::Object^  sender, System::EventArgs^  e) {
			 topP1->Visible = true;
			 topP1->Location=System::Drawing::Point(152,4);
			 topP1->Size=System::Drawing::Size(357,79);
			 topP1->BringToFront();
		 }
		Void tim_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timFun();
		 }

		Void botP_B_Click(System::Object^  sender, System::EventArgs^  e) {
			checkAnswer();
			showR srr;
			srr.ename->Text=name;
			srr.score->Text=System::Convert::ToString(total);
			srr.ShowDialog();
		}

		void readEData(){
			 try{
				 f->Size=System::Drawing::Size(633, 125);
				 StreamReader^ sr = gcnew StreamReader(path->Replace("mExams.exe","user\\exams.ms"));
				 int te= System::Convert::ToInt16(sr->ReadLine()->Substring(5));
				 String^ readF;
				 int cm=500,lm=500;
				 sr->ReadLine();
				 while(!sr->EndOfStream){
					readF = sr->ReadLine();
					if(readF->StartsWith("Name")){
						if(sName == readF->Substring(7)){
							cm = System::Convert::ToInt16(sr->ReadLine()->Substring(8));
							lm = System::Convert::ToInt16(sr->ReadLine()->Substring(8));
						}
					}
					te--;
				}
				if(cm==500){
					cm=0;
					lm=0;
				}
				topP3_L->Text="Current Exam Progress = "+cm+"                  "+"Last Exam Progress = "+lm;
				sr->Close();
			 }catch (System::Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + " Try reinstalling the Application");
			 } 
	}
		void timFun(){
			 if(count == 900000){
				 botP->Visible=true;
				 f->Height=f->Height+botP->Height;
			 }
			 s--;
			 if(s==0){
				 s=59;
				 m--;
			 }
			 if(m==0){
				 tim->Enabled=false;
			 }
			 count+=1000;
			 topP4_L->Text=h+":"+m+":"+s;
	}
		void showExam(){
			f->Size=System::Drawing::Size(629, 510); 
			f->Height=f->Height-botP->Height;
			topP_B->Text="Exam in Progress";
			topP_B->Enabled=false;
			topP1->Visible=false;
			f->ControlBox=false;
			tim->Enabled=true;
			count=1000;
			h=0;
			m=30;
			s=59;
	}
		void checkAnswer(){
			 if(aSet[0]->Checked){
				 total+=10;
			 }
			 if(aSet[1]->Checked){
				 total+=10;
			 }
			 if(aSet[2]->Checked){
				 total+=10;
			 }
			 if(aSet[3]->Checked){
				 total+=10;
			 }
			 if(aSet[4]->Checked){
				 total+=10;
			 }
			 if(aSet[5]->Checked){
				 total+=10;
			 }
			 if(aSet[6]->Checked){
				 total+=10;
			 }
			 if(aSet[7]->Checked){
				 total+=10;
			 }
			 if(aSet[8]->Checked){
				 total+=10;
			 }
			 if(aSet[9]->Checked){
				 total+=10;
			 }
			if(total>=40){
				WriteExam2File(sName, System::Convert::ToString(total), "P");
			}else{
				WriteExam2File(sName, System::Convert::ToString(total), "F");
			}
			showD("E","examdone.ms");
		 }
		void WriteExam2File(String^ a, String^ b, String^ c){
			try{
				//a - Exam Name
				//b - Mark
				//c - Status(P/F)
				if(!IO::File::Exists(path->Replace("mExams.exe","user\\examdone.ms"))){
					IO::File::WriteAllText(path->Replace("mExams.exe","user\\examdone.ms"),"PA pu pa aa ee bas13 E pu aae ruu pa bas13 Bas bas13 ma "+Environment::NewLine+Environment::NewLine+Environment::NewLine+Environment::NewLine);
				}
				showD("D","examdone.ms");
				TextBox^ baseText = (gcnew System::Windows::Forms::TextBox());
				baseText->Visible=false;
				baseText->Text="";
				StreamReader^ sr1 = gcnew StreamReader( path->Replace("mExams.exe","user\\examdone.ms"));
				int count = System::Convert::ToInt16(sr1->ReadLine()->Substring(13)) +1;
				baseText->Text = "Total Count = "+ System::Convert::ToString(count);
				while(!sr1->EndOfStream){
					if(sr1->ReadLine() != ""){
						baseText->Text=baseText->Text+Environment::NewLine+sr1->ReadLine();
					}					
					count--;
				}
				sr1->Close();
				baseText->Text=baseText->Text+Environment::NewLine+"Name = "+a+Environment::NewLine;
				baseText->Text=baseText->Text+"Mark = "+b+Environment::NewLine;
				baseText->Text=baseText->Text+"Status = "+c;
				StreamWriter^ sw = gcnew StreamWriter( path->Replace("mExams.exe","user\\examdone.ms"));
				sw->WriteLine(baseText->Text);
				sw->Close();
				}catch (System::Exception^ e){
					MessageBox::Show("We Encountered a Problem. " + e->Message + " Try reinstalling the Application");
				} 
		}
	};
}