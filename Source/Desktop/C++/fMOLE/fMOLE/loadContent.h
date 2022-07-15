#pragma once

namespace fMOLE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loadContent
	/// </summary>
	public ref class loadContent : public System::Windows::Forms::Form
	{
	public:
		loadContent(void)
		{
			InitializeComponent();
			tim->Enabled=true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loadContent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  showM;
	private: System::Windows::Forms::Timer^  tim;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(loadContent::typeid));
			this->showM = (gcnew System::Windows::Forms::Label());
			this->tim = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// showM
			// 
			this->showM->BackColor = System::Drawing::Color::Transparent;
			this->showM->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->showM->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->showM->ForeColor = System::Drawing::Color::White;
			this->showM->Location = System::Drawing::Point(-1, 0);
			this->showM->Name = L"showM";
			this->showM->Size = System::Drawing::Size(511, 37);
			this->showM->TabIndex = 1;
			this->showM->Text = L"Please Wait Loading Your Friend Information";
			this->showM->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tim
			// 
			this->tim->Tick += gcnew System::EventHandler(this, &loadContent::tim_Tick);
			// 
			// loadContent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(511, 37);
			this->ControlBox = false;
			this->Controls->Add(this->showM);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loadContent";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void tim_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(showM->Text->Contains("....")){
					showM->Text=showM->Text->Replace("....","");
				 }
				 showM->Text=showM->Text +".";
			 }
	};

}
