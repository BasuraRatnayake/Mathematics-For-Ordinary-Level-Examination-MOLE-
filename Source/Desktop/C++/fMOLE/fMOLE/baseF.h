#pragma once
#include "searchR.h"
#include "loadContent.h"

namespace fMOLE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for baseF
	/// </summary>
	public ref class baseF : public System::Windows::Forms::Form
	{
	public:
		String^ path;
		
		
	private: System::Windows::Forms::PictureBox^  o1;
	public: 
		array< Panel^ >^ pSet;
		array< PictureBox^ >^ picSet;
		array< PictureBox^ >^ onlSet;
		array< PictureBox^ >^ remSet;
	private: System::Windows::Forms::Panel^  reqPanel;
	private: System::Windows::Forms::Panel^  req3;
	public: 

	private: System::Windows::Forms::Label^  reqs3;

	private: System::Windows::Forms::Label^  requ3;
	private: System::Windows::Forms::PictureBox^  reqi3;




	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Panel^  req2;

	private: System::Windows::Forms::Label^  reqs2;

	private: System::Windows::Forms::Label^  requ2;
	private: System::Windows::Forms::PictureBox^  reqi2;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  req1;

	private: System::Windows::Forms::Label^  reqs1;

	private: System::Windows::Forms::Label^  requ1;
	private: System::Windows::Forms::PictureBox^  reqi1;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  reqNo;

	private: System::Windows::Forms::Panel^  req4;

	private: System::Windows::Forms::Label^  reqs4;

	private: System::Windows::Forms::Label^  requ4;
	private: System::Windows::Forms::PictureBox^  reqi4;


	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Panel^  req5;

	private: System::Windows::Forms::Label^  reqs5;

	private: System::Windows::Forms::Label^  requ5;
	private: System::Windows::Forms::PictureBox^  reqi5;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  reqP;
	private: System::Windows::Forms::Timer^  tim;


	public: 











































	public: 
		array< Label^ >^ labSet;
		void setPanels(){
			int showR,showC;
				setSearch(2, searchT->Text);
				//Panels
				pSet= gcnew array< Panel^ >(10);
				pSet[0]=f1;pSet[1]=f2;pSet[2]=f3;pSet[3]=f4;
				pSet[4]=f5;pSet[5]=f6;pSet[6]=f7;pSet[7]=f8;
				pSet[8]=f9;pSet[9]=f10;
				//Pictures
				picSet= gcnew array< PictureBox^ >(10);
				picSet[0]=p1;picSet[1]=p2;picSet[2]=p3;picSet[3]=p4;
				picSet[4]=p5;picSet[5]=p6;picSet[6]=p7;picSet[7]=p8;
				picSet[8]=p9;picSet[9]=p10;

				onlSet= gcnew array< PictureBox^ >(10);
				onlSet[0]=o1;onlSet[1]=o2;onlSet[2]=o3;onlSet[3]=o4;
				onlSet[4]=o5;onlSet[5]=o6;onlSet[6]=o7;onlSet[7]=o8;
				onlSet[8]=o9;onlSet[9]=o10;

				remSet= gcnew array< PictureBox^ >(10);
				remSet[0]=r1;remSet[1]=r2;remSet[2]=r3;remSet[3]=r4;
				remSet[4]=r5;remSet[5]=r6;remSet[6]=r7;remSet[7]=r8;
				remSet[8]=r9;remSet[9]=r10;
				//Labels
				labSet= gcnew array< Label^ >(10);
				labSet[0]=n1;labSet[1]=n2;labSet[2]=n3;labSet[3]=n4;
				labSet[4]=n5;labSet[5]=n6;labSet[6]=n7;labSet[7]=n8;
				labSet[8]=n9;labSet[9]=n10;

				StreamReader^ sr = gcnew StreamReader(Application::ExecutablePath->Replace("fMOLE.exe","user\\tFriends.ms"));
				int cf= System::Convert::ToInt16(sr->ReadLine()->Substring(5));
				int ucf = System::Convert::ToInt16(sr->ReadLine()->Substring(6));
				int count = cf+ucf;
				String^ result1,^result2,^result3;
				showC=cf-1;
				showR = ucf;
				if(showR >5){
					showR = 5;
				}
				reqNo->Text = "You have "+showR+ " Friend Request(s)";
				while(count != 0){
					result1=sr->ReadLine();
					result2=sr->ReadLine();
					result3=sr->ReadLine()->Substring(6);
					if(result1->StartsWith("FUser")){
						if(result2->Equals("Confirm = Y")){
							labSet[showC]->Text = result1->Substring(8);
							labSet[showC]->Visible=true;
							remSet[showC]->Visible=true;
							try{
								picSet[showC]->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+labSet[showC]->Text));
							}catch(Exception^ e){
								picSet[showC]->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
							}							
							picSet[showC]->Visible=true;
							if(result3 == "Y"){
								onlSet[showC]->BackColor=System::Drawing::Color::Green;
							}else{
								onlSet[showC]->BackColor=System::Drawing::Color::Maroon;
							}
							showC--;
						}else{
							tim->Enabled=true;
							x=2;
							reqP->Visible=true;
							if(showR == 1){
								req1->Visible=true;
								requ1->Text = result1->Substring(8);
								try{
									reqi1->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+result1->Substring(8)));
								}catch(Exception^ e){
									reqi1->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
								}
							}else if(showR == 2){
								req2->Visible=true;
								requ2->Text = result1->Substring(8);
								try{
									reqi2->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+result1->Substring(8)));
								}catch(Exception^ e){
									reqi2->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
								}
							}else if(showR ==3){
								req3->Visible=true;
								requ3->Text = result1->Substring(8);
								try{
									reqi3->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+result1->Substring(8)));
								}catch(Exception^ e){
									reqi3->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
								}
							}else if(showR == 4){
								req4->Visible=true;
								requ4->Text = result1->Substring(8);
								try{
									reqi4->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+result1->Substring(8)));
								}catch(Exception^ e){
									reqi4->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
								}
							}else if(showR == 5){
								req5->Visible=true;
								requ5->Text = result1->Substring(8);
								try{
									reqi5->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","user\\friends\\"+result1->Substring(8)));
								}catch(Exception^ e){
									reqi5->BackgroundImage=System::Drawing::Image::FromFile(Application::ExecutablePath->Replace("fMOLE.exe","core\\female.mi"));
								}
							}
							showR--;
						}
					}
					count--;
				}
				setPImage(cf);
				sr->Close();
		}
		void funCreate(int a, String^ b, String^ c){
			StreamWriter^ sw = gcnew StreamWriter( Application::ExecutablePath->Replace("fMOLE.exe","user\\mFriend.ms"));
			sw->WriteLine("FUser = "+b);
			sw->WriteLine("AddU = "+a);
			sw->WriteLine("Fun = "+c);
			sw->Close();
		}
		void addF(String^ u){
			try{
				funCreate(3, u, "A");
				System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
				setSearch(2, searchT->Text);
				System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
				Application::Restart();
			}catch(Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
			}
		}
		void removeF(String^ u){
			try{
				funCreate(3, u, "R");
				System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
				setSearch(2, searchT->Text);
				System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
				Application::Restart();
			}catch(Exception^ e){
				MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
			}
		}
		void setPImage(int i){
			for(int a=i; a<pSet->Length;a++){
					pSet[a]->BackgroundImage=System::Drawing::Image::FromFile(path+"nofriends.mi");
				}
		}
		int x;
		baseF(void)
		{
			InitializeComponent();
			try{
				loadContent lc;
				lc.Show();
				StreamReader^ details = gcnew StreamReader(Application::ExecutablePath->Replace("fMOLE.exe","user\\details.ms"));
				String^ fname=details->ReadLine()->Substring(8);
				String^ lname=details->ReadLine()->Substring(7);
				this->Text=fname + " " + lname +"'s Friends";
				details->Close();
				
				path = Application::ExecutablePath->Replace("fMOLE.exe","core\\");
				setPanels();
				System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
				lc.Close();
			}catch(Exception^ e){
					MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
					this->Close();
			}			
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
	private: System::Windows::Forms::Panel^  panel1;
	protected: 


	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::TextBox^  searchT;

	private: System::Windows::Forms::ToolTip^  ttip;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  f1;
	private: System::Windows::Forms::Panel^  f4;


	private: System::Windows::Forms::Panel^  f3;

	private: System::Windows::Forms::Panel^  f2;
	private: System::Windows::Forms::Panel^  f7;


	private: System::Windows::Forms::Panel^  f6;
	private: System::Windows::Forms::Panel^  f8;
	private: System::Windows::Forms::Panel^  f10;



	private: System::Windows::Forms::Panel^  f9;

	private: System::Windows::Forms::Panel^  f5;
	private: System::Windows::Forms::PictureBox^  r2;

	private: System::Windows::Forms::LinkLabel^  n2;

	private: System::Windows::Forms::PictureBox^  p2;
	private: System::Windows::Forms::LinkLabel^  n7;


	private: System::Windows::Forms::PictureBox^  p7;
	private: System::Windows::Forms::PictureBox^  r7;
private: System::Windows::Forms::LinkLabel^  n6;




	private: System::Windows::Forms::PictureBox^  p6;
	private: System::Windows::Forms::PictureBox^  r6;


	private: System::Windows::Forms::LinkLabel^  n8;


	private: System::Windows::Forms::PictureBox^  r8;



	private: System::Windows::Forms::LinkLabel^  n9;

	private: System::Windows::Forms::PictureBox^  p9;
	private: System::Windows::Forms::PictureBox^  r9;


	private: System::Windows::Forms::LinkLabel^  n5;

	private: System::Windows::Forms::PictureBox^  p5;
	private: System::Windows::Forms::PictureBox^  r5;


	private: System::Windows::Forms::LinkLabel^  n4;

	private: System::Windows::Forms::PictureBox^  p4;
	private: System::Windows::Forms::PictureBox^  r4;


	private: System::Windows::Forms::LinkLabel^  n3;

	private: System::Windows::Forms::PictureBox^  p3;
	private: System::Windows::Forms::PictureBox^  r3;


	private: System::Windows::Forms::LinkLabel^  n1;

	private: System::Windows::Forms::PictureBox^  p1;
	private: System::Windows::Forms::PictureBox^  r1;



	private: System::Windows::Forms::LinkLabel^  n10;

	private: System::Windows::Forms::PictureBox^  p10;
private: System::Windows::Forms::PictureBox^  r10;
private: System::Windows::Forms::PictureBox^  o2;
private: System::Windows::Forms::PictureBox^  o10;



private: System::Windows::Forms::PictureBox^  o9;

private: System::Windows::Forms::PictureBox^  o8;

private: System::Windows::Forms::PictureBox^  o7;

private: System::Windows::Forms::PictureBox^  o6;

private: System::Windows::Forms::PictureBox^  o5;

private: System::Windows::Forms::PictureBox^  o4;

private: System::Windows::Forms::PictureBox^  o3;

private: System::Windows::Forms::PictureBox^  p8;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->reqP = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->searchT = (gcnew System::Windows::Forms::TextBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::Label());
			this->ttip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->r2 = (gcnew System::Windows::Forms::PictureBox());
			this->p2 = (gcnew System::Windows::Forms::PictureBox());
			this->n2 = (gcnew System::Windows::Forms::LinkLabel());
			this->n3 = (gcnew System::Windows::Forms::LinkLabel());
			this->p3 = (gcnew System::Windows::Forms::PictureBox());
			this->r3 = (gcnew System::Windows::Forms::PictureBox());
			this->n4 = (gcnew System::Windows::Forms::LinkLabel());
			this->p4 = (gcnew System::Windows::Forms::PictureBox());
			this->r4 = (gcnew System::Windows::Forms::PictureBox());
			this->n8 = (gcnew System::Windows::Forms::LinkLabel());
			this->r8 = (gcnew System::Windows::Forms::PictureBox());
			this->n7 = (gcnew System::Windows::Forms::LinkLabel());
			this->p7 = (gcnew System::Windows::Forms::PictureBox());
			this->r7 = (gcnew System::Windows::Forms::PictureBox());
			this->n6 = (gcnew System::Windows::Forms::LinkLabel());
			this->p6 = (gcnew System::Windows::Forms::PictureBox());
			this->r6 = (gcnew System::Windows::Forms::PictureBox());
			this->n1 = (gcnew System::Windows::Forms::LinkLabel());
			this->p1 = (gcnew System::Windows::Forms::PictureBox());
			this->r1 = (gcnew System::Windows::Forms::PictureBox());
			this->n5 = (gcnew System::Windows::Forms::LinkLabel());
			this->p5 = (gcnew System::Windows::Forms::PictureBox());
			this->r5 = (gcnew System::Windows::Forms::PictureBox());
			this->n9 = (gcnew System::Windows::Forms::LinkLabel());
			this->p9 = (gcnew System::Windows::Forms::PictureBox());
			this->r9 = (gcnew System::Windows::Forms::PictureBox());
			this->n10 = (gcnew System::Windows::Forms::LinkLabel());
			this->p10 = (gcnew System::Windows::Forms::PictureBox());
			this->r10 = (gcnew System::Windows::Forms::PictureBox());
			this->o1 = (gcnew System::Windows::Forms::PictureBox());
			this->o2 = (gcnew System::Windows::Forms::PictureBox());
			this->o3 = (gcnew System::Windows::Forms::PictureBox());
			this->o4 = (gcnew System::Windows::Forms::PictureBox());
			this->o8 = (gcnew System::Windows::Forms::PictureBox());
			this->o7 = (gcnew System::Windows::Forms::PictureBox());
			this->o6 = (gcnew System::Windows::Forms::PictureBox());
			this->o5 = (gcnew System::Windows::Forms::PictureBox());
			this->o10 = (gcnew System::Windows::Forms::PictureBox());
			this->o9 = (gcnew System::Windows::Forms::PictureBox());
			this->p8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->reqs3 = (gcnew System::Windows::Forms::Label());
			this->requ3 = (gcnew System::Windows::Forms::Label());
			this->reqi3 = (gcnew System::Windows::Forms::PictureBox());
			this->reqs2 = (gcnew System::Windows::Forms::Label());
			this->requ2 = (gcnew System::Windows::Forms::Label());
			this->reqi2 = (gcnew System::Windows::Forms::PictureBox());
			this->reqs1 = (gcnew System::Windows::Forms::Label());
			this->requ1 = (gcnew System::Windows::Forms::Label());
			this->reqi1 = (gcnew System::Windows::Forms::PictureBox());
			this->reqs4 = (gcnew System::Windows::Forms::Label());
			this->requ4 = (gcnew System::Windows::Forms::Label());
			this->reqi4 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->reqs5 = (gcnew System::Windows::Forms::Label());
			this->requ5 = (gcnew System::Windows::Forms::Label());
			this->reqi5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->f7 = (gcnew System::Windows::Forms::Panel());
			this->f6 = (gcnew System::Windows::Forms::Panel());
			this->f8 = (gcnew System::Windows::Forms::Panel());
			this->f10 = (gcnew System::Windows::Forms::Panel());
			this->f9 = (gcnew System::Windows::Forms::Panel());
			this->f5 = (gcnew System::Windows::Forms::Panel());
			this->f4 = (gcnew System::Windows::Forms::Panel());
			this->f3 = (gcnew System::Windows::Forms::Panel());
			this->f2 = (gcnew System::Windows::Forms::Panel());
			this->f1 = (gcnew System::Windows::Forms::Panel());
			this->reqPanel = (gcnew System::Windows::Forms::Panel());
			this->req5 = (gcnew System::Windows::Forms::Panel());
			this->req4 = (gcnew System::Windows::Forms::Panel());
			this->reqNo = (gcnew System::Windows::Forms::Label());
			this->req3 = (gcnew System::Windows::Forms::Panel());
			this->req2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->req1 = (gcnew System::Windows::Forms::Panel());
			this->tim = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			this->panel2->SuspendLayout();
			this->f7->SuspendLayout();
			this->f6->SuspendLayout();
			this->f8->SuspendLayout();
			this->f10->SuspendLayout();
			this->f9->SuspendLayout();
			this->f5->SuspendLayout();
			this->f4->SuspendLayout();
			this->f3->SuspendLayout();
			this->f2->SuspendLayout();
			this->f1->SuspendLayout();
			this->reqPanel->SuspendLayout();
			this->req5->SuspendLayout();
			this->req4->SuspendLayout();
			this->req3->SuspendLayout();
			this->req2->SuspendLayout();
			this->req1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->reqP);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->searchT);
			this->panel1->Controls->Add(this->search);
			this->panel1->Controls->Add(this->name);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(699, 58);
			this->panel1->TabIndex = 1;
			// 
			// reqP
			// 
			this->reqP->BackColor = System::Drawing::Color::DarkSlateGray;
			this->reqP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"reqP.BackgroundImage")));
			this->reqP->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reqP->Location = System::Drawing::Point(641, 10);
			this->reqP->Name = L"reqP";
			this->reqP->Size = System::Drawing::Size(35, 35);
			this->reqP->TabIndex = 6;
			this->reqP->TabStop = false;
			this->ttip->SetToolTip(this->reqP, L"You have Friend Request(s)");
			this->reqP->Visible = false;
			this->reqP->Click += gcnew System::EventHandler(this, &baseF::reqP_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(170, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter his/her Username to Search";
			// 
			// searchT
			// 
			this->searchT->BackColor = System::Drawing::Color::DarkSlateGray;
			this->searchT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->searchT->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchT->ForeColor = System::Drawing::Color::White;
			this->searchT->Location = System::Drawing::Point(171, 25);
			this->searchT->MaxLength = 50;
			this->searchT->Name = L"searchT";
			this->searchT->Size = System::Drawing::Size(317, 21);
			this->searchT->TabIndex = 4;
			this->ttip->SetToolTip(this->searchT, L"Enter his/her Username to Search");
			// 
			// search
			// 
			this->search->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"search.BackgroundImage")));
			this->search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->search->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::Color::Black;
			this->search->Location = System::Drawing::Point(494, 23);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(126, 23);
			this->search->TabIndex = 3;
			this->search->Text = L"Search";
			this->ttip->SetToolTip(this->search, L"Click to Search for a Friend");
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &baseF::search_Click);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::Black;
			this->name->Location = System::Drawing::Point(29, 25);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(141, 18);
			this->name->TabIndex = 1;
			this->name->Text = L"Search for a Friend";
			this->name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ttip
			// 
			this->ttip->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ttip->ForeColor = System::Drawing::Color::White;
			this->ttip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->ttip->ToolTipTitle = L"MOLE Advisor";
			// 
			// r2
			// 
			this->r2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r2.BackgroundImage")));
			this->r2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r2->Location = System::Drawing::Point(1, 118);
			this->r2->Name = L"r2";
			this->r2->Size = System::Drawing::Size(126, 14);
			this->r2->TabIndex = 0;
			this->r2->TabStop = false;
			this->ttip->SetToolTip(this->r2, L"Click to Remove this Friend");
			this->r2->Visible = false;
			this->r2->Click += gcnew System::EventHandler(this, &baseF::r2_Click);
			// 
			// p2
			// 
			this->p2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->p2->Location = System::Drawing::Point(0, 0);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(128, 91);
			this->p2->TabIndex = 1;
			this->p2->TabStop = false;
			this->ttip->SetToolTip(this->p2, L"Your Friend\'s Profile Image");
			this->p2->Visible = false;
			// 
			// n2
			// 
			this->n2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->n2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n2->LinkColor = System::Drawing::Color::White;
			this->n2->Location = System::Drawing::Point(3, 92);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(122, 23);
			this->n2->TabIndex = 2;
			this->n2->TabStop = true;
			this->n2->Text = L"Basura";
			this->n2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n2, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n2->Visible = false;
			// 
			// n3
			// 
			this->n3->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n3->LinkColor = System::Drawing::Color::White;
			this->n3->Location = System::Drawing::Point(3, 92);
			this->n3->Name = L"n3";
			this->n3->Size = System::Drawing::Size(122, 23);
			this->n3->TabIndex = 5;
			this->n3->TabStop = true;
			this->n3->Text = L"Basura";
			this->n3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n3, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n3->Visible = false;
			// 
			// p3
			// 
			this->p3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p3->Location = System::Drawing::Point(0, 0);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(128, 91);
			this->p3->TabIndex = 4;
			this->p3->TabStop = false;
			this->ttip->SetToolTip(this->p3, L"Your Friend\'s Profile Image");
			this->p3->Visible = false;
			// 
			// r3
			// 
			this->r3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r3.BackgroundImage")));
			this->r3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r3->Location = System::Drawing::Point(1, 118);
			this->r3->Name = L"r3";
			this->r3->Size = System::Drawing::Size(126, 14);
			this->r3->TabIndex = 3;
			this->r3->TabStop = false;
			this->ttip->SetToolTip(this->r3, L"Click to Remove this Friend");
			this->r3->Visible = false;
			this->r3->Click += gcnew System::EventHandler(this, &baseF::r3_Click);
			// 
			// n4
			// 
			this->n4->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n4->LinkColor = System::Drawing::Color::White;
			this->n4->Location = System::Drawing::Point(3, 92);
			this->n4->Name = L"n4";
			this->n4->Size = System::Drawing::Size(122, 23);
			this->n4->TabIndex = 5;
			this->n4->TabStop = true;
			this->n4->Text = L"Basura";
			this->n4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n4, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n4->Visible = false;
			// 
			// p4
			// 
			this->p4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p4->Location = System::Drawing::Point(0, 0);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(128, 91);
			this->p4->TabIndex = 4;
			this->p4->TabStop = false;
			this->ttip->SetToolTip(this->p4, L"Your Friend\'s Profile Image");
			this->p4->Visible = false;
			// 
			// r4
			// 
			this->r4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r4.BackgroundImage")));
			this->r4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r4->Location = System::Drawing::Point(1, 118);
			this->r4->Name = L"r4";
			this->r4->Size = System::Drawing::Size(126, 14);
			this->r4->TabIndex = 3;
			this->r4->TabStop = false;
			this->ttip->SetToolTip(this->r4, L"Click to Remove this Friend");
			this->r4->Visible = false;
			this->r4->Click += gcnew System::EventHandler(this, &baseF::r4_Click);
			// 
			// n8
			// 
			this->n8->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n8->LinkColor = System::Drawing::Color::White;
			this->n8->Location = System::Drawing::Point(3, 92);
			this->n8->Name = L"n8";
			this->n8->Size = System::Drawing::Size(122, 23);
			this->n8->TabIndex = 5;
			this->n8->TabStop = true;
			this->n8->Text = L"Basura";
			this->n8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n8, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n8->Visible = false;
			// 
			// r8
			// 
			this->r8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r8.BackgroundImage")));
			this->r8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r8->Location = System::Drawing::Point(1, 118);
			this->r8->Name = L"r8";
			this->r8->Size = System::Drawing::Size(126, 14);
			this->r8->TabIndex = 3;
			this->r8->TabStop = false;
			this->ttip->SetToolTip(this->r8, L"Click to Remove this Friend");
			this->r8->Visible = false;
			this->r8->Click += gcnew System::EventHandler(this, &baseF::r8_Click);
			// 
			// n7
			// 
			this->n7->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n7->LinkColor = System::Drawing::Color::White;
			this->n7->Location = System::Drawing::Point(3, 92);
			this->n7->Name = L"n7";
			this->n7->Size = System::Drawing::Size(122, 23);
			this->n7->TabIndex = 5;
			this->n7->TabStop = true;
			this->n7->Text = L"Basura";
			this->n7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n7, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n7->Visible = false;
			// 
			// p7
			// 
			this->p7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p7->Location = System::Drawing::Point(0, 0);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(128, 91);
			this->p7->TabIndex = 4;
			this->p7->TabStop = false;
			this->ttip->SetToolTip(this->p7, L"Your Friend\'s Profile Image");
			this->p7->Visible = false;
			// 
			// r7
			// 
			this->r7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r7.BackgroundImage")));
			this->r7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r7->Location = System::Drawing::Point(1, 118);
			this->r7->Name = L"r7";
			this->r7->Size = System::Drawing::Size(126, 14);
			this->r7->TabIndex = 3;
			this->r7->TabStop = false;
			this->ttip->SetToolTip(this->r7, L"Click to Remove this Friend");
			this->r7->Visible = false;
			this->r7->Click += gcnew System::EventHandler(this, &baseF::r7_Click);
			// 
			// n6
			// 
			this->n6->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n6->LinkColor = System::Drawing::Color::White;
			this->n6->Location = System::Drawing::Point(3, 92);
			this->n6->Name = L"n6";
			this->n6->Size = System::Drawing::Size(122, 23);
			this->n6->TabIndex = 5;
			this->n6->TabStop = true;
			this->n6->Text = L"Basura";
			this->n6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n6, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n6->Visible = false;
			// 
			// p6
			// 
			this->p6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p6->Location = System::Drawing::Point(0, 0);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(128, 91);
			this->p6->TabIndex = 4;
			this->p6->TabStop = false;
			this->ttip->SetToolTip(this->p6, L"Your Friend\'s Profile Image");
			this->p6->Visible = false;
			// 
			// r6
			// 
			this->r6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r6.BackgroundImage")));
			this->r6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r6->Location = System::Drawing::Point(1, 118);
			this->r6->Name = L"r6";
			this->r6->Size = System::Drawing::Size(126, 14);
			this->r6->TabIndex = 3;
			this->r6->TabStop = false;
			this->ttip->SetToolTip(this->r6, L"Click to Remove this Friend");
			this->r6->Visible = false;
			this->r6->Click += gcnew System::EventHandler(this, &baseF::r6_Click);
			// 
			// n1
			// 
			this->n1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n1->LinkColor = System::Drawing::Color::White;
			this->n1->Location = System::Drawing::Point(3, 92);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(122, 23);
			this->n1->TabIndex = 5;
			this->n1->TabStop = true;
			this->n1->Text = L"Basura";
			this->n1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n1, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n1->Visible = false;
			// 
			// p1
			// 
			this->p1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p1->Location = System::Drawing::Point(0, 0);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(128, 91);
			this->p1->TabIndex = 4;
			this->p1->TabStop = false;
			this->ttip->SetToolTip(this->p1, L"Your Friend\'s Profile Image");
			this->p1->Visible = false;
			// 
			// r1
			// 
			this->r1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r1.BackgroundImage")));
			this->r1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r1->Location = System::Drawing::Point(1, 118);
			this->r1->Name = L"r1";
			this->r1->Size = System::Drawing::Size(126, 14);
			this->r1->TabIndex = 3;
			this->r1->TabStop = false;
			this->ttip->SetToolTip(this->r1, L"Click to Remove this Friend");
			this->r1->Visible = false;
			this->r1->Click += gcnew System::EventHandler(this, &baseF::r1_Click);
			// 
			// n5
			// 
			this->n5->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n5->LinkColor = System::Drawing::Color::White;
			this->n5->Location = System::Drawing::Point(3, 92);
			this->n5->Name = L"n5";
			this->n5->Size = System::Drawing::Size(122, 23);
			this->n5->TabIndex = 5;
			this->n5->TabStop = true;
			this->n5->Text = L"Basura";
			this->n5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n5, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n5->Visible = false;
			// 
			// p5
			// 
			this->p5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p5->Location = System::Drawing::Point(0, 0);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(128, 91);
			this->p5->TabIndex = 4;
			this->p5->TabStop = false;
			this->ttip->SetToolTip(this->p5, L"Your Friend\'s Profile Image");
			this->p5->Visible = false;
			// 
			// r5
			// 
			this->r5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r5.BackgroundImage")));
			this->r5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r5->Location = System::Drawing::Point(1, 118);
			this->r5->Name = L"r5";
			this->r5->Size = System::Drawing::Size(126, 14);
			this->r5->TabIndex = 3;
			this->r5->TabStop = false;
			this->ttip->SetToolTip(this->r5, L"Click to Remove this Friend");
			this->r5->Visible = false;
			this->r5->Click += gcnew System::EventHandler(this, &baseF::r5_Click);
			// 
			// n9
			// 
			this->n9->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n9->LinkColor = System::Drawing::Color::White;
			this->n9->Location = System::Drawing::Point(3, 92);
			this->n9->Name = L"n9";
			this->n9->Size = System::Drawing::Size(122, 23);
			this->n9->TabIndex = 5;
			this->n9->TabStop = true;
			this->n9->Text = L"Basura";
			this->n9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n9, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n9->Visible = false;
			// 
			// p9
			// 
			this->p9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p9->Location = System::Drawing::Point(0, 0);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(128, 91);
			this->p9->TabIndex = 4;
			this->p9->TabStop = false;
			this->ttip->SetToolTip(this->p9, L"Your Friend\'s Profile Image");
			this->p9->Visible = false;
			// 
			// r9
			// 
			this->r9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r9.BackgroundImage")));
			this->r9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r9->Location = System::Drawing::Point(1, 118);
			this->r9->Name = L"r9";
			this->r9->Size = System::Drawing::Size(126, 14);
			this->r9->TabIndex = 3;
			this->r9->TabStop = false;
			this->ttip->SetToolTip(this->r9, L"Click to Remove this Friend");
			this->r9->Visible = false;
			this->r9->Click += gcnew System::EventHandler(this, &baseF::r9_Click);
			// 
			// n10
			// 
			this->n10->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->n10->LinkColor = System::Drawing::Color::White;
			this->n10->Location = System::Drawing::Point(3, 92);
			this->n10->Name = L"n10";
			this->n10->Size = System::Drawing::Size(122, 23);
			this->n10->TabIndex = 5;
			this->n10->TabStop = true;
			this->n10->Text = L"Basura";
			this->n10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->n10, L"Your Friend\'s Username, Click to See the Full Profile\r\n");
			this->n10->Visible = false;
			// 
			// p10
			// 
			this->p10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p10->Location = System::Drawing::Point(0, 0);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(128, 91);
			this->p10->TabIndex = 4;
			this->p10->TabStop = false;
			this->ttip->SetToolTip(this->p10, L"Your Friend\'s Profile Image");
			this->p10->Visible = false;
			// 
			// r10
			// 
			this->r10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r10.BackgroundImage")));
			this->r10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->r10->Location = System::Drawing::Point(1, 118);
			this->r10->Name = L"r10";
			this->r10->Size = System::Drawing::Size(126, 14);
			this->r10->TabIndex = 3;
			this->r10->TabStop = false;
			this->ttip->SetToolTip(this->r10, L"Click to Remove this Friend");
			this->r10->Visible = false;
			this->r10->Click += gcnew System::EventHandler(this, &baseF::r10_Click);
			// 
			// o1
			// 
			this->o1->BackColor = System::Drawing::Color::Transparent;
			this->o1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o1->Location = System::Drawing::Point(139, 9);
			this->o1->Name = L"o1";
			this->o1->Size = System::Drawing::Size(20, 20);
			this->o1->TabIndex = 10;
			this->o1->TabStop = false;
			this->ttip->SetToolTip(this->o1, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o2
			// 
			this->o2->BackColor = System::Drawing::Color::Transparent;
			this->o2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o2->Location = System::Drawing::Point(306, 9);
			this->o2->Name = L"o2";
			this->o2->Size = System::Drawing::Size(20, 20);
			this->o2->TabIndex = 11;
			this->o2->TabStop = false;
			this->ttip->SetToolTip(this->o2, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o3
			// 
			this->o3->BackColor = System::Drawing::Color::Transparent;
			this->o3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o3->Location = System::Drawing::Point(473, 9);
			this->o3->Name = L"o3";
			this->o3->Size = System::Drawing::Size(20, 20);
			this->o3->TabIndex = 12;
			this->o3->TabStop = false;
			this->ttip->SetToolTip(this->o3, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o4
			// 
			this->o4->BackColor = System::Drawing::Color::Transparent;
			this->o4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o4->Location = System::Drawing::Point(640, 9);
			this->o4->Name = L"o4";
			this->o4->Size = System::Drawing::Size(20, 20);
			this->o4->TabIndex = 13;
			this->o4->TabStop = false;
			this->ttip->SetToolTip(this->o4, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o8
			// 
			this->o8->BackColor = System::Drawing::Color::Transparent;
			this->o8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o8->Location = System::Drawing::Point(640, 149);
			this->o8->Name = L"o8";
			this->o8->Size = System::Drawing::Size(20, 20);
			this->o8->TabIndex = 17;
			this->o8->TabStop = false;
			this->ttip->SetToolTip(this->o8, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o7
			// 
			this->o7->BackColor = System::Drawing::Color::Transparent;
			this->o7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o7->Location = System::Drawing::Point(473, 149);
			this->o7->Name = L"o7";
			this->o7->Size = System::Drawing::Size(20, 20);
			this->o7->TabIndex = 16;
			this->o7->TabStop = false;
			this->ttip->SetToolTip(this->o7, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o6
			// 
			this->o6->BackColor = System::Drawing::Color::Transparent;
			this->o6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o6->Location = System::Drawing::Point(306, 149);
			this->o6->Name = L"o6";
			this->o6->Size = System::Drawing::Size(20, 20);
			this->o6->TabIndex = 15;
			this->o6->TabStop = false;
			this->ttip->SetToolTip(this->o6, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o5
			// 
			this->o5->BackColor = System::Drawing::Color::Transparent;
			this->o5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o5->Location = System::Drawing::Point(139, 149);
			this->o5->Name = L"o5";
			this->o5->Size = System::Drawing::Size(20, 20);
			this->o5->TabIndex = 14;
			this->o5->TabStop = false;
			this->ttip->SetToolTip(this->o5, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o10
			// 
			this->o10->BackColor = System::Drawing::Color::Transparent;
			this->o10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o10->Location = System::Drawing::Point(473, 288);
			this->o10->Name = L"o10";
			this->o10->Size = System::Drawing::Size(20, 20);
			this->o10->TabIndex = 19;
			this->o10->TabStop = false;
			this->ttip->SetToolTip(this->o10, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// o9
			// 
			this->o9->BackColor = System::Drawing::Color::Transparent;
			this->o9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o9->Location = System::Drawing::Point(306, 288);
			this->o9->Name = L"o9";
			this->o9->Size = System::Drawing::Size(20, 20);
			this->o9->TabIndex = 18;
			this->o9->TabStop = false;
			this->ttip->SetToolTip(this->o9, L"Green - Your Friend is Online\r\nRed - Your Friend is Offline");
			// 
			// p8
			// 
			this->p8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p8->Location = System::Drawing::Point(0, 0);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(128, 91);
			this->p8->TabIndex = 6;
			this->p8->TabStop = false;
			this->ttip->SetToolTip(this->p8, L"Your Friend\'s Profile Image");
			this->p8->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DarkRed;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(309, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(21, 16);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox1, L"Close Notifications");
			this->pictureBox1->Click += gcnew System::EventHandler(this, &baseF::pictureBox1_Click);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Teal;
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(137, 54);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 30);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Accept";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label13, L"I know this person. Accept this person as a friend of mine.");
			this->label13->Click += gcnew System::EventHandler(this, &baseF::pictureBox10_Click);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Maroon;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(244, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 30);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Decline";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label14, L"I don\'t know this person. Decline this person.");
			this->label14->Click += gcnew System::EventHandler(this, &baseF::pictureBox9_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(214, 54);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(30, 30);
			this->pictureBox9->TabIndex = 7;
			this->pictureBox9->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox9, L"I don\'t know this person. Decline this person.");
			this->pictureBox9->Click += gcnew System::EventHandler(this, &baseF::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Teal;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Location = System::Drawing::Point(107, 54);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 30);
			this->pictureBox10->TabIndex = 6;
			this->pictureBox10->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox10, L"I know this person. Accept this person as a friend of mine.");
			this->pictureBox10->Click += gcnew System::EventHandler(this, &baseF::pictureBox10_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Teal;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(137, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 30);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Accept";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label9, L"I know this person. Accept this person as a friend of mine.");
			this->label9->Click += gcnew System::EventHandler(this, &baseF::pictureBox5_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Maroon;
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(244, 54);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 30);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Decline";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label10, L"I don\'t know this person. Decline this person.");
			this->label10->Click += gcnew System::EventHandler(this, &baseF::pictureBox4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(214, 54);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 30);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox4, L"I don\'t know this person. Decline this person.");
			this->pictureBox4->Click += gcnew System::EventHandler(this, &baseF::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Teal;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(107, 54);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox5, L"I know this person. Accept this person as a friend of mine.");
			this->pictureBox5->Click += gcnew System::EventHandler(this, &baseF::pictureBox5_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(137, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 30);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Accept";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label3, L"I know this person. Accept this person as a friend of mine.");
			this->label3->Click += gcnew System::EventHandler(this, &baseF::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Maroon;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(244, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 30);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Decline";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label4, L"I don\'t know this person. Decline this person.");
			this->label4->Click += gcnew System::EventHandler(this, &baseF::pictureBox6_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(214, 54);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox6, L"I don\'t know this person. Decline this person.");
			this->pictureBox6->Click += gcnew System::EventHandler(this, &baseF::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Teal;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(107, 54);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 30);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox7, L"I know this person. Accept this person as a friend of mine.");
			this->pictureBox7->Click += gcnew System::EventHandler(this, &baseF::label3_Click);
			// 
			// reqs3
			// 
			this->reqs3->BackColor = System::Drawing::Color::Transparent;
			this->reqs3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reqs3->Location = System::Drawing::Point(105, 31);
			this->reqs3->Name = L"reqs3";
			this->reqs3->Size = System::Drawing::Size(210, 20);
			this->reqs3->TabIndex = 15;
			this->reqs3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->reqs3, L"Your friend\'s School Name");
			// 
			// requ3
			// 
			this->requ3->BackColor = System::Drawing::Color::Transparent;
			this->requ3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->requ3->Location = System::Drawing::Point(105, 6);
			this->requ3->Name = L"requ3";
			this->requ3->Size = System::Drawing::Size(210, 20);
			this->requ3->TabIndex = 14;
			this->requ3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->requ3, L"Your Friend\'s Full Name");
			// 
			// reqi3
			// 
			this->reqi3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqi3->Location = System::Drawing::Point(4, 3);
			this->reqi3->Name = L"reqi3";
			this->reqi3->Size = System::Drawing::Size(100, 81);
			this->reqi3->TabIndex = 12;
			this->reqi3->TabStop = false;
			this->ttip->SetToolTip(this->reqi3, L"Your Friend\'s Profile Image");
			// 
			// reqs2
			// 
			this->reqs2->BackColor = System::Drawing::Color::Transparent;
			this->reqs2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reqs2->Location = System::Drawing::Point(105, 31);
			this->reqs2->Name = L"reqs2";
			this->reqs2->Size = System::Drawing::Size(210, 20);
			this->reqs2->TabIndex = 15;
			this->reqs2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->reqs2, L"Your friend\'s School Name");
			// 
			// requ2
			// 
			this->requ2->BackColor = System::Drawing::Color::Transparent;
			this->requ2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->requ2->Location = System::Drawing::Point(105, 6);
			this->requ2->Name = L"requ2";
			this->requ2->Size = System::Drawing::Size(210, 20);
			this->requ2->TabIndex = 14;
			this->requ2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->requ2, L"Your Friend\'s Full Name");
			// 
			// reqi2
			// 
			this->reqi2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqi2->Location = System::Drawing::Point(4, 3);
			this->reqi2->Name = L"reqi2";
			this->reqi2->Size = System::Drawing::Size(100, 81);
			this->reqi2->TabIndex = 12;
			this->reqi2->TabStop = false;
			this->ttip->SetToolTip(this->reqi2, L"Your Friend\'s Profile Image");
			// 
			// reqs1
			// 
			this->reqs1->BackColor = System::Drawing::Color::Transparent;
			this->reqs1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reqs1->Location = System::Drawing::Point(105, 31);
			this->reqs1->Name = L"reqs1";
			this->reqs1->Size = System::Drawing::Size(210, 20);
			this->reqs1->TabIndex = 15;
			this->reqs1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->reqs1, L"Your friend\'s School Name");
			// 
			// requ1
			// 
			this->requ1->BackColor = System::Drawing::Color::Transparent;
			this->requ1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->requ1->Location = System::Drawing::Point(105, 6);
			this->requ1->Name = L"requ1";
			this->requ1->Size = System::Drawing::Size(210, 20);
			this->requ1->TabIndex = 14;
			this->requ1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->requ1, L"Your Friend\'s Full Name");
			// 
			// reqi1
			// 
			this->reqi1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqi1->Location = System::Drawing::Point(4, 3);
			this->reqi1->Name = L"reqi1";
			this->reqi1->Size = System::Drawing::Size(100, 81);
			this->reqi1->TabIndex = 12;
			this->reqi1->TabStop = false;
			this->ttip->SetToolTip(this->reqi1, L"Your Friend\'s Profile Image");
			// 
			// reqs4
			// 
			this->reqs4->BackColor = System::Drawing::Color::Transparent;
			this->reqs4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reqs4->Location = System::Drawing::Point(105, 31);
			this->reqs4->Name = L"reqs4";
			this->reqs4->Size = System::Drawing::Size(210, 20);
			this->reqs4->TabIndex = 15;
			this->reqs4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->reqs4, L"Your friend\'s School Name");
			// 
			// requ4
			// 
			this->requ4->BackColor = System::Drawing::Color::Transparent;
			this->requ4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->requ4->Location = System::Drawing::Point(105, 6);
			this->requ4->Name = L"requ4";
			this->requ4->Size = System::Drawing::Size(210, 20);
			this->requ4->TabIndex = 14;
			this->requ4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->requ4, L"Your Friend\'s Full Name");
			// 
			// reqi4
			// 
			this->reqi4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqi4->Location = System::Drawing::Point(4, 3);
			this->reqi4->Name = L"reqi4";
			this->reqi4->Size = System::Drawing::Size(100, 81);
			this->reqi4->TabIndex = 12;
			this->reqi4->TabStop = false;
			this->ttip->SetToolTip(this->reqi4, L"Your Friend\'s Profile Image");
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Teal;
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(137, 54);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(72, 30);
			this->label18->TabIndex = 11;
			this->label18->Text = L"Accept";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label18, L"I know this person. Accept this person as a friend of mine.");
			this->label18->Click += gcnew System::EventHandler(this, &baseF::pictureBox13_Click);
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Maroon;
			this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(244, 54);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(72, 30);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Decline";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label19, L"I don\'t know this person. Decline this person.");
			this->label19->Click += gcnew System::EventHandler(this, &baseF::pictureBox12_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox12->Location = System::Drawing::Point(214, 54);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 30);
			this->pictureBox12->TabIndex = 7;
			this->pictureBox12->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox12, L"I don\'t know this person. Decline this person.");
			this->pictureBox12->Click += gcnew System::EventHandler(this, &baseF::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Teal;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox13->Location = System::Drawing::Point(107, 54);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 30);
			this->pictureBox13->TabIndex = 6;
			this->pictureBox13->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox13, L"I know this person. Accept this person as a friend of mine.");
			this->pictureBox13->Click += gcnew System::EventHandler(this, &baseF::pictureBox13_Click);
			// 
			// reqs5
			// 
			this->reqs5->BackColor = System::Drawing::Color::Transparent;
			this->reqs5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->reqs5->Location = System::Drawing::Point(105, 31);
			this->reqs5->Name = L"reqs5";
			this->reqs5->Size = System::Drawing::Size(210, 20);
			this->reqs5->TabIndex = 15;
			this->reqs5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->reqs5, L"Your friend\'s School Name");
			// 
			// requ5
			// 
			this->requ5->BackColor = System::Drawing::Color::Transparent;
			this->requ5->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->requ5->Location = System::Drawing::Point(105, 6);
			this->requ5->Name = L"requ5";
			this->requ5->Size = System::Drawing::Size(210, 20);
			this->requ5->TabIndex = 14;
			this->requ5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ttip->SetToolTip(this->requ5, L"Your Friend\'s Full Name");
			// 
			// reqi5
			// 
			this->reqi5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reqi5->Location = System::Drawing::Point(4, 3);
			this->reqi5->Name = L"reqi5";
			this->reqi5->Size = System::Drawing::Size(100, 81);
			this->reqi5->TabIndex = 12;
			this->reqi5->TabStop = false;
			this->ttip->SetToolTip(this->reqi5, L"Your Friend\'s Profile Image");
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Teal;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(137, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 30);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Accept";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label7, L"I know this person. Accept this person as a friend of mine.");
			this->label7->Click += gcnew System::EventHandler(this, &baseF::pictureBox16_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Maroon;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(244, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 30);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Decline";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ttip->SetToolTip(this->label8, L"I don\'t know this person. Decline this person.");
			this->label8->Click += gcnew System::EventHandler(this, &baseF::pictureBox15_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox15->Location = System::Drawing::Point(214, 54);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 30);
			this->pictureBox15->TabIndex = 7;
			this->pictureBox15->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox15, L"I don\'t know this person. Decline this person.");
			this->pictureBox15->Click += gcnew System::EventHandler(this, &baseF::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Teal;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox16->Location = System::Drawing::Point(107, 54);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(30, 30);
			this->pictureBox16->TabIndex = 6;
			this->pictureBox16->TabStop = false;
			this->ttip->SetToolTip(this->pictureBox16, L"I know this person. Accept this person as a friend of mine.");
			this->pictureBox16->Click += gcnew System::EventHandler(this, &baseF::pictureBox16_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->o10);
			this->panel2->Controls->Add(this->o9);
			this->panel2->Controls->Add(this->o8);
			this->panel2->Controls->Add(this->o7);
			this->panel2->Controls->Add(this->o6);
			this->panel2->Controls->Add(this->o5);
			this->panel2->Controls->Add(this->o4);
			this->panel2->Controls->Add(this->o3);
			this->panel2->Controls->Add(this->o2);
			this->panel2->Controls->Add(this->o1);
			this->panel2->Controls->Add(this->f7);
			this->panel2->Controls->Add(this->f6);
			this->panel2->Controls->Add(this->f8);
			this->panel2->Controls->Add(this->f10);
			this->panel2->Controls->Add(this->f9);
			this->panel2->Controls->Add(this->f5);
			this->panel2->Controls->Add(this->f4);
			this->panel2->Controls->Add(this->f3);
			this->panel2->Controls->Add(this->f2);
			this->panel2->Controls->Add(this->f1);
			this->panel2->Location = System::Drawing::Point(12, 63);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(667, 428);
			this->panel2->TabIndex = 2;
			// 
			// f7
			// 
			this->f7->Controls->Add(this->n7);
			this->f7->Controls->Add(this->p7);
			this->f7->Controls->Add(this->r7);
			this->f7->Location = System::Drawing::Point(344, 149);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(128, 132);
			this->f7->TabIndex = 9;
			// 
			// f6
			// 
			this->f6->Controls->Add(this->n6);
			this->f6->Controls->Add(this->p6);
			this->f6->Controls->Add(this->r6);
			this->f6->Location = System::Drawing::Point(177, 149);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(128, 132);
			this->f6->TabIndex = 8;
			// 
			// f8
			// 
			this->f8->Controls->Add(this->p8);
			this->f8->Controls->Add(this->n8);
			this->f8->Controls->Add(this->r8);
			this->f8->Location = System::Drawing::Point(511, 149);
			this->f8->Name = L"f8";
			this->f8->Size = System::Drawing::Size(128, 132);
			this->f8->TabIndex = 7;
			// 
			// f10
			// 
			this->f10->Controls->Add(this->n10);
			this->f10->Controls->Add(this->p10);
			this->f10->Controls->Add(this->r10);
			this->f10->Location = System::Drawing::Point(344, 287);
			this->f10->Name = L"f10";
			this->f10->Size = System::Drawing::Size(128, 132);
			this->f10->TabIndex = 6;
			// 
			// f9
			// 
			this->f9->Controls->Add(this->n9);
			this->f9->Controls->Add(this->p9);
			this->f9->Controls->Add(this->r9);
			this->f9->Location = System::Drawing::Point(177, 287);
			this->f9->Name = L"f9";
			this->f9->Size = System::Drawing::Size(128, 132);
			this->f9->TabIndex = 5;
			// 
			// f5
			// 
			this->f5->Controls->Add(this->n5);
			this->f5->Controls->Add(this->p5);
			this->f5->Controls->Add(this->r5);
			this->f5->Location = System::Drawing::Point(10, 149);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(128, 132);
			this->f5->TabIndex = 4;
			// 
			// f4
			// 
			this->f4->Controls->Add(this->n4);
			this->f4->Controls->Add(this->p4);
			this->f4->Controls->Add(this->r4);
			this->f4->Location = System::Drawing::Point(511, 9);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(128, 132);
			this->f4->TabIndex = 3;
			// 
			// f3
			// 
			this->f3->Controls->Add(this->n3);
			this->f3->Controls->Add(this->p3);
			this->f3->Controls->Add(this->r3);
			this->f3->Location = System::Drawing::Point(344, 9);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(128, 132);
			this->f3->TabIndex = 2;
			// 
			// f2
			// 
			this->f2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f2->Controls->Add(this->n2);
			this->f2->Controls->Add(this->p2);
			this->f2->Controls->Add(this->r2);
			this->f2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->f2->Location = System::Drawing::Point(177, 9);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(128, 132);
			this->f2->TabIndex = 1;
			// 
			// f1
			// 
			this->f1->Controls->Add(this->n1);
			this->f1->Controls->Add(this->p1);
			this->f1->Controls->Add(this->r1);
			this->f1->Location = System::Drawing::Point(10, 9);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(128, 132);
			this->f1->TabIndex = 0;
			// 
			// reqPanel
			// 
			this->reqPanel->AutoScroll = true;
			this->reqPanel->AutoSize = true;
			this->reqPanel->BackColor = System::Drawing::Color::White;
			this->reqPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"reqPanel.BackgroundImage")));
			this->reqPanel->Controls->Add(this->req5);
			this->reqPanel->Controls->Add(this->req4);
			this->reqPanel->Controls->Add(this->reqNo);
			this->reqPanel->Controls->Add(this->req3);
			this->reqPanel->Controls->Add(this->req2);
			this->reqPanel->Controls->Add(this->pictureBox1);
			this->reqPanel->Controls->Add(this->label2);
			this->reqPanel->Controls->Add(this->req1);
			this->reqPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->reqPanel->Location = System::Drawing::Point(0, 0);
			this->reqPanel->Name = L"reqPanel";
			this->reqPanel->Size = System::Drawing::Size(333, 503);
			this->reqPanel->TabIndex = 21;
			this->reqPanel->Visible = false;
			// 
			// req5
			// 
			this->req5->BackColor = System::Drawing::Color::Gold;
			this->req5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"req5.BackgroundImage")));
			this->req5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req5->Controls->Add(this->reqs5);
			this->req5->Controls->Add(this->requ5);
			this->req5->Controls->Add(this->reqi5);
			this->req5->Controls->Add(this->label7);
			this->req5->Controls->Add(this->label8);
			this->req5->Controls->Add(this->pictureBox15);
			this->req5->Controls->Add(this->pictureBox16);
			this->req5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->req5->Location = System::Drawing::Point(5, 410);
			this->req5->Name = L"req5";
			this->req5->Size = System::Drawing::Size(323, 89);
			this->req5->TabIndex = 9;
			this->req5->Visible = false;
			// 
			// req4
			// 
			this->req4->BackColor = System::Drawing::Color::Gold;
			this->req4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"req4.BackgroundImage")));
			this->req4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req4->Controls->Add(this->reqs4);
			this->req4->Controls->Add(this->requ4);
			this->req4->Controls->Add(this->reqi4);
			this->req4->Controls->Add(this->label18);
			this->req4->Controls->Add(this->label19);
			this->req4->Controls->Add(this->pictureBox12);
			this->req4->Controls->Add(this->pictureBox13);
			this->req4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->req4->Location = System::Drawing::Point(5, 318);
			this->req4->Name = L"req4";
			this->req4->Size = System::Drawing::Size(323, 89);
			this->req4->TabIndex = 8;
			this->req4->Visible = false;
			// 
			// reqNo
			// 
			this->reqNo->BackColor = System::Drawing::Color::DarkSlateGray;
			this->reqNo->Dock = System::Windows::Forms::DockStyle::Top;
			this->reqNo->ForeColor = System::Drawing::Color::White;
			this->reqNo->Location = System::Drawing::Point(0, 18);
			this->reqNo->Name = L"reqNo";
			this->reqNo->Size = System::Drawing::Size(333, 20);
			this->reqNo->TabIndex = 7;
			this->reqNo->Text = L"You 5 Friend Requests";
			this->reqNo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// req3
			// 
			this->req3->BackColor = System::Drawing::Color::Gold;
			this->req3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"req3.BackgroundImage")));
			this->req3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req3->Controls->Add(this->reqs3);
			this->req3->Controls->Add(this->requ3);
			this->req3->Controls->Add(this->reqi3);
			this->req3->Controls->Add(this->label13);
			this->req3->Controls->Add(this->label14);
			this->req3->Controls->Add(this->pictureBox9);
			this->req3->Controls->Add(this->pictureBox10);
			this->req3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->req3->Location = System::Drawing::Point(5, 226);
			this->req3->Name = L"req3";
			this->req3->Size = System::Drawing::Size(323, 89);
			this->req3->TabIndex = 6;
			this->req3->Visible = false;
			// 
			// req2
			// 
			this->req2->BackColor = System::Drawing::Color::Gold;
			this->req2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"req2.BackgroundImage")));
			this->req2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req2->Controls->Add(this->reqs2);
			this->req2->Controls->Add(this->requ2);
			this->req2->Controls->Add(this->reqi2);
			this->req2->Controls->Add(this->label9);
			this->req2->Controls->Add(this->label10);
			this->req2->Controls->Add(this->pictureBox4);
			this->req2->Controls->Add(this->pictureBox5);
			this->req2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->req2->Location = System::Drawing::Point(5, 134);
			this->req2->Name = L"req2";
			this->req2->Size = System::Drawing::Size(323, 89);
			this->req2->TabIndex = 5;
			this->req2->Visible = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(333, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Friend Requests";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// req1
			// 
			this->req1->BackColor = System::Drawing::Color::Gold;
			this->req1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"req1.BackgroundImage")));
			this->req1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->req1->Controls->Add(this->reqs1);
			this->req1->Controls->Add(this->requ1);
			this->req1->Controls->Add(this->reqi1);
			this->req1->Controls->Add(this->label3);
			this->req1->Controls->Add(this->label4);
			this->req1->Controls->Add(this->pictureBox6);
			this->req1->Controls->Add(this->pictureBox7);
			this->req1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->req1->Location = System::Drawing::Point(5, 42);
			this->req1->Name = L"req1";
			this->req1->Size = System::Drawing::Size(323, 89);
			this->req1->TabIndex = 2;
			this->req1->Visible = false;
			// 
			// tim
			// 
			this->tim->Interval = 1000;
			this->tim->Tick += gcnew System::EventHandler(this, &baseF::tim_Tick);
			// 
			// baseF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(691, 503);
			this->Controls->Add(this->reqPanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"baseF";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Basura\'s Friends";
			this->TopMost = true;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->r10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->o9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->p8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->reqi5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			this->panel2->ResumeLayout(false);
			this->f7->ResumeLayout(false);
			this->f6->ResumeLayout(false);
			this->f8->ResumeLayout(false);
			this->f10->ResumeLayout(false);
			this->f9->ResumeLayout(false);
			this->f5->ResumeLayout(false);
			this->f4->ResumeLayout(false);
			this->f3->ResumeLayout(false);
			this->f2->ResumeLayout(false);
			this->f1->ResumeLayout(false);
			this->reqPanel->ResumeLayout(false);
			this->req5->ResumeLayout(false);
			this->req4->ResumeLayout(false);
			this->req3->ResumeLayout(false);
			this->req2->ResumeLayout(false);
			this->req1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
				 try{
					 if(searchT->Text != ""){
						loadContent lc1;
						lc1.Show();
						setSearch(0,searchT->Text);
						System::Diagnostics::Process::Start(Application::ExecutablePath->Replace("fMOLE.exe","mFriend.jar"))->WaitForExit();
						searchR s;
						s.ShowDialog();
					 }else{
						 MessageBox::Show("Enter a Username, You cannot for search a user by entering nothing", "MOLE Advisor");
					 }					
				 }catch(Exception^ e){
					 MessageBox::Show("We Encountered a Problem. " + e->Message + Environment::NewLine+"1. Check you Connection and Try Again"+Environment::NewLine+ "2. Try reinstalling the Application", "MOLE Advisor");
					this->Close();					 	
				 } 				
			 }
			 void setSearch(int a, String^ b){
				StreamWriter^ sw = gcnew StreamWriter( Application::ExecutablePath->Replace("fMOLE.exe","user\\mFriend.ms"));
				sw->WriteLine("FUser = "+b);
				sw->WriteLine("AddU = "+a);
				sw->Close();
			 }
private: System::Void reqP_Click(System::Object^  sender, System::EventArgs^  e) {
			 tim->Enabled=false;
			 reqPanel->Visible=true;
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 reqPanel->Visible=false;
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 addF(requ1->Text);
			 req1->Visible=false;
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  addF(requ2->Text);
			  req2->Visible=false;
		 }
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 addF(requ3->Text);
			 req3->Visible=false;
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			 addF(requ4->Text);
			 req4->Visible=false;
		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			 addF(requ5->Text);
			 req5->Visible=false;
		 }
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(requ1->Text);
			 req1->Visible=false;
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(requ2->Text);
			 req2->Visible=false;
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(requ3->Text);
			 req3->Visible=false;
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(requ4->Text);
			 req4->Visible=false;
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(requ5->Text);
			 req5->Visible=false;
		 }
private: System::Void r3_Click(System::Object^  sender, System::EventArgs^  e) {
			removeF(n3->Text);
		 }
private: System::Void r4_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n4->Text);
		 }
private: System::Void r8_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n8->Text);
		 }
private: System::Void r7_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n7->Text);
		 }
private: System::Void r10_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n10->Text);
		 }
private: System::Void r2_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n2->Text);
		 }
private: System::Void r1_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n1->Text);
		 }
private: System::Void r5_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n5->Text);
		 }
private: System::Void r6_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n6->Text);
		 }
private: System::Void r9_Click(System::Object^  sender, System::EventArgs^  e) {
			 removeF(n9->Text);
		 }
		 
private: System::Void tim_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(x%2 == 0){
				 reqP->BackColor=System::Drawing::Color::White;
			 }else{
				 reqP->BackColor=System::Drawing::Color::DarkSlateGray;
			 }
			 x++;			 
		 }
};
}
