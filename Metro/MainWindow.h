#pragma once
#include "Node.h"
#include "Dijkstra.h"
#include "Split.h"
namespace Metro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>

	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
	/*	MainWindow(void)   //when lines are commented in this file, it is often in order to
							//reactivate them to be able to use the Designer View 
							//(when lines are added to this file, the designer view returns a grey window)
		{
			InitializeComponent();
		}*/
	private: System::Windows::Forms::TextBox^  textBoxItin;
	private: System::Windows::Forms::Button^  button_10;
	private: System::Windows::Forms::Button^  button_5;
	private: System::Windows::Forms::Button^  button_66;
	private: System::Windows::Forms::Button^  button_33;

	private: System::Windows::Forms::Button^  button_20;

	private: System::Windows::Forms::Button^  button_54;

	private: System::Windows::Forms::Button^  button_37;

	private: System::Windows::Forms::Button^  button_59;

	private: System::Windows::Forms::Button^  button_1;

	private: System::Windows::Forms::Button^  button_8;

	private: System::Windows::Forms::Button^  button_28;

	private: System::Windows::Forms::Button^  button_22;

	private: System::Windows::Forms::Button^  button_75;


	private: System::Windows::Forms::Button^  button_50;

	private: System::Windows::Forms::Button^  button_39;

	private: System::Windows::Forms::Button^  button_29;
	private: System::Windows::Forms::Button^  button_68;
	private: System::Windows::Forms::Button^  button_4;
	private: System::Windows::Forms::Button^  button_26;
	private: System::Windows::Forms::Button^  button_62;
	private: System::Windows::Forms::Button^  button_48;
	private: System::Windows::Forms::Button^  button_13;
	private: System::Windows::Forms::Button^  button_31;


	private: System::Windows::Forms::Button^  button_9;

	private: System::Windows::Forms::Button^  button_2;

	private: System::Windows::Forms::Button^  button_35;

	private: System::Windows::Forms::Button^  button_71;

	private: System::Windows::Forms::Button^  button_76;

	private: System::Windows::Forms::Button^  button_72;

	private: System::Windows::Forms::Button^  button_40;

	private: System::Windows::Forms::Button^  button_16;

	private: System::Windows::Forms::Button^  button_44;

	private: System::Windows::Forms::Button^  button_6;

	private: System::Windows::Forms::Button^  button_32;

	private: System::Windows::Forms::Button^  button_24;

	private: System::Windows::Forms::Button^  button_46;
	private: System::Windows::Forms::Button^  button_19;
	private: System::Windows::Forms::Button^  button_14;
	private: System::Windows::Forms::Button^  button_42;
	private: System::Windows::Forms::Button^  button_41;
	private: System::Windows::Forms::Button^  button_56;


















	private: System::Windows::Forms::Button^  button_53;

	private: System::Windows::Forms::Button^  button_51;

	private: System::Windows::Forms::Button^  button_23;

	private: System::Windows::Forms::Button^  button_63;

	private: System::Windows::Forms::Button^  button_7;
	private: System::Windows::Forms::Button^  button_30;
	private: System::Windows::Forms::Button^  button_77;



	private: System::Windows::Forms::Button^  button_45;

	private: System::Windows::Forms::Button^  button_65;

	private: System::Windows::Forms::Button^  button_38;

	private: System::Windows::Forms::Button^  button_52;

	private: System::Windows::Forms::Button^  button_34;

	private: System::Windows::Forms::Button^  button_49;
	private: System::Windows::Forms::Button^  button_58;


	private: System::Windows::Forms::Button^  button_0;

	private: System::Windows::Forms::Button^  button_47;

	private: System::Windows::Forms::Button^  button_18;

	private: System::Windows::Forms::Button^  button_60;

	private: System::Windows::Forms::Button^  button_78;

	private: System::Windows::Forms::Button^  button_69;

	private: System::Windows::Forms::Button^  button_70;

	private: System::Windows::Forms::Button^  button_64;

	private: System::Windows::Forms::Button^  button_15;

	private: System::Windows::Forms::Button^  button_21;
	private: System::Windows::Forms::Button^  button_36;


	private: System::Windows::Forms::Button^  button_55;
	private: System::Windows::Forms::Button^  button_73;
	private: System::Windows::Forms::Button^  button_43;
	private: System::Windows::Forms::Button^  button_12;
	private: System::Windows::Forms::Button^  button_3;
	private: System::Windows::Forms::Button^  button_27;
	private: System::Windows::Forms::Button^  button_25;
	private: System::Windows::Forms::Button^  button_11;
	private: System::Windows::Forms::Button^  button_74;
	private: System::Windows::Forms::Button^  button_61;
	private: System::Windows::Forms::Button^  button_67;
	private: System::Windows::Forms::Button^  button_57;



	public: 
			MainWindow(spvec_spNode stations)
		{
			InitializeComponent(stations);  //stations is an argument to build the comboboxes
			_stations=&stations;
			_startChoice= gcnew String("y");
			_mapStart=gcnew String("0");;
			_mapEnd=gcnew String("0");;

		}

		spvec_spNode *_stations; // pointer mandatory in a managed class
		String ^ _startChoice;  //startChoice should be a boolean, but it is difficult to make it word in this managed class
								//  ="y" when the starting station is being chosen, "n" when it is the ending station
		String ^ _mapStart;   //stocks the value of the button clicked on the map when _startChoice="y"
		String ^ _mapEnd;      //stocks the value of the button clicked on the map when _startChoice="n"
		

	

	protected:

		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  mainTitle;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  plan_interactif;
	private: System::Windows::Forms::Button^  recherche_itin;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  retour_accueil;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  pref_combo;
	private: System::Windows::Forms::RadioButton^  corr_combo;


	private: System::Windows::Forms::RadioButton^  court_combo;

	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  retour_accueil2;
	private: System::Windows::Forms::GroupBox^  pref_map;
	private: System::Windows::Forms::RadioButton^  corr_map;



	private: System::Windows::Forms::RadioButton^  court_map;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  nouvel_itin;

	private: System::Windows::Forms::Button^  calculer_map;

	private: System::Windows::Forms::Button^  valider_depart;


	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  calculer_combo;






	protected: 

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
		void InitializeComponent(spvec_spNode stations)
		//void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->plan_interactif = (gcnew System::Windows::Forms::Button());
			this->recherche_itin = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBoxItin = (gcnew System::Windows::Forms::TextBox());
			this->calculer_combo = (gcnew System::Windows::Forms::Button());
			this->retour_accueil = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pref_combo = (gcnew System::Windows::Forms::GroupBox());
			this->corr_combo = (gcnew System::Windows::Forms::RadioButton());
			this->court_combo = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button_67 = (gcnew System::Windows::Forms::Button());
			this->button_31 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_35 = (gcnew System::Windows::Forms::Button());
			this->button_71 = (gcnew System::Windows::Forms::Button());
			this->button_76 = (gcnew System::Windows::Forms::Button());
			this->button_72 = (gcnew System::Windows::Forms::Button());
			this->button_40 = (gcnew System::Windows::Forms::Button());
			this->button_16 = (gcnew System::Windows::Forms::Button());
			this->button_44 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_32 = (gcnew System::Windows::Forms::Button());
			this->button_24 = (gcnew System::Windows::Forms::Button());
			this->button_46 = (gcnew System::Windows::Forms::Button());
			this->button_19 = (gcnew System::Windows::Forms::Button());
			this->button_14 = (gcnew System::Windows::Forms::Button());
			this->button_42 = (gcnew System::Windows::Forms::Button());
			this->button_41 = (gcnew System::Windows::Forms::Button());
			this->button_56 = (gcnew System::Windows::Forms::Button());
			this->button_53 = (gcnew System::Windows::Forms::Button());
			this->button_51 = (gcnew System::Windows::Forms::Button());
			this->button_23 = (gcnew System::Windows::Forms::Button());
			this->button_63 = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_30 = (gcnew System::Windows::Forms::Button());
			this->button_77 = (gcnew System::Windows::Forms::Button());
			this->button_45 = (gcnew System::Windows::Forms::Button());
			this->button_65 = (gcnew System::Windows::Forms::Button());
			this->button_38 = (gcnew System::Windows::Forms::Button());
			this->button_52 = (gcnew System::Windows::Forms::Button());
			this->button_34 = (gcnew System::Windows::Forms::Button());
			this->button_49 = (gcnew System::Windows::Forms::Button());
			this->button_58 = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_47 = (gcnew System::Windows::Forms::Button());
			this->button_18 = (gcnew System::Windows::Forms::Button());
			this->button_60 = (gcnew System::Windows::Forms::Button());
			this->button_78 = (gcnew System::Windows::Forms::Button());
			this->button_69 = (gcnew System::Windows::Forms::Button());
			this->button_70 = (gcnew System::Windows::Forms::Button());
			this->button_64 = (gcnew System::Windows::Forms::Button());
			this->button_15 = (gcnew System::Windows::Forms::Button());
			this->button_21 = (gcnew System::Windows::Forms::Button());
			this->button_36 = (gcnew System::Windows::Forms::Button());
			this->button_55 = (gcnew System::Windows::Forms::Button());
			this->button_73 = (gcnew System::Windows::Forms::Button());
			this->button_43 = (gcnew System::Windows::Forms::Button());
			this->button_12 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_27 = (gcnew System::Windows::Forms::Button());
			this->button_25 = (gcnew System::Windows::Forms::Button());
			this->button_11 = (gcnew System::Windows::Forms::Button());
			this->button_74 = (gcnew System::Windows::Forms::Button());
			this->button_61 = (gcnew System::Windows::Forms::Button());
			this->button_13 = (gcnew System::Windows::Forms::Button());
			this->button_33 = (gcnew System::Windows::Forms::Button());
			this->button_20 = (gcnew System::Windows::Forms::Button());
			this->button_54 = (gcnew System::Windows::Forms::Button());
			this->button_37 = (gcnew System::Windows::Forms::Button());
			this->button_59 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_28 = (gcnew System::Windows::Forms::Button());
			this->button_22 = (gcnew System::Windows::Forms::Button());
			this->button_75 = (gcnew System::Windows::Forms::Button());
			this->button_50 = (gcnew System::Windows::Forms::Button());
			this->button_39 = (gcnew System::Windows::Forms::Button());
			this->button_29 = (gcnew System::Windows::Forms::Button());
			this->button_68 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_26 = (gcnew System::Windows::Forms::Button());
			this->button_62 = (gcnew System::Windows::Forms::Button());
			this->button_48 = (gcnew System::Windows::Forms::Button());
			this->button_57 = (gcnew System::Windows::Forms::Button());
			this->button_66 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_10 = (gcnew System::Windows::Forms::Button());
			this->retour_accueil2 = (gcnew System::Windows::Forms::Button());
			this->pref_map = (gcnew System::Windows::Forms::GroupBox());
			this->corr_map = (gcnew System::Windows::Forms::RadioButton());
			this->court_map = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->nouvel_itin = (gcnew System::Windows::Forms::Button());
			this->calculer_map = (gcnew System::Windows::Forms::Button());
			this->valider_depart = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->pref_combo->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->pref_map->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->mainTitle->AutoSize = true;
			this->mainTitle->BackColor = System::Drawing::Color::Transparent;
			this->mainTitle->Cursor = System::Windows::Forms::Cursors::Default;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"dcti10", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainTitle->Location = System::Drawing::Point(238, 34);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(819, 42);
			this->mainTitle->TabIndex = 1;
			this->mainTitle->Text = L"Welcome, Please select a route . . .";
			this->mainTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->HotTrack = true;
			this->tabControl1->Location = System::Drawing::Point(70, 142);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1148, 755);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->plan_interactif);
			this->tabPage1->Controls->Add(this->recherche_itin);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Shruti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 27);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1140, 724);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"  Homepage  ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// plan_interactif
			// 
			this->plan_interactif->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plan_interactif->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->plan_interactif->Location = System::Drawing::Point(744, 485);
			this->plan_interactif->Name = L"plan_interactif";
			this->plan_interactif->Size = System::Drawing::Size(208, 65);
			this->plan_interactif->TabIndex = 3;
			this->plan_interactif->Text = L"  Interactive Map  ";
			this->plan_interactif->UseVisualStyleBackColor = true;
			this->plan_interactif->Click += gcnew System::EventHandler(this, &MainWindow::plan_interactif_Click);
			// 
			// recherche_itin
			// 
			this->recherche_itin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->recherche_itin->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->recherche_itin->Location = System::Drawing::Point(188, 484);
			this->recherche_itin->Name = L"recherche_itin";
			this->recherche_itin->Size = System::Drawing::Size(238, 65);
			this->recherche_itin->TabIndex = 2;
			this->recherche_itin->Text = L"  Route Search  ";
			this->recherche_itin->UseVisualStyleBackColor = true;
			this->recherche_itin->Click += gcnew System::EventHandler(this, &MainWindow::recherche_itin_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(721, 161);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(244, 219);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(189, 157);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(229, 226);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->textBoxItin);
			this->tabPage2->Controls->Add(this->calculer_combo);
			this->tabPage2->Controls->Add(this->retour_accueil);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->pref_combo);
			this->tabPage2->Location = System::Drawing::Point(4, 27);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1140, 724);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"  Route Search  ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBoxItin
			// 
			this->textBoxItin->AcceptsReturn = true;
			this->textBoxItin->AcceptsTab = true;
			this->textBoxItin->Location = System::Drawing::Point(285, 464);
			this->textBoxItin->Multiline = true;
			this->textBoxItin->Name = L"textBoxItin";
			this->textBoxItin->ReadOnly = true;
			this->textBoxItin->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxItin->Size = System::Drawing::Size(578, 174);
			this->textBoxItin->TabIndex = 6;
			// 
			// calculer_combo
			// 
			this->calculer_combo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->calculer_combo->FlatAppearance->BorderSize = 0;
			this->calculer_combo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->calculer_combo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->calculer_combo->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->calculer_combo->Location = System::Drawing::Point(489, 396);
			this->calculer_combo->Name = L"calculer_combo";
			this->calculer_combo->Size = System::Drawing::Size(169, 44);
			this->calculer_combo->TabIndex = 5;
			this->calculer_combo->Text = L" Calculate your route ";
			this->calculer_combo->UseVisualStyleBackColor = true;
			this->calculer_combo->Click += gcnew System::EventHandler(this, &MainWindow::calculer_combo_Click);
			// 
			// retour_accueil
			// 
			this->retour_accueil->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->retour_accueil->FlatAppearance->BorderSize = 0;
			this->retour_accueil->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->retour_accueil->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->retour_accueil->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->retour_accueil->Location = System::Drawing::Point(944, 660);
			this->retour_accueil->Name = L"retour_accueil";
			this->retour_accueil->Size = System::Drawing::Size(169, 44);
			this->retour_accueil->TabIndex = 4;
			this->retour_accueil->Text = L" Back to homepage ";
			this->retour_accueil->UseVisualStyleBackColor = true;
			this->retour_accueil->Click += gcnew System::EventHandler(this, &MainWindow::retour_accueil_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(227, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(698, 193);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Your route ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(434, 99);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(203, 26);
			this->comboBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(462, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Arrival:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Departure:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(58, 99);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 26);
			this->comboBox1->TabIndex = 0;

			for (unsigned int i=0; i<(*stations).size(); i++) //creating the comboboxes
			{
				String^ sysstr = gcnew String((*stations)[i]->Get_name().c_str());
				this->comboBox1->Items->Add(sysstr);  //adding the name of the stations to each combobox
				this->comboBox2->Items->Add(sysstr);
			}	
			// 
			// pref_combo
			// 
			this->pref_combo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pref_combo->BackColor = System::Drawing::Color::Transparent;
			this->pref_combo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pref_combo->Controls->Add(this->corr_combo);
			this->pref_combo->Controls->Add(this->court_combo);
			this->pref_combo->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pref_combo->Location = System::Drawing::Point(285, 269);
			this->pref_combo->Name = L"pref_combo";
			this->pref_combo->Size = System::Drawing::Size(579, 90);
			this->pref_combo->TabIndex = 2;
			this->pref_combo->TabStop = false;
			this->pref_combo->Text = L" Route preferences ";
			// 
			// corr_combo
			// 
			this->corr_combo->AutoSize = true;
			this->corr_combo->Location = System::Drawing::Point(314, 42);
			this->corr_combo->Name = L"corr_combo";
			this->corr_combo->Size = System::Drawing::Size(207, 22);
			this->corr_combo->TabIndex = 3;
			this->corr_combo->TabStop = true;
			this->corr_combo->Text = L" Least changes";
			this->corr_combo->UseVisualStyleBackColor = true;
			// 
			// court_combo
			// 
			this->court_combo->AutoSize = true;
			this->court_combo->Checked = true;
			this->court_combo->Location = System::Drawing::Point(63, 42);
			this->court_combo->Name = L"court_combo";
			this->court_combo->Size = System::Drawing::Size(107, 22);
			this->court_combo->TabIndex = 2;
			this->court_combo->TabStop = true;
			this->court_combo->Text = L" Fastest";
			this->court_combo->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->button_67);
			this->tabPage3->Controls->Add(this->button_31);
			this->tabPage3->Controls->Add(this->button_9);
			this->tabPage3->Controls->Add(this->button_2);
			this->tabPage3->Controls->Add(this->button_35);
			this->tabPage3->Controls->Add(this->button_71);
			this->tabPage3->Controls->Add(this->button_76);
			this->tabPage3->Controls->Add(this->button_72);
			this->tabPage3->Controls->Add(this->button_40);
			this->tabPage3->Controls->Add(this->button_16);
			this->tabPage3->Controls->Add(this->button_44);
			this->tabPage3->Controls->Add(this->button_6);
			this->tabPage3->Controls->Add(this->button_32);
			this->tabPage3->Controls->Add(this->button_24);
			this->tabPage3->Controls->Add(this->button_46);
			this->tabPage3->Controls->Add(this->button_19);
			this->tabPage3->Controls->Add(this->button_14);
			this->tabPage3->Controls->Add(this->button_42);
			this->tabPage3->Controls->Add(this->button_41);
			this->tabPage3->Controls->Add(this->button_56);
			this->tabPage3->Controls->Add(this->button_53);
			this->tabPage3->Controls->Add(this->button_51);
			this->tabPage3->Controls->Add(this->button_23);
			this->tabPage3->Controls->Add(this->button_63);
			this->tabPage3->Controls->Add(this->button_7);
			this->tabPage3->Controls->Add(this->button_30);
			this->tabPage3->Controls->Add(this->button_77);
			this->tabPage3->Controls->Add(this->button_45);
			this->tabPage3->Controls->Add(this->button_65);
			this->tabPage3->Controls->Add(this->button_38);
			this->tabPage3->Controls->Add(this->button_52);
			this->tabPage3->Controls->Add(this->button_34);
			this->tabPage3->Controls->Add(this->button_49);
			this->tabPage3->Controls->Add(this->button_58);
			this->tabPage3->Controls->Add(this->button_0);
			this->tabPage3->Controls->Add(this->button_47);
			this->tabPage3->Controls->Add(this->button_18);
			this->tabPage3->Controls->Add(this->button_60);
			this->tabPage3->Controls->Add(this->button_78);
			this->tabPage3->Controls->Add(this->button_69);
			this->tabPage3->Controls->Add(this->button_70);
			this->tabPage3->Controls->Add(this->button_64);
			this->tabPage3->Controls->Add(this->button_15);
			this->tabPage3->Controls->Add(this->button_21);
			this->tabPage3->Controls->Add(this->button_36);
			this->tabPage3->Controls->Add(this->button_55);
			this->tabPage3->Controls->Add(this->button_73);
			this->tabPage3->Controls->Add(this->button_43);
			this->tabPage3->Controls->Add(this->button_12);
			this->tabPage3->Controls->Add(this->button_3);
			this->tabPage3->Controls->Add(this->button_27);
			this->tabPage3->Controls->Add(this->button_25);
			this->tabPage3->Controls->Add(this->button_11);
			this->tabPage3->Controls->Add(this->button_74);
			this->tabPage3->Controls->Add(this->button_61);
			this->tabPage3->Controls->Add(this->button_13);
			this->tabPage3->Controls->Add(this->button_33);
			this->tabPage3->Controls->Add(this->button_20);
			this->tabPage3->Controls->Add(this->button_54);
			this->tabPage3->Controls->Add(this->button_37);
			this->tabPage3->Controls->Add(this->button_59);
			this->tabPage3->Controls->Add(this->button_1);
			this->tabPage3->Controls->Add(this->button_8);
			this->tabPage3->Controls->Add(this->button_28);
			this->tabPage3->Controls->Add(this->button_22);
			this->tabPage3->Controls->Add(this->button_75);
			this->tabPage3->Controls->Add(this->button_50);
			this->tabPage3->Controls->Add(this->button_39);
			this->tabPage3->Controls->Add(this->button_29);
			this->tabPage3->Controls->Add(this->button_68);
			this->tabPage3->Controls->Add(this->button_4);
			this->tabPage3->Controls->Add(this->button_26);
			this->tabPage3->Controls->Add(this->button_62);
			this->tabPage3->Controls->Add(this->button_48);
			this->tabPage3->Controls->Add(this->button_57);
			this->tabPage3->Controls->Add(this->button_66);
			this->tabPage3->Controls->Add(this->button_5);
			this->tabPage3->Controls->Add(this->button_10);
			this->tabPage3->Controls->Add(this->retour_accueil2);
			this->tabPage3->Controls->Add(this->pref_map);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->pictureBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 27);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1140, 724);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"  Interactive Map  ";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button_67
			// 
			this->button_67->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_67->BackColor = System::Drawing::Color::Purple;
			this->button_67->FlatAppearance->BorderSize = 0;
			this->button_67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_67->Location = System::Drawing::Point(458, 399);
			this->button_67->Name = L"button_67";
			this->button_67->Size = System::Drawing::Size(7, 7);
			this->button_67->TabIndex = 84;
			this->button_67->Text = L"button14";
			this->button_67->UseVisualStyleBackColor = false;
			this->button_67->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_31
			// 
			this->button_31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_31->BackColor = System::Drawing::Color::Goldenrod;
			this->button_31->FlatAppearance->BorderSize = 0;
			this->button_31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_31->Location = System::Drawing::Point(184, 482);
			this->button_31->Name = L"button_31";
			this->button_31->Size = System::Drawing::Size(7, 7);
			this->button_31->TabIndex = 83;
			this->button_31->Text = L"button67";
			this->button_31->UseVisualStyleBackColor = false;
			this->button_31->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_9
			// 
			this->button_9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_9->BackColor = System::Drawing::Color::Goldenrod;
			this->button_9->FlatAppearance->BorderSize = 0;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->Location = System::Drawing::Point(211, 476);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(7, 7);
			this->button_9->TabIndex = 82;
			this->button_9->Text = L"button66";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_2
			// 
			this->button_2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_2->BackColor = System::Drawing::Color::Goldenrod;
			this->button_2->FlatAppearance->BorderSize = 0;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->Location = System::Drawing::Point(225, 462);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(7, 7);
			this->button_2->TabIndex = 81;
			this->button_2->Text = L"button65";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_35
			// 
			this->button_35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_35->BackColor = System::Drawing::Color::Goldenrod;
			this->button_35->FlatAppearance->BorderSize = 0;
			this->button_35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_35->Location = System::Drawing::Point(245, 451);
			this->button_35->Name = L"button_35";
			this->button_35->Size = System::Drawing::Size(7, 7);
			this->button_35->TabIndex = 80;
			this->button_35->Text = L"button64";
			this->button_35->UseVisualStyleBackColor = false;
			this->button_35->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_71
			// 
			this->button_71->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_71->BackColor = System::Drawing::Color::Goldenrod;
			this->button_71->FlatAppearance->BorderSize = 0;
			this->button_71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_71->Location = System::Drawing::Point(304, 475);
			this->button_71->Name = L"button_71";
			this->button_71->Size = System::Drawing::Size(7, 7);
			this->button_71->TabIndex = 79;
			this->button_71->Text = L"button63";
			this->button_71->UseVisualStyleBackColor = false;
			this->button_71->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_76
			// 
			this->button_76->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_76->BackColor = System::Drawing::Color::Goldenrod;
			this->button_76->FlatAppearance->BorderSize = 0;
			this->button_76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_76->Location = System::Drawing::Point(356, 449);
			this->button_76->Name = L"button_76";
			this->button_76->Size = System::Drawing::Size(7, 7);
			this->button_76->TabIndex = 78;
			this->button_76->Text = L"button62";
			this->button_76->UseVisualStyleBackColor = false;
			this->button_76->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_72
			// 
			this->button_72->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_72->BackColor = System::Drawing::Color::Goldenrod;
			this->button_72->FlatAppearance->BorderSize = 0;
			this->button_72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_72->Location = System::Drawing::Point(375, 430);
			this->button_72->Name = L"button_72";
			this->button_72->Size = System::Drawing::Size(7, 7);
			this->button_72->TabIndex = 77;
			this->button_72->Text = L"button61";
			this->button_72->UseVisualStyleBackColor = false;
			this->button_72->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_40
			// 
			this->button_40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_40->BackColor = System::Drawing::Color::Goldenrod;
			this->button_40->FlatAppearance->BorderSize = 0;
			this->button_40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_40->Location = System::Drawing::Point(422, 419);
			this->button_40->Name = L"button_40";
			this->button_40->Size = System::Drawing::Size(7, 7);
			this->button_40->TabIndex = 76;
			this->button_40->Text = L"button60";
			this->button_40->UseVisualStyleBackColor = false;
			this->button_40->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_16
			// 
			this->button_16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_16->BackColor = System::Drawing::Color::Goldenrod;
			this->button_16->FlatAppearance->BorderSize = 0;
			this->button_16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_16->Location = System::Drawing::Point(472, 419);
			this->button_16->Name = L"button_16";
			this->button_16->Size = System::Drawing::Size(7, 7);
			this->button_16->TabIndex = 75;
			this->button_16->Text = L"button59";
			this->button_16->UseVisualStyleBackColor = false;
			this->button_16->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_44
			// 
			this->button_44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_44->BackColor = System::Drawing::Color::Goldenrod;
			this->button_44->FlatAppearance->BorderSize = 0;
			this->button_44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_44->Location = System::Drawing::Point(496, 434);
			this->button_44->Name = L"button_44";
			this->button_44->Size = System::Drawing::Size(7, 7);
			this->button_44->TabIndex = 74;
			this->button_44->Text = L"button58";
			this->button_44->UseVisualStyleBackColor = false;
			this->button_44->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_6
			// 
			this->button_6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_6->BackColor = System::Drawing::Color::Goldenrod;
			this->button_6->FlatAppearance->BorderSize = 0;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6->Location = System::Drawing::Point(513, 450);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(7, 7);
			this->button_6->TabIndex = 73;
			this->button_6->Text = L"button57";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_32
			// 
			this->button_32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_32->BackColor = System::Drawing::Color::Goldenrod;
			this->button_32->FlatAppearance->BorderSize = 0;
			this->button_32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_32->Location = System::Drawing::Point(540, 458);
			this->button_32->Name = L"button_32";
			this->button_32->Size = System::Drawing::Size(7, 7);
			this->button_32->TabIndex = 72;
			this->button_32->Text = L"button56";
			this->button_32->UseVisualStyleBackColor = false;
			this->button_32->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_24
			// 
			this->button_24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_24->BackColor = System::Drawing::Color::Goldenrod;
			this->button_24->FlatAppearance->BorderSize = 0;
			this->button_24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_24->Location = System::Drawing::Point(590, 486);
			this->button_24->Name = L"button_24";
			this->button_24->Size = System::Drawing::Size(7, 7);
			this->button_24->TabIndex = 71;
			this->button_24->Text = L"button55";
			this->button_24->UseVisualStyleBackColor = false;
			this->button_24->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_46
			// 
			this->button_46->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_46->BackColor = System::Drawing::Color::Silver;
			this->button_46->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_46->FlatAppearance->BorderSize = 0;
			this->button_46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_46->Location = System::Drawing::Point(393, 496);
			this->button_46->Name = L"button_46";
			this->button_46->Size = System::Drawing::Size(15, 15);
			this->button_46->TabIndex = 70;
			this->button_46->UseVisualStyleBackColor = false;
			this->button_46->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_19
			// 
			this->button_19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_19->BackColor = System::Drawing::Color::Silver;
			this->button_19->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_19->FlatAppearance->BorderSize = 0;
			this->button_19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_19->Location = System::Drawing::Point(336, 467);
			this->button_19->Name = L"button_19";
			this->button_19->Size = System::Drawing::Size(6, 10);
			this->button_19->TabIndex = 69;
			this->button_19->Text = L"button53";
			this->button_19->UseVisualStyleBackColor = false;
			this->button_19->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_14
			// 
			this->button_14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_14->BackColor = System::Drawing::Color::PowderBlue;
			this->button_14->FlatAppearance->BorderSize = 0;
			this->button_14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_14->Location = System::Drawing::Point(326, 675);
			this->button_14->Name = L"button_14";
			this->button_14->Size = System::Drawing::Size(7, 7);
			this->button_14->TabIndex = 68;
			this->button_14->Text = L"button_14";
			this->button_14->UseVisualStyleBackColor = false;
			this->button_14->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_42
			// 
			this->button_42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_42->BackColor = System::Drawing::Color::PowderBlue;
			this->button_42->FlatAppearance->BorderSize = 0;
			this->button_42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_42->Location = System::Drawing::Point(326, 650);
			this->button_42->Name = L"button_42";
			this->button_42->Size = System::Drawing::Size(7, 7);
			this->button_42->TabIndex = 67;
			this->button_42->Text = L"button_42";
			this->button_42->UseVisualStyleBackColor = false;
			this->button_42->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_41
			// 
			this->button_41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_41->BackColor = System::Drawing::Color::PowderBlue;
			this->button_41->FlatAppearance->BorderSize = 0;
			this->button_41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_41->Location = System::Drawing::Point(326, 623);
			this->button_41->Name = L"button_41";
			this->button_41->Size = System::Drawing::Size(7, 7);
			this->button_41->TabIndex = 66;
			this->button_41->Text = L"button_41";
			this->button_41->UseVisualStyleBackColor = false;
			this->button_41->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_56
			// 
			this->button_56->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_56->BackColor = System::Drawing::Color::PowderBlue;
			this->button_56->FlatAppearance->BorderSize = 0;
			this->button_56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_56->Location = System::Drawing::Point(338, 599);
			this->button_56->Name = L"button_56";
			this->button_56->Size = System::Drawing::Size(7, 7);
			this->button_56->TabIndex = 65;
			this->button_56->Text = L"button_56";
			this->button_56->UseVisualStyleBackColor = false;
			this->button_56->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_53
			// 
			this->button_53->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_53->BackColor = System::Drawing::Color::PowderBlue;
			this->button_53->FlatAppearance->BorderSize = 0;
			this->button_53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_53->Location = System::Drawing::Point(362, 575);
			this->button_53->Name = L"button_53";
			this->button_53->Size = System::Drawing::Size(7, 7);
			this->button_53->TabIndex = 64;
			this->button_53->Text = L"button_53";
			this->button_53->UseVisualStyleBackColor = false;
			this->button_53->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_51
			// 
			this->button_51->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_51->BackColor = System::Drawing::Color::PowderBlue;
			this->button_51->FlatAppearance->BorderSize = 0;
			this->button_51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_51->Location = System::Drawing::Point(383, 555);
			this->button_51->Name = L"button_51";
			this->button_51->Size = System::Drawing::Size(7, 7);
			this->button_51->TabIndex = 63;
			this->button_51->Text = L"button47";
			this->button_51->UseVisualStyleBackColor = false;
			this->button_51->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_23
			// 
			this->button_23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_23->BackColor = System::Drawing::Color::PowderBlue;
			this->button_23->FlatAppearance->BorderSize = 0;
			this->button_23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_23->Location = System::Drawing::Point(397, 534);
			this->button_23->Name = L"button_23";
			this->button_23->Size = System::Drawing::Size(7, 7);
			this->button_23->TabIndex = 62;
			this->button_23->Text = L"button46";
			this->button_23->UseVisualStyleBackColor = false;
			this->button_23->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_63
			// 
			this->button_63->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_63->BackColor = System::Drawing::Color::PowderBlue;
			this->button_63->FlatAppearance->BorderSize = 0;
			this->button_63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_63->Location = System::Drawing::Point(305, 438);
			this->button_63->Name = L"button_63";
			this->button_63->Size = System::Drawing::Size(7, 7);
			this->button_63->TabIndex = 61;
			this->button_63->Text = L"button45";
			this->button_63->UseVisualStyleBackColor = false;
			this->button_63->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_7
			// 
			this->button_7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_7->BackColor = System::Drawing::Color::Silver;
			this->button_7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_7->FlatAppearance->BorderSize = 0;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->Location = System::Drawing::Point(293, 307);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(6, 10);
			this->button_7->TabIndex = 60;
			this->button_7->Text = L"button18";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_30
			// 
			this->button_30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_30->BackColor = System::Drawing::Color::PowderBlue;
			this->button_30->FlatAppearance->BorderSize = 0;
			this->button_30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_30->Location = System::Drawing::Point(292, 360);
			this->button_30->Name = L"button_30";
			this->button_30->Size = System::Drawing::Size(7, 7);
			this->button_30->TabIndex = 59;
			this->button_30->Text = L"button44";
			this->button_30->UseVisualStyleBackColor = false;
			this->button_30->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_77
			// 
			this->button_77->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_77->BackColor = System::Drawing::Color::PowderBlue;
			this->button_77->FlatAppearance->BorderSize = 0;
			this->button_77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_77->Location = System::Drawing::Point(292, 395);
			this->button_77->Name = L"button_77";
			this->button_77->Size = System::Drawing::Size(7, 7);
			this->button_77->TabIndex = 58;
			this->button_77->Text = L"button43";
			this->button_77->UseVisualStyleBackColor = false;
			this->button_77->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_45
			// 
			this->button_45->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_45->BackColor = System::Drawing::Color::PowderBlue;
			this->button_45->FlatAppearance->BorderSize = 0;
			this->button_45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_45->Location = System::Drawing::Point(322, 248);
			this->button_45->Name = L"button_45";
			this->button_45->Size = System::Drawing::Size(7, 7);
			this->button_45->TabIndex = 57;
			this->button_45->Text = L"button42";
			this->button_45->UseVisualStyleBackColor = false;
			this->button_45->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_65
			// 
			this->button_65->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_65->BackColor = System::Drawing::Color::PowderBlue;
			this->button_65->FlatAppearance->BorderSize = 0;
			this->button_65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_65->Location = System::Drawing::Point(356, 214);
			this->button_65->Name = L"button_65";
			this->button_65->Size = System::Drawing::Size(7, 7);
			this->button_65->TabIndex = 56;
			this->button_65->Text = L"button41";
			this->button_65->UseVisualStyleBackColor = false;
			this->button_65->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_38
			// 
			this->button_38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_38->BackColor = System::Drawing::Color::PowderBlue;
			this->button_38->FlatAppearance->BorderSize = 0;
			this->button_38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_38->Location = System::Drawing::Point(356, 160);
			this->button_38->Name = L"button_38";
			this->button_38->Size = System::Drawing::Size(7, 7);
			this->button_38->TabIndex = 55;
			this->button_38->Text = L"button40";
			this->button_38->UseVisualStyleBackColor = false;
			this->button_38->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_52
			// 
			this->button_52->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_52->BackColor = System::Drawing::Color::PowderBlue;
			this->button_52->FlatAppearance->BorderSize = 0;
			this->button_52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_52->Location = System::Drawing::Point(356, 127);
			this->button_52->Name = L"button_52";
			this->button_52->Size = System::Drawing::Size(7, 7);
			this->button_52->TabIndex = 54;
			this->button_52->Text = L"button39";
			this->button_52->UseVisualStyleBackColor = false;
			this->button_52->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_34
			// 
			this->button_34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_34->BackColor = System::Drawing::Color::PowderBlue;
			this->button_34->FlatAppearance->BorderSize = 0;
			this->button_34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_34->Location = System::Drawing::Point(356, 104);
			this->button_34->Name = L"button_34";
			this->button_34->Size = System::Drawing::Size(7, 7);
			this->button_34->TabIndex = 53;
			this->button_34->Text = L"button38";
			this->button_34->UseVisualStyleBackColor = false;
			this->button_34->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_49
			// 
			this->button_49->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_49->BackColor = System::Drawing::Color::Silver;
			this->button_49->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_49->FlatAppearance->BorderSize = 0;
			this->button_49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_49->Location = System::Drawing::Point(451, 415);
			this->button_49->Name = L"button_49";
			this->button_49->Size = System::Drawing::Size(6, 10);
			this->button_49->TabIndex = 52;
			this->button_49->Text = L"button37";
			this->button_49->UseVisualStyleBackColor = false;
			this->button_49->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_58
			// 
			this->button_58->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_58->BackColor = System::Drawing::Color::Purple;
			this->button_58->FlatAppearance->BorderSize = 0;
			this->button_58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_58->Location = System::Drawing::Point(436, 601);
			this->button_58->Name = L"button_58";
			this->button_58->Size = System::Drawing::Size(7, 7);
			this->button_58->TabIndex = 51;
			this->button_58->Text = L"button36";
			this->button_58->UseVisualStyleBackColor = false;
			this->button_58->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_0
			// 
			this->button_0->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_0->BackColor = System::Drawing::Color::Purple;
			this->button_0->FlatAppearance->BorderSize = 0;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->Location = System::Drawing::Point(454, 584);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(7, 7);
			this->button_0->TabIndex = 50;
			this->button_0->Text = L"button35";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_47
			// 
			this->button_47->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_47->BackColor = System::Drawing::Color::Purple;
			this->button_47->FlatAppearance->BorderSize = 0;
			this->button_47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_47->Location = System::Drawing::Point(465, 556);
			this->button_47->Name = L"button_47";
			this->button_47->Size = System::Drawing::Size(7, 7);
			this->button_47->TabIndex = 49;
			this->button_47->Text = L"button34";
			this->button_47->UseVisualStyleBackColor = false;
			this->button_47->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_18
			// 
			this->button_18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_18->BackColor = System::Drawing::Color::Purple;
			this->button_18->FlatAppearance->BorderSize = 0;
			this->button_18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_18->Location = System::Drawing::Point(464, 528);
			this->button_18->Name = L"button_18";
			this->button_18->Size = System::Drawing::Size(7, 7);
			this->button_18->TabIndex = 48;
			this->button_18->Text = L"button33";
			this->button_18->UseVisualStyleBackColor = false;
			this->button_18->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_60
			// 
			this->button_60->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_60->BackColor = System::Drawing::Color::Purple;
			this->button_60->FlatAppearance->BorderSize = 0;
			this->button_60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_60->Location = System::Drawing::Point(452, 510);
			this->button_60->Name = L"button_60";
			this->button_60->Size = System::Drawing::Size(7, 7);
			this->button_60->TabIndex = 47;
			this->button_60->Text = L"button32";
			this->button_60->UseVisualStyleBackColor = false;
			this->button_60->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_78
			// 
			this->button_78->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_78->BackColor = System::Drawing::Color::Purple;
			this->button_78->FlatAppearance->BorderSize = 0;
			this->button_78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_78->Location = System::Drawing::Point(430, 500);
			this->button_78->Name = L"button_78";
			this->button_78->Size = System::Drawing::Size(7, 7);
			this->button_78->TabIndex = 46;
			this->button_78->Text = L"button31";
			this->button_78->UseVisualStyleBackColor = false;
			this->button_78->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_69
			// 
			this->button_69->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_69->BackColor = System::Drawing::Color::Purple;
			this->button_69->FlatAppearance->BorderSize = 0;
			this->button_69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_69->Location = System::Drawing::Point(402, 468);
			this->button_69->Name = L"button_69";
			this->button_69->Size = System::Drawing::Size(7, 7);
			this->button_69->TabIndex = 45;
			this->button_69->Text = L"button30";
			this->button_69->UseVisualStyleBackColor = false;
			this->button_69->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_70
			// 
			this->button_70->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_70->BackColor = System::Drawing::Color::Purple;
			this->button_70->FlatAppearance->BorderSize = 0;
			this->button_70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_70->Location = System::Drawing::Point(402, 438);
			this->button_70->Name = L"button_70";
			this->button_70->Size = System::Drawing::Size(7, 7);
			this->button_70->TabIndex = 44;
			this->button_70->Text = L"button29";
			this->button_70->UseVisualStyleBackColor = false;
			this->button_70->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_64
			// 
			this->button_64->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_64->BackColor = System::Drawing::Color::Purple;
			this->button_64->FlatAppearance->BorderSize = 0;
			this->button_64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_64->Location = System::Drawing::Point(412, 413);
			this->button_64->Name = L"button_64";
			this->button_64->Size = System::Drawing::Size(7, 7);
			this->button_64->TabIndex = 43;
			this->button_64->Text = L"button28";
			this->button_64->UseVisualStyleBackColor = false;
			this->button_64->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_15
			// 
			this->button_15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_15->BackColor = System::Drawing::Color::Purple;
			this->button_15->FlatAppearance->BorderSize = 0;
			this->button_15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_15->Location = System::Drawing::Point(470, 366);
			this->button_15->Name = L"button_15";
			this->button_15->Size = System::Drawing::Size(7, 7);
			this->button_15->TabIndex = 42;
			this->button_15->Text = L"button14";
			this->button_15->UseVisualStyleBackColor = false;
			this->button_15->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_21
			// 
			this->button_21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_21->BackColor = System::Drawing::Color::Purple;
			this->button_21->FlatAppearance->BorderSize = 0;
			this->button_21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_21->Location = System::Drawing::Point(485, 304);
			this->button_21->Name = L"button_21";
			this->button_21->Size = System::Drawing::Size(7, 7);
			this->button_21->TabIndex = 41;
			this->button_21->Text = L"button13";
			this->button_21->UseVisualStyleBackColor = false;
			this->button_21->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_36
			// 
			this->button_36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_36->BackColor = System::Drawing::Color::Purple;
			this->button_36->FlatAppearance->BorderSize = 0;
			this->button_36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_36->Location = System::Drawing::Point(485, 321);
			this->button_36->Name = L"button_36";
			this->button_36->Size = System::Drawing::Size(7, 7);
			this->button_36->TabIndex = 40;
			this->button_36->Text = L"button12";
			this->button_36->UseVisualStyleBackColor = false;
			this->button_36->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_55
			// 
			this->button_55->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_55->BackColor = System::Drawing::Color::Purple;
			this->button_55->FlatAppearance->BorderSize = 0;
			this->button_55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_55->Location = System::Drawing::Point(474, 50);
			this->button_55->Name = L"button_55";
			this->button_55->Size = System::Drawing::Size(7, 7);
			this->button_55->TabIndex = 39;
			this->button_55->Text = L"button11";
			this->button_55->UseVisualStyleBackColor = false;
			this->button_55->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_73
			// 
			this->button_73->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_73->BackColor = System::Drawing::Color::Purple;
			this->button_73->FlatAppearance->BorderSize = 0;
			this->button_73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_73->Location = System::Drawing::Point(487, 62);
			this->button_73->Name = L"button_73";
			this->button_73->Size = System::Drawing::Size(7, 7);
			this->button_73->TabIndex = 38;
			this->button_73->Text = L"button10";
			this->button_73->UseVisualStyleBackColor = false;
			this->button_73->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_43
			// 
			this->button_43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_43->BackColor = System::Drawing::Color::Purple;
			this->button_43->FlatAppearance->BorderSize = 0;
			this->button_43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_43->Location = System::Drawing::Point(500, 83);
			this->button_43->Name = L"button_43";
			this->button_43->Size = System::Drawing::Size(7, 7);
			this->button_43->TabIndex = 37;
			this->button_43->Text = L"button9";
			this->button_43->UseVisualStyleBackColor = false;
			this->button_43->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_12
			// 
			this->button_12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_12->BackColor = System::Drawing::Color::Purple;
			this->button_12->FlatAppearance->BorderSize = 0;
			this->button_12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_12->Location = System::Drawing::Point(500, 103);
			this->button_12->Name = L"button_12";
			this->button_12->Size = System::Drawing::Size(7, 7);
			this->button_12->TabIndex = 36;
			this->button_12->Text = L"button8";
			this->button_12->UseVisualStyleBackColor = false;
			this->button_12->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_3
			// 
			this->button_3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_3->BackColor = System::Drawing::Color::Purple;
			this->button_3->FlatAppearance->BorderSize = 0;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->Location = System::Drawing::Point(527, 131);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(7, 7);
			this->button_3->TabIndex = 35;
			this->button_3->Text = L"button7";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_27
			// 
			this->button_27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_27->BackColor = System::Drawing::Color::Purple;
			this->button_27->FlatAppearance->BorderSize = 0;
			this->button_27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_27->Location = System::Drawing::Point(565, 146);
			this->button_27->Name = L"button_27";
			this->button_27->Size = System::Drawing::Size(7, 7);
			this->button_27->TabIndex = 34;
			this->button_27->Text = L"button6";
			this->button_27->UseVisualStyleBackColor = false;
			this->button_27->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_25
			// 
			this->button_25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_25->BackColor = System::Drawing::Color::Purple;
			this->button_25->FlatAppearance->BorderSize = 0;
			this->button_25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_25->Location = System::Drawing::Point(570, 183);
			this->button_25->Name = L"button_25";
			this->button_25->Size = System::Drawing::Size(7, 7);
			this->button_25->TabIndex = 33;
			this->button_25->Text = L"button5";
			this->button_25->UseVisualStyleBackColor = false;
			this->button_25->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_11
			// 
			this->button_11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_11->BackColor = System::Drawing::Color::Purple;
			this->button_11->FlatAppearance->BorderSize = 0;
			this->button_11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_11->Location = System::Drawing::Point(548, 206);
			this->button_11->Name = L"button_11";
			this->button_11->Size = System::Drawing::Size(7, 7);
			this->button_11->TabIndex = 32;
			this->button_11->Text = L"button4";
			this->button_11->UseVisualStyleBackColor = false;
			this->button_11->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_74
			// 
			this->button_74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_74->BackColor = System::Drawing::Color::Purple;
			this->button_74->FlatAppearance->BorderSize = 0;
			this->button_74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_74->Location = System::Drawing::Point(538, 237);
			this->button_74->Name = L"button_74";
			this->button_74->Size = System::Drawing::Size(7, 7);
			this->button_74->TabIndex = 31;
			this->button_74->Text = L"button3";
			this->button_74->UseVisualStyleBackColor = false;
			this->button_74->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_61
			// 
			this->button_61->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_61->BackColor = System::Drawing::Color::Purple;
			this->button_61->FlatAppearance->BorderSize = 0;
			this->button_61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_61->Location = System::Drawing::Point(516, 298);
			this->button_61->Name = L"button_61";
			this->button_61->Size = System::Drawing::Size(7, 7);
			this->button_61->TabIndex = 30;
			this->button_61->Text = L"button2";
			this->button_61->UseVisualStyleBackColor = false;
			this->button_61->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_13
			// 
			this->button_13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_13->BackColor = System::Drawing::Color::Silver;
			this->button_13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_13->FlatAppearance->BorderSize = 0;
			this->button_13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_13->Location = System::Drawing::Point(485, 333);
			this->button_13->Name = L"button_13";
			this->button_13->Size = System::Drawing::Size(6, 18);
			this->button_13->TabIndex = 29;
			this->button_13->Text = L"button1";
			this->button_13->UseVisualStyleBackColor = false;
			this->button_13->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_33
			// 
			this->button_33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_33->BackColor = System::Drawing::Color::Gold;
			this->button_33->FlatAppearance->BorderSize = 0;
			this->button_33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_33->Location = System::Drawing::Point(102, 123);
			this->button_33->Name = L"button_33";
			this->button_33->Size = System::Drawing::Size(7, 7);
			this->button_33->TabIndex = 28;
			this->button_33->Text = L"button27";
			this->button_33->UseVisualStyleBackColor = false;
			this->button_33->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_20
			// 
			this->button_20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_20->BackColor = System::Drawing::Color::Gold;
			this->button_20->FlatAppearance->BorderSize = 0;
			this->button_20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_20->Location = System::Drawing::Point(114, 135);
			this->button_20->Name = L"button_20";
			this->button_20->Size = System::Drawing::Size(7, 7);
			this->button_20->TabIndex = 27;
			this->button_20->Text = L"button26";
			this->button_20->UseVisualStyleBackColor = false;
			this->button_20->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_54
			// 
			this->button_54->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_54->BackColor = System::Drawing::Color::Gold;
			this->button_54->FlatAppearance->BorderSize = 0;
			this->button_54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_54->Location = System::Drawing::Point(133, 153);
			this->button_54->Name = L"button_54";
			this->button_54->Size = System::Drawing::Size(7, 7);
			this->button_54->TabIndex = 26;
			this->button_54->Text = L"button25";
			this->button_54->UseVisualStyleBackColor = false;
			this->button_54->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_37
			// 
			this->button_37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_37->BackColor = System::Drawing::Color::Gold;
			this->button_37->FlatAppearance->BorderSize = 0;
			this->button_37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_37->Location = System::Drawing::Point(151, 170);
			this->button_37->Name = L"button_37";
			this->button_37->Size = System::Drawing::Size(7, 7);
			this->button_37->TabIndex = 25;
			this->button_37->Text = L"button24";
			this->button_37->UseVisualStyleBackColor = false;
			this->button_37->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_59
			// 
			this->button_59->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_59->BackColor = System::Drawing::Color::Gold;
			this->button_59->FlatAppearance->BorderSize = 0;
			this->button_59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_59->Location = System::Drawing::Point(170, 189);
			this->button_59->Name = L"button_59";
			this->button_59->Size = System::Drawing::Size(7, 7);
			this->button_59->TabIndex = 24;
			this->button_59->Text = L"button23";
			this->button_59->UseVisualStyleBackColor = false;
			this->button_59->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_1
			// 
			this->button_1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_1->BackColor = System::Drawing::Color::Gold;
			this->button_1->FlatAppearance->BorderSize = 0;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->Location = System::Drawing::Point(198, 218);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(7, 7);
			this->button_1->TabIndex = 23;
			this->button_1->Text = L"button22";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_8
			// 
			this->button_8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_8->BackColor = System::Drawing::Color::Gold;
			this->button_8->FlatAppearance->BorderSize = 0;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->Location = System::Drawing::Point(221, 240);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(7, 7);
			this->button_8->TabIndex = 22;
			this->button_8->Text = L"button21";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_28
			// 
			this->button_28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_28->BackColor = System::Drawing::Color::Gold;
			this->button_28->FlatAppearance->BorderSize = 0;
			this->button_28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_28->Location = System::Drawing::Point(247, 265);
			this->button_28->Name = L"button_28";
			this->button_28->Size = System::Drawing::Size(7, 7);
			this->button_28->TabIndex = 21;
			this->button_28->Text = L"button20";
			this->button_28->UseVisualStyleBackColor = false;
			this->button_28->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_22
			// 
			this->button_22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_22->BackColor = System::Drawing::Color::Gold;
			this->button_22->FlatAppearance->BorderSize = 0;
			this->button_22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_22->Location = System::Drawing::Point(274, 292);
			this->button_22->Name = L"button_22";
			this->button_22->Size = System::Drawing::Size(7, 7);
			this->button_22->TabIndex = 20;
			this->button_22->Text = L"button19";
			this->button_22->UseVisualStyleBackColor = false;
			this->button_22->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_75
			// 
			this->button_75->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_75->BackColor = System::Drawing::Color::Gold;
			this->button_75->FlatAppearance->BorderSize = 0;
			this->button_75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_75->Location = System::Drawing::Point(348, 336);
			this->button_75->Name = L"button_75";
			this->button_75->Size = System::Drawing::Size(7, 7);
			this->button_75->TabIndex = 18;
			this->button_75->Text = L"button17";
			this->button_75->UseVisualStyleBackColor = false;
			this->button_75->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_50
			// 
			this->button_50->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_50->BackColor = System::Drawing::Color::Gold;
			this->button_50->FlatAppearance->BorderSize = 0;
			this->button_50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_50->Location = System::Drawing::Point(387, 337);
			this->button_50->Name = L"button_50";
			this->button_50->Size = System::Drawing::Size(7, 7);
			this->button_50->TabIndex = 17;
			this->button_50->Text = L"button16";
			this->button_50->UseVisualStyleBackColor = false;
			this->button_50->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_39
			// 
			this->button_39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_39->BackColor = System::Drawing::Color::Gold;
			this->button_39->FlatAppearance->BorderSize = 0;
			this->button_39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_39->Location = System::Drawing::Point(417, 337);
			this->button_39->Name = L"button_39";
			this->button_39->Size = System::Drawing::Size(7, 7);
			this->button_39->TabIndex = 16;
			this->button_39->Text = L"button15";
			this->button_39->UseVisualStyleBackColor = false;
			this->button_39->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_29
			// 
			this->button_29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_29->BackColor = System::Drawing::Color::Gold;
			this->button_29->FlatAppearance->BorderSize = 0;
			this->button_29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_29->Location = System::Drawing::Point(525, 340);
			this->button_29->Name = L"button_29";
			this->button_29->Size = System::Drawing::Size(7, 7);
			this->button_29->TabIndex = 15;
			this->button_29->Text = L"button_29";
			this->button_29->UseVisualStyleBackColor = false;
			this->button_29->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_68
			// 
			this->button_68->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_68->BackColor = System::Drawing::Color::Gold;
			this->button_68->FlatAppearance->BorderSize = 0;
			this->button_68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_68->Location = System::Drawing::Point(553, 368);
			this->button_68->Name = L"button_68";
			this->button_68->Size = System::Drawing::Size(7, 7);
			this->button_68->TabIndex = 14;
			this->button_68->Text = L"button_68";
			this->button_68->UseVisualStyleBackColor = false;
			this->button_68->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_4
			// 
			this->button_4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_4->BackColor = System::Drawing::Color::Gold;
			this->button_4->FlatAppearance->BorderSize = 0;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->Location = System::Drawing::Point(593, 380);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(7, 7);
			this->button_4->TabIndex = 13;
			this->button_4->Text = L"button_4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_26
			// 
			this->button_26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_26->BackColor = System::Drawing::Color::Gold;
			this->button_26->FlatAppearance->BorderSize = 0;
			this->button_26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_26->Location = System::Drawing::Point(628, 441);
			this->button_26->Name = L"button_26";
			this->button_26->Size = System::Drawing::Size(7, 7);
			this->button_26->TabIndex = 12;
			this->button_26->Text = L"button_26";
			this->button_26->UseVisualStyleBackColor = false;
			this->button_26->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_62
			// 
			this->button_62->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_62->BackColor = System::Drawing::Color::Gold;
			this->button_62->FlatAppearance->BorderSize = 0;
			this->button_62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_62->Location = System::Drawing::Point(677, 431);
			this->button_62->Name = L"button_62";
			this->button_62->Size = System::Drawing::Size(7, 7);
			this->button_62->TabIndex = 11;
			this->button_62->Text = L"button_62";
			this->button_62->UseVisualStyleBackColor = false;
			this->button_62->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_48
			// 
			this->button_48->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_48->BackColor = System::Drawing::Color::Gold;
			this->button_48->FlatAppearance->BorderSize = 0;
			this->button_48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_48->Location = System::Drawing::Point(730, 406);
			this->button_48->Name = L"button_48";
			this->button_48->Size = System::Drawing::Size(7, 7);
			this->button_48->TabIndex = 10;
			this->button_48->Text = L"button_48";
			this->button_48->UseVisualStyleBackColor = false;
			this->button_48->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_57
			// 
			this->button_57->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_57->BackColor = System::Drawing::Color::Gold;
			this->button_57->FlatAppearance->BorderSize = 0;
			this->button_57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_57->Location = System::Drawing::Point(769, 412);
			this->button_57->Name = L"button_57";
			this->button_57->Size = System::Drawing::Size(7, 7);
			this->button_57->TabIndex = 9;
			this->button_57->Text = L"button_57";
			this->button_57->UseVisualStyleBackColor = false;
			this->button_57->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_66
			// 
			this->button_66->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_66->BackColor = System::Drawing::Color::Gold;
			this->button_66->FlatAppearance->BorderSize = 0;
			this->button_66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_66->Location = System::Drawing::Point(796, 427);
			this->button_66->Name = L"button_66";
			this->button_66->Size = System::Drawing::Size(7, 7);
			this->button_66->TabIndex = 8;
			this->button_66->Text = L"button_66";
			this->button_66->UseVisualStyleBackColor = false;
			this->button_66->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_5
			// 
			this->button_5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_5->BackColor = System::Drawing::Color::Gold;
			this->button_5->FlatAppearance->BorderSize = 0;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->Location = System::Drawing::Point(812, 442);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(7, 7);
			this->button_5->TabIndex = 7;
			this->button_5->Text = L"button8";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// button_10
			// 
			this->button_10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_10->BackColor = System::Drawing::Color::Gold;
			this->button_10->FlatAppearance->BorderSize = 0;
			this->button_10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_10->Location = System::Drawing::Point(824, 454);
			this->button_10->Name = L"button_10";
			this->button_10->Size = System::Drawing::Size(7, 7);
			this->button_10->TabIndex = 6;
			this->button_10->Text = L"button8";
			this->button_10->UseVisualStyleBackColor = false;
			this->button_10->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			// 
			// retour_accueil2
			// 
			this->retour_accueil2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->retour_accueil2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->retour_accueil2->Location = System::Drawing::Point(943, 637);
			this->retour_accueil2->Name = L"retour_accueil2";
			this->retour_accueil2->Size = System::Drawing::Size(169, 44);
			this->retour_accueil2->TabIndex = 5;
			this->retour_accueil2->Text = L" Back to homepage ";
			this->retour_accueil2->UseVisualStyleBackColor = true;
			this->retour_accueil2->Click += gcnew System::EventHandler(this, &MainWindow::retour_accueil_Click);
			// 
			// pref_map
			// 
			this->pref_map->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pref_map->BackColor = System::Drawing::Color::Transparent;
			this->pref_map->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pref_map->Controls->Add(this->corr_map);
			this->pref_map->Controls->Add(this->court_map);
			this->pref_map->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pref_map->Location = System::Drawing::Point(915, 479);
			this->pref_map->Name = L"pref_map";
			this->pref_map->Size = System::Drawing::Size(215, 119);
			this->pref_map->TabIndex = 3;
			this->pref_map->TabStop = false;
			this->pref_map->Text = L" Route preferences ";
			// 
			// corr_map
			// 
			this->corr_map->AutoSize = true;
			this->corr_map->Location = System::Drawing::Point(6, 75);
			this->corr_map->Name = L"corr_map";
			this->corr_map->Size = System::Drawing::Size(207, 22);
			this->corr_map->TabIndex = 3;
			this->corr_map->TabStop = true;
			this->corr_map->Text = L" Least changes";
			this->corr_map->UseVisualStyleBackColor = true;
			// 
			// court_map
			// 
			this->court_map->AutoSize = true;
			this->court_map->Checked = true;
			this->court_map->Location = System::Drawing::Point(6, 34);
			this->court_map->Name = L"court_map";
			this->court_map->Size = System::Drawing::Size(107, 22);
			this->court_map->TabIndex = 2;
			this->court_map->TabStop = true;
			this->court_map->Text = L" Fastest";
			this->court_map->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->groupBox3->Controls->Add(this->nouvel_itin);
			this->groupBox3->Controls->Add(this->calculer_map);
			this->groupBox3->Controls->Add(this->valider_depart);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(917, 52);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(215, 387);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L" Your route ";
			// 
			// nouvel_itin
			// 
			this->nouvel_itin->Location = System::Drawing::Point(37, 336);
			this->nouvel_itin->Name = L"nouvel_itin";
			this->nouvel_itin->Size = System::Drawing::Size(141, 34);
			this->nouvel_itin->TabIndex = 7;
			this->nouvel_itin->Text = L" New route ";
			this->nouvel_itin->UseVisualStyleBackColor = true;
			this->nouvel_itin->Click += gcnew System::EventHandler(this, &MainWindow::nouvel_itin_Click);
			// 
			// calculer_map
			// 
			this->calculer_map->Location = System::Drawing::Point(37, 288);
			this->calculer_map->Name = L"calculer_map";
			this->calculer_map->Size = System::Drawing::Size(141, 34);
			this->calculer_map->TabIndex = 6;
			this->calculer_map->Text = L" Calculate your route ";
			this->calculer_map->UseVisualStyleBackColor = true;
			this->calculer_map->Click += gcnew System::EventHandler(this, &MainWindow::calculer_map_Click);
			// 
			// valider_depart
			// 
			this->valider_depart->Font = (gcnew System::Drawing::Font(L"Candara", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->valider_depart->Location = System::Drawing::Point(72, 132);
			this->valider_depart->Name = L"valider_depart";
			this->valider_depart->Size = System::Drawing::Size(75, 23);
			this->valider_depart->TabIndex = 5;
			this->valider_depart->Text = L" Confirm";
			this->valider_depart->UseVisualStyleBackColor = true;
			this->valider_depart->Click += gcnew System::EventHandler(this, &MainWindow::valider_depart_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 220);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 26);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(185, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L" Choose a station on the map ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Arrival:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 23);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Departure:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(882, 686);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1284, 968);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->mainTitle);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Metro";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
		//	this->Click += gcnew System::EventHandler(this, &MainWindow::button_Click_Map);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->pref_combo->ResumeLayout(false);
			this->pref_combo->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->pref_map->ResumeLayout(false);
			this->pref_map->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e)
			 {

			 }

private: System::Void recherche_itin_Click(System::Object^  sender, System::EventArgs^  e)
		 {
				tabControl1->SelectedIndex = 1;
		 }
private: System::Void plan_interactif_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 	tabControl1->SelectedIndex = 2;
		 }
private: System::Void retour_accueil_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 	tabControl1->SelectedIndex = 0;
		 }


private: System::Void valider_depart_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 

				if (this->textBox1->Text != " Choose a station on the map ")
					{
						this->textBox2->Text = " Choose a station on the map ";
					}
				_startChoice="n"; //we are now choosing the ending station
		 }
private: System::Void calculer_combo_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 
		int startNumber=0;
		int endNumber=0;
		startNumber=comboBox1->SelectedIndex;
		endNumber=comboBox2->SelectedIndex;
		if(startNumber>0 && endNumber>0 && startNumber!=endNumber)  //if the start and end number are not properly defined the algorithm won't run
		{
			float connectionDelay=1;
			if(corr_combo->Checked==true)  //if the less connection is checked, we put a very high weight on the connection
			{
				connectionDelay=1000;
			}
				 Dijkstra dijkstra(*_stations,  (*(*_stations))[startNumber],  (*(*_stations))[endNumber],  connectionDelay);
				vector<spNode> optimalPath = dijkstra.GiveOptimalPath();//creating the Dijkstra object and running the algorithm
			
				String^ sysstr = gcnew String("At the station ");
			    String^ sysstr2 = gcnew String(optimalPath[0]->Get_name().c_str());
				String^ sysstr3 = gcnew String(optimalPath[0]->FindEdge(optimalPath[1])->GetLineNumber().ToString());

				sysstr = sysstr + sysstr2 + ", take the line " + sysstr3 + Environment::NewLine;			
				for (unsigned int i=1; i<optimalPath.size()-1; i++)
				{
					String^ sysstr4 = gcnew String(optimalPath[i]->Get_name().c_str());  //name of the station
					if (optimalPath[i]->FindEdge(optimalPath[i-1])->GetLineNumber() != optimalPath[i+1]->FindEdge(optimalPath[i])->GetLineNumber())
					//if a connection must be taken
					{
						
						String^ sysstr5 = gcnew String(optimalPath[i]->FindEdge(optimalPath[i+1])->GetLineNumber().ToString()); //lineNumber
						sysstr = sysstr + "At the station " + sysstr4 + " take the line " + sysstr5 + Environment::NewLine;
					}
					else
					{
						sysstr=sysstr+ "\t" + "The train is at the station " + sysstr4 + Environment::NewLine;
					}
				}
				String^ sysstr6 = gcnew String(optimalPath[optimalPath.size()-1]->Get_name().c_str()); //name of the end station

				sysstr = sysstr + "Get off the train at " + sysstr6 + Environment::NewLine + "You have reached your final destination!";
				this->textBoxItin->Text = sysstr;
		}
		else
		{
			MessageBox::Show("Please choose two different stations");
		}
		 }

private: System::Void calculer_map_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			int startNumber=0;
			int endNumber=0;
			startNumber=Convert::ToInt32(_mapStart);
			endNumber=Convert::ToInt32(_mapEnd);
			if(startNumber>0 && endNumber>0 && startNumber!=endNumber) //if the start and end number are not properly defined the algorithm won't run
			{				 
			
				float connectionDelay=1;
				 if(corr_map->Checked==true)//if the less connection is checked, we put a very high weight on the connection
				 {
					 connectionDelay=1000;
				 }

				 Dijkstra dijkstra(*_stations,  (*(*_stations))[startNumber],  (*(*_stations))[endNumber],  connectionDelay);
				vector<spNode> optimalPath = dijkstra.GiveOptimalPath();  //creating the Dijkstra object and running the algorithm
				
				String^ sysstr = gcnew String("At the station ");
			    String^ sysstr2 = gcnew String(optimalPath[0]->Get_name().c_str());
				String^ sysstr3 = gcnew String(optimalPath[0]->FindEdge(optimalPath[1])->GetLineNumber().ToString());

				sysstr = sysstr + sysstr2 + ", take the line " + sysstr3 + Environment::NewLine;

				for (unsigned int i=1; i<optimalPath.size()-1; i++)
				{
					String^ sysstr4 = gcnew String(optimalPath[i]->Get_name().c_str());  //name of the station
					if (optimalPath[i]->FindEdge(optimalPath[i-1])->GetLineNumber() != optimalPath[i+1]->FindEdge(optimalPath[i])->GetLineNumber())
					//if a connection must be taken
					{
						
						String^ sysstr5 = gcnew String(optimalPath[i]->FindEdge(optimalPath[i+1])->GetLineNumber().ToString()); //lineNumber
						sysstr = sysstr + "At the station " + sysstr4 + " take the line " + sysstr5 + Environment::NewLine;
					}
					else
					{
						sysstr=sysstr+ "\t" + "The train is at the station " + sysstr4 + Environment::NewLine;
					}
				}
				String^ sysstr6 = gcnew String(optimalPath[optimalPath.size()-1]->Get_name().c_str()); //name of the end station

				sysstr = sysstr + "Get off the train at " + sysstr6 + Environment::NewLine + "You have reached your final destination!";

				MessageBox::Show(sysstr);
			}

		else
		{
			MessageBox::Show("Please choose two different stations");
		}


		 }


private: System::Void nouvel_itin_Click(System::Object^  sender, System::EventArgs^  e) { //we are now choosing the starting station
		 _startChoice="y";
			 this->textBox1->Text = " Choose a station on the map ";
			this->textBox2->Text = "";
		 }


private: System::Void button_Click_Map(System::Object^  sender, System::EventArgs^  e) { 	//every button on the map, when clicked, trigger this function 
			 
			Button^ thisButton = safe_cast<Button^>(sender);					//syntax in order to get the name of the button clicked on
			array<String^>^ stationNumber = (thisButton->Name)->Split('_');		//the button has a name like "button_66" and this line gets "66" but is still a string
																			
			if(_startChoice=="y")  //if we are choosing the starting station
			{
				_mapStart=stationNumber[1];
				int key=0;
				key=Convert::ToInt32(stationNumber[1]);  //key is the int that corresponds to the rank of the station in the vector of stations
				String^ sysstr = gcnew String((*(*_stations))[key]->Get_name().c_str()); //we get the name of the station
				this->textBox1->Text=sysstr;  // the name is displayed
			}
			 else if(_startChoice=="n") //if we are choosing the ending station
			 {
				_mapEnd=stationNumber[1];
				int key=0;
				key=Convert::ToInt32(stationNumber[1]);
				String^ sysstr = gcnew String((*(*_stations))[key]->Get_name().c_str());
				this->textBox2->Text=sysstr;
			}
		
			
	}		
	
};
}