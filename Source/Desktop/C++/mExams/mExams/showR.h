#pragma once
namespace mExams {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for showR
	/// </summary>
	public ref class showR : public System::Windows::Forms::Form
	{
	public:
		int tot;
		void setData(){
			tot=System::Convert::ToInt16(score->Text);
			if(tot<40){
				desc->Text="Bad";
			}else if(tot>=40 && tot<60){
				desc->Text="Not Bad1";
			}else if(tot>60 && tot<75){
				desc->Text="Not Bad2";
			}else if(tot>75){
				desc->Text="Not Bad3";
			}
		}
		showR(void){
			InitializeComponent();
			setData();
		}

	protected:
		~showR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  start;
	protected: 
	internal: System::Windows::Forms::Label^  ename;
	private: 
	internal: System::Windows::Forms::Label^  caln;
	internal: System::Windows::Forms::Label^  ssss;
	private: System::Windows::Forms::Panel^  panel1;
	internal: 

	private: 
	internal: System::Windows::Forms::Label^  score;
	private: System::Windows::Forms::Label^  desc;
	internal: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(showR::typeid));
			this->start = (gcnew System::Windows::Forms::Button());
			this->ename = (gcnew System::Windows::Forms::Label());
			this->caln = (gcnew System::Windows::Forms::Label());
			this->ssss = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->score = (gcnew System::Windows::Forms::Label());
			this->desc = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->BackColor = System::Drawing::Color::Transparent;
			this->start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->start->Cursor = System::Windows::Forms::Cursors::Hand;
			this->start->FlatAppearance->BorderSize = 0;
			this->start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->start->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->start->ForeColor = System::Drawing::Color::White;
			this->start->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"start.Image")));
			this->start->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->start->Location = System::Drawing::Point(111, 114);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(103, 32);
			this->start->TabIndex = 364;
			this->start->Text = L"Okay";
			this->start->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->start->UseVisualStyleBackColor = false;
			this->start->Click += gcnew System::EventHandler(this, &showR::start_Click);
			// 
			// ename
			// 
			this->ename->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ename->Dock = System::Windows::Forms::DockStyle::Top;
			this->ename->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ename->ForeColor = System::Drawing::Color::Black;
			this->ename->Location = System::Drawing::Point(0, 23);
			this->ename->Name = L"ename";
			this->ename->Size = System::Drawing::Size(479, 35);
			this->ename->TabIndex = 362;
			this->ename->Text = L"Ar";
			this->ename->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// caln
			// 
			this->caln->BackColor = System::Drawing::Color::DarkSlateGray;
			this->caln->Dock = System::Windows::Forms::DockStyle::Top;
			this->caln->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->caln->ForeColor = System::Drawing::Color::White;
			this->caln->Location = System::Drawing::Point(0, 0);
			this->caln->Name = L"caln";
			this->caln->Size = System::Drawing::Size(479, 23);
			this->caln->TabIndex = 363;
			this->caln->Text = L"Your Examination Progress";
			this->caln->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ssss
			// 
			this->ssss->BackColor = System::Drawing::Color::Gold;
			this->ssss->Dock = System::Windows::Forms::DockStyle::Top;
			this->ssss->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ssss->ForeColor = System::Drawing::Color::White;
			this->ssss->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ssss.Image")));
			this->ssss->Location = System::Drawing::Point(0, 0);
			this->ssss->Name = L"ssss";
			this->ssss->Size = System::Drawing::Size(120, 35);
			this->ssss->TabIndex = 358;
			this->ssss->Text = L"You Scored";
			this->ssss->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->ssss);
			this->panel1->Controls->Add(this->score);
			this->panel1->ForeColor = System::Drawing::Color::Gold;
			this->panel1->Location = System::Drawing::Point(358, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(120, 98);
			this->panel1->TabIndex = 365;
			// 
			// score
			// 
			this->score->BackColor = System::Drawing::Color::SkyBlue;
			this->score->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->score->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->score->ForeColor = System::Drawing::Color::Black;
			this->score->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"score.Image")));
			this->score->Location = System::Drawing::Point(0, 35);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(120, 63);
			this->score->TabIndex = 359;
			this->score->Text = L"1";
			this->score->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// desc
			// 
			this->desc->BackColor = System::Drawing::Color::Transparent;
			this->desc->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->desc->Location = System::Drawing::Point(5, 62);
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(348, 49);
			this->desc->TabIndex = 366;
			this->desc->Text = L"Son you have to work  alittle more";
			// 
			// showR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(479, 153);
			this->ControlBox = false;
			this->Controls->Add(this->start);
			this->Controls->Add(this->ename);
			this->Controls->Add(this->caln);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->desc);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"showR";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"showR";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &showR::showR_FormClosing);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		void showD(String^ a , String^ b){
			StreamWriter^ sw = gcnew StreamWriter(Application::ExecutablePath->Replace("mExams.exe","config.ms"));
			sw->WriteLine("ETYPE = "+a);
			sw->WriteLine("FILE = user//"+b);		
			sw->Close();
			System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("mExams.exe","mCore.exe"))->WaitForExit();
		}
	private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					showD("ED","examdone.ms");
					System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("mExams.exe","mSender.jar"))->WaitForExit();
					showD("E","log.ms");
					Application::Restart();
				 }catch (System::Exception^ e){
					MessageBox::Show("We Encountered a Problem. " + e->Message + " Try reinstalling the Application");
					Application::Exit();
				 } 
			 }
private: System::Void showR_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 
		 }
};
}
