#pragma once

#include "PID.h"
#include "simulation.h"
//#include "startform.h"

namespace pidregulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			controller = new PID(0, 0, 0, DX);
			simulation = new SIMULATION(START_H, DX);
			chart1->Series[0]->Points->AddXY(1,2);
			chart1->Series[0]->Color = Color::FromArgb(0, 192, 0);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ buttonstart;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button7;




	private: System::ComponentModel::IContainer^ components;

	private:
	/// <summary>
	/// ќб€зательна€ переменна€ конструктора.
	/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
	void InitializeComponent(void)
	{
		this->components = (gcnew System::ComponentModel::Container());
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
		System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
		System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
		System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->buttonstart = (gcnew System::Windows::Forms::Button());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->panel3 = (gcnew System::Windows::Forms::Panel());
		this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
		this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
		this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
		this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
		this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
		this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->panel4 = (gcnew System::Windows::Forms::Panel());
		this->button5 = (gcnew System::Windows::Forms::Button());
		this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
		this->button4 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->panel5 = (gcnew System::Windows::Forms::Panel());
		this->button7 = (gcnew System::Windows::Forms::Button());
		this->label13 = (gcnew System::Windows::Forms::Label());
		this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->button6 = (gcnew System::Windows::Forms::Button());
		this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
		this->panel1->SuspendLayout();
		this->panel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
		this->panel3->SuspendLayout();
		this->groupBox4->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
		this->groupBox3->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
		this->groupBox1->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
		this->groupBox2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
		this->panel4->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
		this->panel5->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
		this->SuspendLayout();
		// 
		// panel1
		// 
		this->panel1->AutoSize = true;
		this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->panel1->BackColor = System::Drawing::Color::Transparent;
		this->panel1->Controls->Add(this->panel2);
		this->panel1->Controls->Add(this->button1);
		this->panel1->Controls->Add(this->panel3);
		this->panel1->Controls->Add(this->chart1);
		this->panel1->Location = System::Drawing::Point(1441, 18);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(1265, 679);
		this->panel1->TabIndex = 0;
		this->panel1->Visible = false;
		// 
		// panel2
		// 
		this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->panel2->BackColor = System::Drawing::Color::Transparent;
		this->panel2->Controls->Add(this->pictureBox2);
		this->panel2->Controls->Add(this->pictureBox1);
		this->panel2->Controls->Add(this->buttonstart);
		this->panel2->Location = System::Drawing::Point(1001, 3);
		this->panel2->MaximumSize = System::Drawing::Size(522, 1346);
		this->panel2->MinimumSize = System::Drawing::Size(261, 673);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(261, 673);
		this->panel2->TabIndex = 12;
		// 
		// pictureBox2
		// 
		this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->pictureBox2->Location = System::Drawing::Point(32, 459);
		this->pictureBox2->Name = L"pictureBox2";
		this->pictureBox2->Size = System::Drawing::Size(150, 60);
		this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
		this->pictureBox2->TabIndex = 7;
		this->pictureBox2->TabStop = false;
		// 
		// pictureBox1
		// 
		this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
		this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
		this->pictureBox1->Location = System::Drawing::Point(119, 352);
		this->pictureBox1->Name = L"pictureBox1";
		this->pictureBox1->Size = System::Drawing::Size(45, 45);
		this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
		this->pictureBox1->TabIndex = 4;
		this->pictureBox1->TabStop = false;
		// 
		// buttonstart
		// 
		this->buttonstart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->buttonstart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->buttonstart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->buttonstart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
		this->buttonstart->ForeColor = System::Drawing::Color::White;
		this->buttonstart->Location = System::Drawing::Point(21, 544);
		this->buttonstart->Name = L"buttonstart";
		this->buttonstart->Size = System::Drawing::Size(220, 70);
		this->buttonstart->TabIndex = 1;
		this->buttonstart->Text = L"START";
		this->buttonstart->UseVisualStyleBackColor = false;
		this->buttonstart->Click += gcnew System::EventHandler(this, &MainForm::buttonstart_Click);
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::Color::Red;
		this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
		this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->button1->FlatAppearance->BorderSize = 0;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->Location = System::Drawing::Point(2, 3);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(41, 37);
		this->button1->TabIndex = 14;
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
		// 
		// panel3
		// 
		this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
		this->panel3->BackColor = System::Drawing::Color::Transparent;
		this->panel3->Controls->Add(this->groupBox4);
		this->panel3->Controls->Add(this->label9);
		this->panel3->Controls->Add(this->groupBox3);
		this->panel3->Controls->Add(this->label7);
		this->panel3->Controls->Add(this->label5);
		this->panel3->Controls->Add(this->label1);
		this->panel3->Controls->Add(this->groupBox1);
		this->panel3->Controls->Add(this->groupBox2);
		this->panel3->Location = System::Drawing::Point(0, 479);
		this->panel3->Name = L"panel3";
		this->panel3->Size = System::Drawing::Size(1262, 194);
		this->panel3->TabIndex = 13;
		// 
		// groupBox4
		// 
		this->groupBox4->AutoSize = true;
		this->groupBox4->Controls->Add(this->label10);
		this->groupBox4->Controls->Add(this->trackBar3);
		this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBox4->ForeColor = System::Drawing::Color::White;
		this->groupBox4->Location = System::Drawing::Point(290, 58);
		this->groupBox4->Name = L"groupBox4";
		this->groupBox4->Size = System::Drawing::Size(201, 133);
		this->groupBox4->TabIndex = 11;
		this->groupBox4->TabStop = false;
		this->groupBox4->Text = L"height";
		// 
		// label10
		// 
		this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->label10->AutoSize = true;
		this->label10->BackColor = System::Drawing::Color::Gray;
		this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label10->ForeColor = System::Drawing::Color::Black;
		this->label10->Location = System::Drawing::Point(16, 54);
		this->label10->MinimumSize = System::Drawing::Size(26, 26);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(26, 29);
		this->label10->TabIndex = 8;
		this->label10->Text = L"5";
		// 
		// trackBar3
		// 
		this->trackBar3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->trackBar3->Dock = System::Windows::Forms::DockStyle::Right;
		this->trackBar3->LargeChange = 1;
		this->trackBar3->Location = System::Drawing::Point(142, 20);
		this->trackBar3->Minimum = 1;
		this->trackBar3->Name = L"trackBar3";
		this->trackBar3->Orientation = System::Windows::Forms::Orientation::Vertical;
		this->trackBar3->Size = System::Drawing::Size(56, 110);
		this->trackBar3->TabIndex = 1;
		this->trackBar3->Value = 5;
		this->trackBar3->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar3_ValueChanged);
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->BackColor = System::Drawing::Color::Gray;
		this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F));
		this->label9->Location = System::Drawing::Point(290, 14);
		this->label9->MinimumSize = System::Drawing::Size(201, 0);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(201, 32);
		this->label9->TabIndex = 10;
		this->label9->Text = L"Start value";
		this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// groupBox3
		// 
		this->groupBox3->AutoSize = true;
		this->groupBox3->Controls->Add(this->label8);
		this->groupBox3->Controls->Add(this->trackBar2);
		this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBox3->ForeColor = System::Drawing::Color::White;
		this->groupBox3->Location = System::Drawing::Point(704, 58);
		this->groupBox3->Name = L"groupBox3";
		this->groupBox3->Size = System::Drawing::Size(201, 133);
		this->groupBox3->TabIndex = 9;
		this->groupBox3->TabStop = false;
		this->groupBox3->Text = L"height";
		// 
		// label8
		// 
		this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label8->AutoSize = true;
		this->label8->BackColor = System::Drawing::Color::Gray;
		this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label8->ForeColor = System::Drawing::Color::Black;
		this->label8->Location = System::Drawing::Point(16, 57);
		this->label8->MinimumSize = System::Drawing::Size(26, 26);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(26, 29);
		this->label8->TabIndex = 8;
		this->label8->Text = L"1";
		// 
		// trackBar2
		// 
		this->trackBar2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->trackBar2->Dock = System::Windows::Forms::DockStyle::Right;
		this->trackBar2->LargeChange = 20;
		this->trackBar2->Location = System::Drawing::Point(142, 20);
		this->trackBar2->Maximum = 150;
		this->trackBar2->Minimum = 50;
		this->trackBar2->Name = L"trackBar2";
		this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
		this->trackBar2->Size = System::Drawing::Size(56, 110);
		this->trackBar2->SmallChange = 20;
		this->trackBar2->TabIndex = 7;
		this->trackBar2->Value = 100;
		this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar2_ValueChanged);
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->BackColor = System::Drawing::Color::Gray;
		this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F));
		this->label7->Location = System::Drawing::Point(704, 14);
		this->label7->MinimumSize = System::Drawing::Size(201, 0);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(201, 32);
		this->label7->TabIndex = 8;
		this->label7->Text = L"Setpoint Value";
		this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->BackColor = System::Drawing::Color::Gray;
		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F));
		this->label5->Location = System::Drawing::Point(497, 14);
		this->label5->MinimumSize = System::Drawing::Size(201, 0);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(201, 32);
		this->label5->TabIndex = 5;
		this->label5->Text = L"Power";
		this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->BackColor = System::Drawing::Color::Gray;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F));
		this->label1->Location = System::Drawing::Point(83, 14);
		this->label1->MinimumSize = System::Drawing::Size(201, 0);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(201, 32);
		this->label1->TabIndex = 3;
		this->label1->Text = L"PID Settings";
		this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
		// 
		// groupBox1
		// 
		this->groupBox1->AutoSize = true;
		this->groupBox1->Controls->Add(this->pictureBox3);
		this->groupBox1->Controls->Add(this->numericUpDown3);
		this->groupBox1->Controls->Add(this->numericUpDown2);
		this->groupBox1->Controls->Add(this->numericUpDown1);
		this->groupBox1->Controls->Add(this->label4);
		this->groupBox1->Controls->Add(this->label3);
		this->groupBox1->Controls->Add(this->label2);
		this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBox1->ForeColor = System::Drawing::Color::White;
		this->groupBox1->Location = System::Drawing::Point(83, 58);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Size = System::Drawing::Size(201, 133);
		this->groupBox1->TabIndex = 2;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"coefficients";
		// 
		// pictureBox3
		// 
		this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
		this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
		this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
		this->pictureBox3->Location = System::Drawing::Point(12, 44);
		this->pictureBox3->Name = L"pictureBox3";
		this->pictureBox3->Size = System::Drawing::Size(45, 45);
		this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox3->TabIndex = 6;
		this->pictureBox3->TabStop = false;
		this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
		// 
		// numericUpDown3
		// 
		this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
		this->numericUpDown3->Location = System::Drawing::Point(116, 84);
		this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
		this->numericUpDown3->MinimumSize = System::Drawing::Size(75, 0);
		this->numericUpDown3->Name = L"numericUpDown3";
		this->numericUpDown3->Size = System::Drawing::Size(75, 26);
		this->numericUpDown3->TabIndex = 5;
		this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
		this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown1_ValueChanged);
		// 
		// numericUpDown2
		// 
		this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
		this->numericUpDown2->Location = System::Drawing::Point(116, 54);
		this->numericUpDown2->MinimumSize = System::Drawing::Size(75, 0);
		this->numericUpDown2->Name = L"numericUpDown2";
		this->numericUpDown2->Size = System::Drawing::Size(75, 26);
		this->numericUpDown2->TabIndex = 4;
		this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
		this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown1_ValueChanged);
		// 
		// numericUpDown1
		// 
		this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F));
		this->numericUpDown1->Location = System::Drawing::Point(116, 25);
		this->numericUpDown1->MinimumSize = System::Drawing::Size(75, 0);
		this->numericUpDown1->Name = L"numericUpDown1";
		this->numericUpDown1->Size = System::Drawing::Size(75, 26);
		this->numericUpDown1->TabIndex = 3;
		this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
		this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown1_ValueChanged);
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->BackColor = System::Drawing::Color::Gray;
		this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F));
		this->label4->ForeColor = System::Drawing::Color::Black;
		this->label4->Location = System::Drawing::Point(70, 84);
		this->label4->MinimumSize = System::Drawing::Size(25, 25);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(26, 25);
		this->label4->TabIndex = 2;
		this->label4->Text = L"D";
		this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->BackColor = System::Drawing::Color::Gray;
		this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F));
		this->label3->ForeColor = System::Drawing::Color::Black;
		this->label3->Location = System::Drawing::Point(70, 54);
		this->label3->MinimumSize = System::Drawing::Size(26, 25);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(26, 25);
		this->label3->TabIndex = 1;
		this->label3->Text = L"I";
		this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->BackColor = System::Drawing::Color::Gray;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F));
		this->label2->ForeColor = System::Drawing::Color::Black;
		this->label2->Location = System::Drawing::Point(70, 24);
		this->label2->MinimumSize = System::Drawing::Size(26, 26);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(26, 26);
		this->label2->TabIndex = 0;
		this->label2->Text = L"P";
		// 
		// groupBox2
		// 
		this->groupBox2->AutoSize = true;
		this->groupBox2->Controls->Add(this->label6);
		this->groupBox2->Controls->Add(this->trackBar1);
		this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->groupBox2->ForeColor = System::Drawing::Color::White;
		this->groupBox2->Location = System::Drawing::Point(497, 58);
		this->groupBox2->Name = L"groupBox2";
		this->groupBox2->Size = System::Drawing::Size(201, 133);
		this->groupBox2->TabIndex = 6;
		this->groupBox2->TabStop = false;
		this->groupBox2->Text = L"rotation speed";
		// 
		// label6
		// 
		this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label6->AutoSize = true;
		this->label6->BackColor = System::Drawing::Color::Gray;
		this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F));
		this->label6->ForeColor = System::Drawing::Color::Black;
		this->label6->Location = System::Drawing::Point(76, 80);
		this->label6->MinimumSize = System::Drawing::Size(26, 26);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(46, 32);
		this->label6->TabIndex = 8;
		this->label6->Text = L"50";
		// 
		// trackBar1
		// 
		this->trackBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->trackBar1->Dock = System::Windows::Forms::DockStyle::Top;
		this->trackBar1->Location = System::Drawing::Point(3, 18);
		this->trackBar1->Maximum = 120;
		this->trackBar1->Name = L"trackBar1";
		this->trackBar1->Size = System::Drawing::Size(195, 56);
		this->trackBar1->TabIndex = 7;
		this->trackBar1->Value = 50;
		this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MainForm::trackBar1_ValueChanged);
		// 
		// chart1
		// 
		this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->chart1->BackColor = System::Drawing::Color::Transparent;
		chartArea2->AxisX->Interval = 2;
		chartArea2->AxisX->ScaleView->Size = 10;
		chartArea2->AxisX->Title = L"time, sec";
		chartArea2->BackColor = System::Drawing::Color::Transparent;
		chartArea2->Name = L"ChartArea1";
		this->chart1->ChartAreas->Add(chartArea2);
		this->chart1->Location = System::Drawing::Point(43, 3);
		this->chart1->Name = L"chart1";
		series2->ChartArea = L"ChartArea1";
		series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		series2->Legend = L"Legend1";
		series2->Name = L"Series1";
		series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
		this->chart1->Series->Add(series2);
		this->chart1->Size = System::Drawing::Size(862, 460);
		this->chart1->TabIndex = 0;
		this->chart1->Text = L"chart1";
		title2->Alignment = System::Drawing::ContentAlignment::TopCenter;
		title2->DockingOffset = 3;
		title2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		title2->Name = L"height";
		title2->Text = L"height";
		this->chart1->Titles->Add(title2);
		// 
		// timer1
		// 
		this->timer1->Interval = 10;
		this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
		// 
		// button2
		// 
		this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button2->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
		this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
		this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
		this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->button2->ForeColor = System::Drawing::Color::White;
		this->button2->Location = System::Drawing::Point(81, 528);
		this->button2->Margin = System::Windows::Forms::Padding(10);
		this->button2->Name = L"button2";
		this->button2->Padding = System::Windows::Forms::Padding(10);
		this->button2->Size = System::Drawing::Size(312, 76);
		this->button2->TabIndex = 1;
		this->button2->Text = L"SIMULATION";
		this->button2->UseVisualStyleBackColor = false;
		this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
		// 
		// panel4
		// 
		this->panel4->Controls->Add(this->button5);
		this->panel4->Controls->Add(this->pictureBox4);
		this->panel4->Controls->Add(this->button4);
		this->panel4->Controls->Add(this->button3);
		this->panel4->Controls->Add(this->button2);
		this->panel4->Location = System::Drawing::Point(0, 0);
		this->panel4->Name = L"panel4";
		this->panel4->Size = System::Drawing::Size(1260, 610);
		this->panel4->TabIndex = 15;
		// 
		// button5
		// 
		this->button5->BackColor = System::Drawing::Color::Transparent;
		this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
		this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->button5->Cursor = System::Windows::Forms::Cursors::Help;
		this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button5->FlatAppearance->BorderSize = 0;
		this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)),
			static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
		this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button5->ForeColor = System::Drawing::Color::Transparent;
		this->button5->Location = System::Drawing::Point(1217, 10);
		this->button5->Name = L"button5";
		this->button5->Size = System::Drawing::Size(30, 42);
		this->button5->TabIndex = 5;
		this->button5->UseVisualStyleBackColor = false;
		this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
		// 
		// pictureBox4
		// 
		this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
		this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->pictureBox4->Location = System::Drawing::Point(79, 18);
		this->pictureBox4->Name = L"pictureBox4";
		this->pictureBox4->Size = System::Drawing::Size(1104, 497);
		this->pictureBox4->TabIndex = 4;
		this->pictureBox4->TabStop = false;
		// 
		// button4
		// 
		this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button4->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
		this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
		this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F));
		this->button4->ForeColor = System::Drawing::Color::White;
		this->button4->Location = System::Drawing::Point(851, 528);
		this->button4->Margin = System::Windows::Forms::Padding(10);
		this->button4->Name = L"button4";
		this->button4->Padding = System::Windows::Forms::Padding(10);
		this->button4->Size = System::Drawing::Size(312, 76);
		this->button4->TabIndex = 3;
		this->button4->Text = L"QUIT";
		this->button4->UseVisualStyleBackColor = false;
		this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
		// 
		// button3
		// 
		this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button3->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
		this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
		this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button3->ForeColor = System::Drawing::Color::White;
		this->button3->Location = System::Drawing::Point(464, 528);
		this->button3->Margin = System::Windows::Forms::Padding(10);
		this->button3->Name = L"button3";
		this->button3->Padding = System::Windows::Forms::Padding(10);
		this->button3->Size = System::Drawing::Size(312, 76);
		this->button3->TabIndex = 2;
		this->button3->Text = L"SETTINGS";
		this->button3->UseVisualStyleBackColor = false;
		this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
		// 
		// panel5
		// 
		this->panel5->Controls->Add(this->button7);
		this->panel5->Controls->Add(this->label13);
		this->panel5->Controls->Add(this->trackBar4);
		this->panel5->Controls->Add(this->label12);
		this->panel5->Controls->Add(this->label11);
		this->panel5->Controls->Add(this->button6);
		this->panel5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
		this->panel5->Location = System::Drawing::Point(53, 909);
		this->panel5->Name = L"panel5";
		this->panel5->Size = System::Drawing::Size(1232, 606);
		this->panel5->TabIndex = 16;
		this->panel5->Visible = false;
		// 
		// button7
		// 
		this->button7->BackColor = System::Drawing::Color::Red;
		this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
		this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
		this->button7->FlatAppearance->BorderSize = 0;
		this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button7->Location = System::Drawing::Point(0, 3);
		this->button7->Name = L"button7";
		this->button7->Size = System::Drawing::Size(41, 37);
		this->button7->TabIndex = 15;
		this->button7->UseVisualStyleBackColor = false;
		this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
		// 
		// label13
		// 
		this->label13->AutoSize = true;
		this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label13->ForeColor = System::Drawing::Color::White;
		this->label13->Location = System::Drawing::Point(127, 211);
		this->label13->Name = L"label13";
		this->label13->Size = System::Drawing::Size(311, 27);
		this->label13->TabIndex = 4;
		this->label13->Text = L"CHANGE FOREGROUND COLOR";
		// 
		// trackBar4
		// 
		this->trackBar4->Location = System::Drawing::Point(549, 119);
		this->trackBar4->Name = L"trackBar4";
		this->trackBar4->Size = System::Drawing::Size(461, 56);
		this->trackBar4->TabIndex = 3;
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->label12->ForeColor = System::Drawing::Color::White;
		this->label12->Location = System::Drawing::Point(127, 129);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(246, 27);
		this->label12->TabIndex = 2;
		this->label12->Text = L"CHANGE BALL WEIGHT";
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->BackColor = System::Drawing::Color::Transparent;
		this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 20.2F));
		this->label11->ForeColor = System::Drawing::Color::White;
		this->label11->Location = System::Drawing::Point(416, 43);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(359, 40);
		this->label11->TabIndex = 1;
		this->label11->Text = L"ADITIONAL SETTINGS";
		// 
		// button6
		// 
		this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->button6->FlatAppearance->BorderColor = System::Drawing::Color::LimeGreen;
		this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button6->Location = System::Drawing::Point(701, 201);
		this->button6->Name = L"button6";
		this->button6->Size = System::Drawing::Size(204, 52);
		this->button6->TabIndex = 0;
		this->button6->Text = L"SELECT COLOR";
		this->button6->UseVisualStyleBackColor = false;
		this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
		// 
		// colorDialog1
		// 
		this->colorDialog1->Color = System::Drawing::Color::Cyan;
		// 
		// MainForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
			static_cast<System::Int32>(static_cast<System::Byte>(64)));
		this->ClientSize = System::Drawing::Size(1262, 673);
		this->Controls->Add(this->panel5);
		this->Controls->Add(this->panel4);
		this->Controls->Add(this->panel1);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Name = L"MainForm";
		this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
		this->Text = L"MainForm";
		this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
		this->panel1->ResumeLayout(false);
		this->panel2->ResumeLayout(false);
		this->panel2->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->panel3->ResumeLayout(false);
		this->panel3->PerformLayout();
		this->groupBox4->ResumeLayout(false);
		this->groupBox4->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
		this->groupBox3->ResumeLayout(false);
		this->groupBox3->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
		this->groupBox2->ResumeLayout(false);
		this->groupBox2->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
		this->panel4->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
		this->panel5->ResumeLayout(false);
		this->panel5->PerformLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

	private:float k_P, k_I, k_D;
	private: float x = 0, dx = DX, sdx = 0;
	private: int rotation_speed = 50;
	private: float setpoint = 1;
	private: bool flag = false, on = true;
	private: PID* controller;
	private: SIMULATION* simulation;
	
	private: void get_k();
	private: System::Void buttonstart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trackBar2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void trackBar3_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	MainForm::BackColor = colorDialog1->Color;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
};
}
