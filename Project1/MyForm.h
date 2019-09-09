#pragma once
#include<cmath>
#include<vector>
#include<time.h>
#include<stdlib.h>
#include<string>
#include<sstream>
#include<iostream>
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>

		//===�ܼƫŧi===
	//�ŧi�I�}�Ϫ��榡
	Bitmap^ Image1; Bitmap^ Image2; Bitmap^ Image3;
	//�ŧi�Ϲ��ϰ�(�]�w����Ū���B���ץ����Ϲ��ϰ�)
	Rectangle rect,rect2,rect3,Select_Rect;
	//�ŧi���@BitmapData���A�A��ܹ����Ȧ�m
	Imaging::BitmapData^ ImageData1; Imaging::BitmapData^ ImageData2; Imaging::BitmapData^ ImageData3;
	//�ŧi�@int�榡������
	IntPtr ptr;
	//���˼e��- Byte��Ƽe��
	int BytesOfSkip;
	//�ŧi���e�ת�������T
	int ByteNumber_Width;
	//�ŧi�@��Byte�榡������
	Byte* p; Byte* p2; Byte* p3;
	//����x�ΰ_���I
	Point StartPnt, EndPnt;
	//�P�_�ƹ����U
	bool SetCursor = false, Select = false,LoadImage = false;
	//�e��
	Color color;
	Pen^ White; Pen^ Red;
	Brush^ Red_B;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Button^  Stretch_button;
	private: System::Windows::Forms::Button^  Shrinking_button;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �}���ɮ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �}��ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->Stretch_button = (gcnew System::Windows::Forms::Button());
			this->Shrinking_button = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�}���ɮ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�}��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(6, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 46);
			this->button2->TabIndex = 8;
			this->button2->Text = L"HSI";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(6, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 46);
			this->button3->TabIndex = 9;
			this->button3->Text = L"YCrCb";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(142, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 46);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Binary-Image";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(142, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 46);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Octal-Image";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(7, 129);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"kI1+mI2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gray;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(0, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(322, 222);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gray;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox3->Location = System::Drawing::Point(3, 8);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(322, 222);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(143, 129);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 46);
			this->button7->TabIndex = 15;
			this->button7->Text = L"I1 - I2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"�L�n������", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown1->Location = System::Drawing::Point(7, 154);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(130, 22);
			this->numericUpDown1->TabIndex = 16;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(6, 25);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"FIrst-Order";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(141, 25);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 23);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Bilinear-Interpoltion";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 3;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"�L�n������", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown2->Location = System::Drawing::Point(6, 52);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(130, 22);
			this->numericUpDown2->TabIndex = 20;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 3;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"�L�n������", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown3->Location = System::Drawing::Point(141, 52);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(130, 22);
			this->numericUpDown3->TabIndex = 21;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gray;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(9, 338);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(322, 222);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 666);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1531, 22);
			this->statusStrip1->TabIndex = 33;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"�L�n������", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(69, 17);
			this->toolStripStatusLabel1->Text = L"StartPoint";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"�L�n������", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(63, 17);
			this->toolStripStatusLabel2->Text = L"EndPoint";
			// 
			// Stretch_button
			// 
			this->Stretch_button->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stretch_button->Location = System::Drawing::Point(6, 77);
			this->Stretch_button->Name = L"Stretch_button";
			this->Stretch_button->Size = System::Drawing::Size(130, 46);
			this->Stretch_button->TabIndex = 34;
			this->Stretch_button->Text = L"Stretch";
			this->Stretch_button->UseVisualStyleBackColor = true;
			this->Stretch_button->Click += gcnew System::EventHandler(this, &MyForm::Stretch_button_Click);
			// 
			// Shrinking_button
			// 
			this->Shrinking_button->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Shrinking_button->Location = System::Drawing::Point(142, 77);
			this->Shrinking_button->Name = L"Shrinking_button";
			this->Shrinking_button->Size = System::Drawing::Size(130, 46);
			this->Shrinking_button->TabIndex = 35;
			this->Shrinking_button->Text = L"Shrinking";
			this->Shrinking_button->UseVisualStyleBackColor = true;
			this->Shrinking_button->Click += gcnew System::EventHandler(this, &MyForm::Shrinking_button_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(6, 25);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 46);
			this->button10->TabIndex = 36;
			this->button10->Text = L"Histogram equalization";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 3;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown4->Location = System::Drawing::Point(142, 52);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(130, 22);
			this->numericUpDown4->TabIndex = 38;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(142, 25);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 23);
			this->button11->TabIndex = 37;
			this->button11->Text = L"Histogram equalization(S)";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(693, 329);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(350, 321);
			this->panel1->TabIndex = 39;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(337, 329);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(350, 321);
			this->panel2->TabIndex = 40;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(6, 25);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(130, 46);
			this->button12->TabIndex = 41;
			this->button12->Text = L"Gussian noise";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(6, 77);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(130, 46);
			this->button13->TabIndex = 42;
			this->button13->Text = L"Impulse noise";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 3;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown5->Location = System::Drawing::Point(221, 28);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(55, 22);
			this->numericUpDown5->TabIndex = 43;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->DecimalPlaces = 3;
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown6->Location = System::Drawing::Point(221, 50);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(55, 22);
			this->numericUpDown6->TabIndex = 44;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(143, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 19);
			this->label1->TabIndex = 45;
			this->label1->Text = L"�m";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(143, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 19);
			this->label2->TabIndex = 46;
			this->label2->Text = L"m";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(143, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 19);
			this->label3->TabIndex = 50;
			this->label3->Text = L"salt(b)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(143, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 19);
			this->label4->TabIndex = 49;
			this->label4->Text = L"pepper(a)";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 3;
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown7->Location = System::Drawing::Point(221, 102);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(55, 22);
			this->numericUpDown7->TabIndex = 48;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->DecimalPlaces = 3;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown8->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown8->Location = System::Drawing::Point(221, 80);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(55, 22);
			this->numericUpDown8->TabIndex = 47;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown9->Location = System::Drawing::Point(6, 52);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(130, 22);
			this->numericUpDown9->TabIndex = 52;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(6, 25);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 23);
			this->button14->TabIndex = 51;
			this->button14->Text = L"Low-Pass Filter";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown10->Location = System::Drawing::Point(141, 52);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(130, 22);
			this->numericUpDown10->TabIndex = 54;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(141, 25);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 23);
			this->button15->TabIndex = 53;
			this->button15->Text = L"Median Filter";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(6, 77);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(130, 46);
			this->button16->TabIndex = 58;
			this->button16->Text = L"Alpha-trimmed";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->DecimalPlaces = 3;
			this->numericUpDown11->Font = (gcnew System::Drawing::Font(L"�L�n������", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown11->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown11->Location = System::Drawing::Point(221, 76);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(55, 22);
			this->numericUpDown11->TabIndex = 60;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->DecimalPlaces = 3;
			this->numericUpDown12->Font = (gcnew System::Drawing::Font(L"�L�n������", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->numericUpDown12->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown12->Location = System::Drawing::Point(221, 99);
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(55, 22);
			this->numericUpDown12->TabIndex = 59;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(142, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 19);
			this->label5->TabIndex = 62;
			this->label5->Text = L"T";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(142, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 19);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Mask";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown13->Location = System::Drawing::Point(146, 25);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(130, 22);
			this->numericUpDown13->TabIndex = 64;
			this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(6, 25);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(130, 23);
			this->button17->TabIndex = 63;
			this->button17->Text = L"High-pass filter";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(142, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 19);
			this->label7->TabIndex = 69;
			this->label7->Text = L"A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"�L�n������", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(142, 60);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 19);
			this->label8->TabIndex = 68;
			this->label8->Text = L"Mask";
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->DecimalPlaces = 3;
			this->numericUpDown14->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown14->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown14->Location = System::Drawing::Point(221, 53);
			this->numericUpDown14->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(55, 22);
			this->numericUpDown14->TabIndex = 67;
			this->numericUpDown14->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->DecimalPlaces = 3;
			this->numericUpDown15->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown15->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown15->Location = System::Drawing::Point(221, 76);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(55, 22);
			this->numericUpDown15->TabIndex = 66;
			this->numericUpDown15->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(6, 54);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(130, 46);
			this->button18->TabIndex = 65;
			this->button18->Text = L"High-Boost";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(0, 25);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(130, 23);
			this->button19->TabIndex = 70;
			this->button19->Text = L"Prewitt Filter";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->numericUpDown16->Location = System::Drawing::Point(136, 28);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(130, 22);
			this->numericUpDown16->TabIndex = 71;
			this->numericUpDown16->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(6, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 15);
			this->label9->TabIndex = 74;
			this->label9->Text = L"label9";
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Stencil", 9));
			this->button20->Location = System::Drawing::Point(6, 25);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(220, 28);
			this->button20->TabIndex = 75;
			this->button20->Text = L"DCT";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(9, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 184);
			this->groupBox1->TabIndex = 76;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Work1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�}���ɮ�ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1531, 24);
			this->menuStrip1->TabIndex = 77;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �}���ɮ�ToolStripMenuItem
			// 
			this->�}���ɮ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�}��ToolStripMenuItem });
			this->�}���ɮ�ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"�з���", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->�}���ɮ�ToolStripMenuItem->Name = L"�}���ɮ�ToolStripMenuItem";
			this->�}���ɮ�ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�}���ɮ�ToolStripMenuItem->Text = L"�ɮ�";
			// 
			// �}��ToolStripMenuItem
			// 
			this->�}��ToolStripMenuItem->Name = L"�}��ToolStripMenuItem";
			this->�}��ToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->�}��ToolStripMenuItem->Text = L"�}��";
			this->�}��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�}��ToolStripMenuItem_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(9, 214);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(280, 110);
			this->groupBox2->TabIndex = 77;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Work2";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->Stretch_button);
			this->groupBox3->Controls->Add(this->Shrinking_button);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(295, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(280, 129);
			this->groupBox3->TabIndex = 77;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Work3";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->button13);
			this->groupBox4->Controls->Add(this->numericUpDown5);
			this->groupBox4->Controls->Add(this->numericUpDown6);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->numericUpDown8);
			this->groupBox4->Controls->Add(this->numericUpDown7);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox4->Location = System::Drawing::Point(295, 159);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(284, 165);
			this->groupBox4->TabIndex = 78;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Work4";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button15);
			this->groupBox5->Controls->Add(this->button14);
			this->groupBox5->Controls->Add(this->numericUpDown9);
			this->groupBox5->Controls->Add(this->numericUpDown10);
			this->groupBox5->Controls->Add(this->button16);
			this->groupBox5->Controls->Add(this->numericUpDown12);
			this->groupBox5->Controls->Add(this->numericUpDown11);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox5->Location = System::Drawing::Point(585, 25);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(284, 129);
			this->groupBox5->TabIndex = 79;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Work5";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button17);
			this->groupBox6->Controls->Add(this->numericUpDown13);
			this->groupBox6->Controls->Add(this->button18);
			this->groupBox6->Controls->Add(this->numericUpDown15);
			this->groupBox6->Controls->Add(this->numericUpDown14);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox6->Location = System::Drawing::Point(585, 159);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(284, 111);
			this->groupBox6->TabIndex = 80;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Work6";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button19);
			this->groupBox7->Controls->Add(this->numericUpDown16);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox7->Location = System::Drawing::Point(585, 269);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(284, 55);
			this->groupBox7->TabIndex = 81;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Work7";
			this->groupBox7->Enter += gcnew System::EventHandler(this, &MyForm::groupBox7_Enter);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label10);
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->button20);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->groupBox8->Location = System::Drawing::Point(875, 25);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(470, 299);
			this->groupBox8->TabIndex = 82;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Work8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"�L�n������", 8, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(229, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 15);
			this->label10->TabIndex = 77;
			this->label10->Text = L"label10";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(232, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 46);
			this->button1->TabIndex = 76;
			this->button1->Text = L"Wavelet Form";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(1123, 408);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 83;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 11);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1531, 688);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"�رd�����", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Image-Processing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==�����B�z�覡-�m����Ƕ�
		//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//�Nint���Ы��VImage������ƪ��̫e����m
		IntPtr ptr = ImageData1->Scan0;
		//���˼e��- Byte��Ƽe��
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//�]�w����
		p = (Byte*)((Void*)ptr);
		//���j�C�@�ӹ���
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//�p��Ƕ���(�p��HSI��Y)
				int pixel = (p[0] + p[1] + p[2]) / 3;

				//�����ȶ�J
				p[0] = (Byte)pixel;	//��J������ channel 0 (Blue)
				p[1] = (Byte)pixel;	//��J������ channel 1 (Green)
				p[2] = (Byte)pixel;	//��J������ channel 2 (Red)

				//����U�@�ӹ�����T
				p += 3;
			}
		}
		//Unlock�B�z�����������d��
		Image1->UnlockBits(ImageData1);
		//�N�v����ܦbpictureBox1
		pictureBox2->Image = Image1;
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==�����B�z�覡-�m����Ƕ�
			//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//�Nint���Ы��VImage������ƪ��̫e����m
		IntPtr ptr = ImageData1->Scan0;
		//���˼e��- Byte��Ƽe��
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//�]�w����
		p = (Byte*)((Void*)ptr);
		//���j�C�@�ӹ���
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//�p��Ƕ���(�p��HSI��Y)
				int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);

				//�����ȶ�J
				p[0] = (Byte)pixel;	//��J������ channel 0 (Blue)
				p[1] = (Byte)pixel;	//��J������ channel 1 (Green)
				p[2] = (Byte)pixel;	//��J������ channel 2 (Red)

				//����U�@�ӹ�����T
				p += 3;
			}
		}
		//Unlock�B�z�����������d��
		Image1->UnlockBits(ImageData1);
		//�N�v����ܦbpictureBox1
		pictureBox1->Image = Image1;
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	//==�����B�z�覡-�m����Ƕ�
	//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	//���˼e��- Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	//���j�C�@�ӹ���
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//�p��Ƕ���(�p��HSI��Y)
			int pixel = (p[0] + p[1] + p[2]) / 3;

			//�����ȶ�J
			if (pixel > 127)
			{
				p[0] = (Byte)255;
				p[1] = (Byte)255;
				p[2] = (Byte)255;
			}
			else
			{
				p[0] = (Byte)0;
				p[1] = (Byte)0;
				p[2] = (Byte)0;
			}

			//����U�@�ӹ�����T
			p += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	//�N�v����ܦbpictureBox2
	pictureBox2->Image = Image1;
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==�����B�z�覡-�m����8�Ƕ�
		//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A��
		//�T�ӹ������]�w�ӹ����Ҧ�bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//�Nint���Ы��VImage������ƪ��̫e����m
		IntPtr ptr = ImageData1->Scan0;
		//���˼e��- Byte��Ƽe��
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//�]�w����
		p = (Byte*)((Void*)ptr);
		//���j�C�@�ӹ���
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//�p��Ƕ���(�p��HSI��Y)
				int pixel = (p[0] + p[1] + p[2]) / 3;

				//�����ȶ�J
				if (pixel < 32)
				{
					p[0] = (Byte)0;
					p[1] = (Byte)0;
					p[2] = (Byte)0;
				}
				else if (pixel > 31 && pixel < 64) 
				{
					p[0] = (Byte)36;
					p[1] = (Byte)36;
					p[2] = (Byte)36;
				}
				else if (pixel > 63 && pixel < 96)
				{
					p[0] = (Byte)72;
					p[1] = (Byte)72;
					p[2] = (Byte)72;
				}
				else if (pixel > 95 && pixel < 128)
				{
					p[0] = (Byte)108;
					p[1] = (Byte)108;
					p[2] = (Byte)108;
				}
				else if (pixel > 127 && pixel < 160)
				{
					p[0] = (Byte)144;
					p[1] = (Byte)144;
					p[2] = (Byte)144;
				}
				else if (pixel > 159 && pixel < 192)
				{
					p[0] = (Byte)180;
					p[1] = (Byte)180;
					p[2] = (Byte)180;
				}
				else if (pixel > 191 && pixel < 224)
				{
					p[0] = (Byte)216;
					p[1] = (Byte)216;
					p[2] = (Byte)216;
				}
				else
				{
					p[0] = (Byte)255;
					p[1] = (Byte)255;
					p[2] = (Byte)255;
				}

				//����U�@�ӹ�����T
				p += 3;
			}
		}

		//Unlock�B�z�����������d��
		Image1->UnlockBits(ImageData1);
		//�N�v����ܦbpictureBox1
		pictureBox1->Image = Image1;
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==�����B�z�覡-�m�Ϥ�Ҭۥ[
		// new �@��Image3������
		Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
		rect3 = rect2;
		//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
		ImageData3 = Image3->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
		//�Nint���Ы��VImage������ƪ��̫e����m
		IntPtr ptr = ImageData1->Scan0;
		IntPtr ptr2 = ImageData2->Scan0;
		IntPtr ptr3 = ImageData3->Scan0;
//���˼e��- Byte��Ƽe��
BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
//�]�w����
p = (Byte*)((Void*)ptr);
p2 = (Byte*)((Void*)ptr2);
p3 = (Byte*)((Void*)ptr3);
//���j�C�@�ӹ���
float parameter = (float)numericUpDown1->Value;
for (int y = 0; y < Image1->Height; y++) {
	for (int x = 0; x < Image1->Width; x++) {
		//�����ȶ�J
		p3[0] = (Byte)(p[0] * parameter + p2[0] * (1 - parameter));//��J������ channel 0 (Blue)
		p3[1] = (Byte)(p[1] * parameter + p2[1] * (1 - parameter));//��J������ channel 1 (Green)
		p3[2] = (Byte)(p[2] * parameter + p2[2] * (1 - parameter));//��J������ channel 2 (Red)
		//����U�@�ӹ�����T
		p += 3; p2 += 3; p3 += 3;
	}
}
//Unlock�B�z�����������d��
Image1->UnlockBits(ImageData1);
Image2->UnlockBits(ImageData2);
Image3->UnlockBits(ImageData3);
//�N�v����ܦbpictureBox1
pictureBox3->Image = Image3;
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	//==�����B�z�覡-�Ƕ����
	// new �@��Image3������
	Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
	rect3 = rect2;
	//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	ImageData3 = Image3->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//���˼e��- Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);
	//���j�C�@�ӹ���
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//�����ȶ�J
			int Ypixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
			int Ipixel = (p[0] + p[1] + p[2]) / 3;
			p3[0] = (Byte)abs(Ipixel - Ypixel);
			p3[1] = (Byte)abs(Ipixel - Ypixel);
			p3[2] = (Byte)abs(Ipixel - Ypixel);
			//����U�@�ӹ�����T
			p += 3; p2 += 3; p3 += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox1
	pictureBox1->Image = Image1;
	pictureBox2->Image = Image2;
	pictureBox3->Image = Image3;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	//==�����B�z�覡-����ҩ�j(First-Order)
	//�qnumeric�u����o��
	float parameter = (float)numericUpDown2->Value;
	//
	Rectangle Rect = Select?Rectangle(0, 0, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y)
		:Rectangle(rect.Left,rect.Top,Image1->Width,Image1->Height);
	// new �@��Image3������
	Image3 = gcnew Bitmap((int)((Rect.Width)*parameter), (int)((Rect.Height)*parameter));
	rect3 = System::Drawing::Rectangle(0, 0, Image3->Width, Image3->Height);
	int ByteNumber_Width3 = Image3->Width * 3;
	//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	//IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//���˼e��- Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	//p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);
	//�D�n�B�z���q
	int src_w, src_h;//New X,Y
	float r;//Rate
	for (int y = 0; y < ImageData3->Height; y++) {
		for (int x = 0; x < ImageData3->Width; x++) {
			src_w = (int)(x / parameter);
			src_h = (int)(y / parameter);
			r = (float)(fmod(x, parameter));
			if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(Rect.Height))) && (src_w < ((int)(Rect.Width ))- 1)) {
				p = (Byte*)((Void*)ptr);
				if(Select)
					p += (int)((ImageData1->Stride * StartPnt.Y) + StartPnt.X * 3);
				p3[0] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride)))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3))*(r))) / parameter);
				p3[1] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 1))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3 + 1))*(r))) / parameter);
				p3[2] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 2))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3 + 2))*(r))) / parameter);
			}
			else {
				p3[0] = (Byte)255;
				p3[1] = (Byte)255;
				p3[2] = (Byte)255;
			}
			p3 += 3;
		}
		p3 += BytesOfSkip3;
	}
	//�k��A�^��Image3���_�I
	p3 = (Byte*)((Void*)ptr3);

	for (int y = 0; y < ImageData3->Height; y++) {
		for (int x = 0; x < ImageData3->Width; x++) {
			src_w = (int)(x / parameter);
			src_h = (int)(y / parameter);
			r = (float)(fmod(y, parameter));
			if ((src_h >= 0) && (src_w >= 0) && (src_h < ((int)(Rect.Height))) && (src_w < ((int)(Rect.Width)) - 1)) {
				p = (Byte*)((Void*)ptr);
				if(Select)
					p += (int)((ImageData1->Stride * StartPnt.Y) + StartPnt.X * 3);
				p3[0] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride)))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3))*(r))) / parameter);
				p3[1] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 1))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3 + 1))*(r))) / parameter);
				p3[2] = (Byte)(int)((double)
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 2))*(parameter - r) +
					((*(p + (src_w * 3) + (src_h*ImageData1->Stride) + 3 + 2))*(r))) / parameter);
			}
			else {
				p3[0] = (Byte)255;
				p3[1] = (Byte)255;
				p3[2] = (Byte)255;
			}
			p3 += 3;
		}
		p3 += BytesOfSkip3;
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	//Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox1
	pictureBox3->Image = Image3;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	//==�����B�z�覡-����ҩ�j(Bilinear-Interpolation)
	//�qnumeric�u����o��
	float ratio = (float)numericUpDown3->Value;
	//
	Rectangle Rect = Select?Rectangle(0, 0, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y):
		Rectangle(rect.Left, rect.Top, Image1->Width, Image1->Height);
	// new �@��Image3������
	Image2 = gcnew Bitmap((int)((Rect.Width)*(ratio)), (int)((Rect.Height)*(ratio)));
	rect2 = System::Drawing::Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	//Lock���B�z�������d��(�קK��L�{�ǭק�ӦV����)�A�ѼƤ@�����w�����B�z�d��A�ѼƤG���]�w�B�z�Ҧ�(Ū���B�g�J�BŪ���g�J�A�ĤT�ӹ������]�w�ӹ����Ҧ�bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//IntPtr ptr3 = ImageData3->Scan0;
	//���˼e��- Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//p3 = (Byte*)((Void*)ptr3);
	float src_x, src_y;
	int x1, y1;//�L����˥h��Ʈy���I
	float temp_r, temp_g, temp_b;
	for (int y = 1; y < Image2->Height-1 ; y++) {
		for (int x = 1; x < Image2->Width-1 ; x++) {
//��j�Ϲ�����Ϧ�m��� src x = new x * (src rows / new rows),y as same as x
			src_x = (x / ratio);
			src_y = (y / ratio);
			x1 = (int)(src_x); y1 = (int)(src_y);
			int values[4][3];
//����4�I�y�Ъ�RGB value �̧Ǭ�Q11(x1,y1),Q12(x1,y2),Q21(x2,y1),Q22(x2,y2)
			if (y1 + 1 <Image1->Height-1 && x1 <Image1->Width-1) {
				for (int index_x = 0; index_x <= 1; index_x++) {
					for (int index_y = 0; index_y <= 1; index_y++) {
						p = (Byte*)((Void*)ptr);
						if (Select) {
							p += (int)((y1 + index_y + StartPnt.Y)*ImageData1->Stride + (x1 + index_x + StartPnt.X) * 3);
						}
						else {
							p += (int)((y1 + index_y)*ImageData1->Stride + (x1 + index_x) * 3);
						}
						values[index_y * 1 + index_x * 2][0] = p[0];
						values[index_y * 1 + index_x * 2][1] = p[1];
						values[index_y * 1 + index_x * 2][2] = p[2];
					}
				}
			}
			//�D�n�B�z���q
			temp_r = values[0][2] * ((x1 + 1) - src_x)*((y1 + 1) - src_y) +
				values[1][2] * ((x1 + 1) - src_x)*(src_y - y1) + values[2][2] * (src_x - x1)*((y1 + 1) - src_y)
				+ values[3][2] * (src_x - x1)*(src_y - y1);
			temp_g = values[0][1] * ((x1 + 1) - src_x)*((y1 + 1) - src_y) +
				values[1][1] * ((x1 + 1) - src_x)*(src_y - y1) + values[2][1] * (src_x - x1)*((y1 + 1) - src_y)
				+ values[3][1] * (src_x - x1)*(src_y - y1);
			temp_b = values[0][0] * ((x1 + 1) - src_x)*((y1 + 1) - src_y) +
				values[1][0] * ((x1 + 1) - src_x)*(src_y - y1) + values[2][0] * (src_x - x1)*((y1 + 1) - src_y)
				+ values[3][0] * (src_x - x1)*(src_y - y1);
			p2 = (Byte*)((Void*)ptr2);
			p2 += (int)y*ImageData2->Stride + (int)x * 3;
			p2[0] = (Byte)temp_b;
			p2[1] = (Byte)temp_g;
			p2[2] = (Byte)temp_r;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox1
	pictureBox2->Image = Image2;
}
private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (!SetCursor ) 
	{
		SetCursor = true;
		StartPnt = e->Location;
		toolStripStatusLabel1->Text = "StartPoint( " + e->X.ToString() + " ," + e->Y.ToString()+")";
		Select = true;
	}
}

private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (SetCursor) 
	{
		Graphics^ obj = pictureBox1->CreateGraphics();
		Rectangle Rect(StartPnt.X, StartPnt.Y, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y);
		Red = gcnew Pen(color.Red, 3);
		White = gcnew Pen(color.Gray, 3);
		if (LoadImage)
			obj->DrawImage(Image1, 0, 0);
		else	
			obj->DrawRectangle(White, Rect);	
		Rect = Rectangle(StartPnt.X, StartPnt.Y, e->X-StartPnt.X, e->Y-StartPnt.Y);
		toolStripStatusLabel2->Text = "EndPoint:( " + e->X.ToString() + " ," + e->Y.ToString() + ")";
		EndPnt = e->Location;
		obj->DrawRectangle(Red, Rect);
	}
 
}

private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (SetCursor) {
		toolStripStatusLabel2->Text = "EndPoint:( " + e->X.ToString() + " ," + e->Y.ToString() + ")";
		SetCursor = false;
	}
}
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	Rectangle Rect(StartPnt.X, StartPnt.Y, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y);
	Red = gcnew Pen(color.Red, 3);
	White = gcnew Pen(color.Gray, 3);
	e->Graphics->DrawRectangle(Red,Rect);
	OnPaint(e);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Stretch_button_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stretch
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//�]�w�Ѽ�
	int smax = 255;
	int smin = 0;
	int rmax = 0, rmin = 255;
	int pixel;
	//�Np�k��mImage1����l��m
	p = (Byte*)((Void*)ptr);
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++) 
		{
			pixel = (int)p[0];
			//�p��rmax,rmin
			if (pixel > rmax) {
				rmax = pixel;
			}
			else if(pixel<=rmin) {
				rmin = pixel;
			}
			p += 3;
		}
	}
	//�Np�k��mImage1����l��m
	p = (Byte*)((Void*)ptr);
	//���j�C�@����
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//�����ȶ�J
			int r = p[0];
			int pixel = ((r - rmin)*(smax - smin)) / (rmax - rmin) + smin;
			p[0] = (Byte)(pixel);
			p[1] = (Byte)(pixel);
			p[2] = (Byte)(pixel);
			p += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	//�N�v����ܦbpictureBox2
	pictureBox2->Image = Image1;
}
private: System::Void Shrinking_button_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stretch
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//�]�w�Ѽ�
	int smax = 150;
	int smin = 100;
	int rmax = 0, rmin = 255;
	int pixel;
	//�Np�k��mImage1����l��m
	p = (Byte*)((Void*)ptr);
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			pixel = (int)p[0];
			//�p��rmax,rmin
			if (pixel > rmax) {
				rmax = pixel;
			}
			else if (pixel <= rmin) {
				rmin = pixel;
			}
			p += 3;
		}
	}
	//�Np�k��mImage1����l��m
	p = (Byte*)((Void*)ptr);
	//���j�C�@����
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//�����ȶ�J
			int r = p[0];
			int pixel = ((r - rmin)*(smax - smin)) / (rmax - rmin) + smin;
			p[0] = (Byte)(pixel);
			p[1] = (Byte)(pixel);
			p[2] = (Byte)(pixel);
			p += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	//�N�v����ܦbpictureBox3
	pictureBox3->Image = Image1;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	//equalization
	Image2 = gcnew Bitmap(Image1->Width,Image1->Height,Image1->PixelFormat);
	rect2 = rect;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteNumber_Width2 = Image2->Width * 3;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	int r[256] = { 0 };
	int s[256] = { 0 };
	int pixelcount = 0;
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++) 
		{
			int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
			r[pixel] +=1;
			pixelcount++;
			p += 3;
		}
	}
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//���W�L�{
	int total = 0;
	for (int y = 0; y < 256; y++) {
		total += r[y];
		s[y] = (total * 255) / pixelcount;
	}
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//�������J
			int pixel;
			pixel = s[p[0]];
			p2[0] = (Byte)(pixel);
			p2[1] = (Byte)(pixel);
			p2[2] = (Byte)(pixel);
			p += 3;
			p2 += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpictureBox2
	pictureBox1->Image = Image1;
	pictureBox2->Image = Image2;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	//equalization
	Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
	rect3 = rect;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteNumber_Width3 = Image3->Width * 3;
	int ByteOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//�]�w����
	p = (Byte*)((Void*)ptr);

	Byte** reg =new Byte*[ImageData3->Height];
	for (int i = 0; i < Image3->Height; i++) {
		reg[i] = new Byte[ImageData3->Width];
	}

	p3 = (Byte*)((Void*)ptr3);
	float side = (float)numericUpDown4->Value;
	int overside = (int)((side - 1) / 2);
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			Byte* now_p = p;
			//���j�C�@����
			if (x <= overside || x >= Image1->Width - overside|| y <= overside || y >= Image1->Height - overside) {
				int pixel = 0;
				reg[y][x] = pixel;
			}
			else
			{
				int r[256] = { 0 };
				int s[256] = { 0 };
				int pixelcount = 0;
				/*�����B�z*/
				for (int j = -overside; j <= overside; j++)
				{
					for (int i = -overside; i <= overside; i++)
					{
						
						p += j * ImageData1->Stride + i * 3;
						int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[3] * 0.299);
						r[pixel] += 1; 
						pixelcount++;
						p = now_p;
					}
				}
				//���W��
				int total = 0;
				for (int y = 0; y < 256; y++) {
					total += r[y];
					s[y] = (total * 255) / pixelcount;
				}
				int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[3] * 0.299);
				reg[y][x] = s[pixel];
			}
			p += 3;
		}
	}
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p3 = (Byte*)((Void*)ptr3);
	
	for (int y = 0; y < Image3->Height; y++)
	{
		for (int x = 0; x < Image3->Width; x++)
		{
			p3[0] = (Byte)reg[y][x];
			p3[1] = (Byte)reg[y][x];
			p3[2] = (Byte)reg[y][x];
			p3 += 3;
		}
	}
	for (int i = 0; i < Image3->Height; i++) {
		delete reg[i];
	}
	delete reg;
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox2
	pictureBox1->Image = Image1;
	pictureBox3->Image = Image3;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

	//�������T //���ͤ�k(Box-Muller)
	Image2 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//standard deviation �qnumeric�u����ȡA�i�ۦ�]�w�ƭ�
	float std_dev = (float)numericUpDown5->Value;
	//mean �qnumeric�u����ȡA�i�ۦ�]�w�ƭ�
	float mean = (float)numericUpDown6->Value;
	//�]�w�ü�
	srand((unsigned)time(NULL));
	for (int j = 0; j < Image1->Height; j++) {
		for (int i = 0; i < Image1->Width; i++) {
			//�ܼƫŧi�}�l
			float u = (float)(rand() / (double)RAND_MAX);
			float v = (float)(rand() / (double)RAND_MAX);
			float x = (float)(sqrt(-2 * log(u))*cos(2 * 3.14*v)*std_dev + mean);
			//X = sqrt(-2*log(U1)) * cos(2pi*U2)
			//�i�঳�W�L������ ����b255�϶���
			if (x > 127)
			{
				x = 127;
			}
			else if (x <= -128)
			{
				x = -128;
			}
			//�P�_�O�_�W�L255 or �p��0
			for (int i = 0; i < 3; i++) {
				if ((p[i] + x) > 255) {
					p2[i] = 255;
				}
				else if((p[i]+x)<0){
					p2[i] = 0;
				}
				else
				{
					p2[i] = (unsigned char)(p[i] + x);
				}
			}
			//������������
			//����U�@������T
			p += 3;
			p2 += 3;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpicturebox2
	pictureBox2->Image = Image2;
}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	//salt&pepper
	//�]�mImage2���Ŷ�
	Image2 = gcnew Bitmap((int)(Image1->Width),(int)(Image1->Height));
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������T���̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//�ƻsImage1����ƨ�Image2
	for (int j = 0; j < Image1->Height; j++) {
		for (int i = 0; i < Image1->Width; i++) {
			p2[0] = p[0];
			p2[1] = p[1];
			p2[2] = p[2];
			p += 3; p2 += 3;
		}
	}
	int pepper, salt;
	float pixel = (float)Image1->Height*Image1->Width;
	//�U�۳B�z����i�Ϲ��D�� value/100��
	//�i�ۦ�]�w pepper = pixel*0.1; ���B�z10%����
	pepper = (int)pixel * ((int)numericUpDown8->Value) / 100;
	salt =(int) pixel * ((int)numericUpDown7->Value) / 100;
	int black = 0;
	int white = 255;
	int x, y;
	//�إ߫��а}�C
	bool *randmap = NULL;
	//�]�w�ü�
	srand((unsigned)time(NULL));
	//�]�w�_�l�I
	int Image2_Index = 0;
	int randmapIndex = 0;
	//�]�w���а}�C�j�p�A�����P�_�O�_�B�z�L���}�C
	randmap = new bool[Image2->Height * Image2->Width]{ true };
	for (int i = 0; i < Image2->Height * Image2->Width; i++) {
		randmap[i] = true;
	}
	//salt&pepper ���}�p�� �U��10% �@��randmap
	for (int j = 0; j < pepper; j++) {
		//�]�w����
		p2 = (Byte*)((Void*)ptr2);
		//���o�H��X Y
		x = rand() % ImageData2->Width;
		y = rand() % ImageData2->Height;
		//�p��s��m
		Image2_Index = y * ImageData2->Stride + x * 3;
		//����}�C��m
		randmapIndex = y * Image2->Width + x;
		//p3����s��m
		p2 += (int)Image2_Index;
		for (int i = 0; i <= 2; i++) {
			bool temp = (randmap[randmapIndex]);
			if (temp) {
				//�Y���B�z��m �]�mp4��0
				p2[i] = black;
				if (i == 2) {
					//����3�ӹ����B�z������ �N���ϳ]���ϥιL
					randmap[randmapIndex] = false;
				}
			}
			else break;
		}
	}
	//salt&pepper ���}�p�� �U��10% �@��randmap
	for (int j = 0; j < salt; j++) {
		//�]�w����
		p2 = (Byte*)((Void*)ptr2);
		//���o�H��X Y
		x = rand() % ImageData2->Width;
		y = rand() % ImageData2->Height;
		//�p��s��m
		Image2_Index = y * ImageData2->Stride + x * 3;
		//����}�C��m
		randmapIndex = y * Image2->Width + x;
		//p4����s��m
		p2 += (int)Image2_Index;
		for (int i = 0; i <= 2; i++) {
			bool temp = (randmap[randmapIndex]);
			if (temp) {
				//�Y���B�z��m �]�mp4��0
				p2[i] = white;
				if (i == 2) {
					//����3�ӹ����B�z������ �N���ϳ]���ϥιL
					randmap[randmapIndex] = false;
				}
			}
			else break;
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpicturebox4
	pictureBox2->Image = Image2;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	//Low Pass Filter
	Image2 = gcnew Bitmap((int)Image1->Width, (int)Image1->Height);
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width*3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//���y�e��-Byte��Ƽe��
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);

	//N[n] = {p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
	int num;
	num = (int)numericUpDown9->Value;
	//���o���ݭn�B�z����
	int blank = num / 2;
	//�B�z�d��j�p
	int window_size;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	//�p�ⵡ��j�p
	window_size = num * num;
	int r_temp, g_temp, b_temp;
	for (int y = 0; y < Image2->Height; y++) {
		for (int x = 0; x < Image2->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image2->Width - blank) && y < (Image2->Height - blank)) {
				p = (Byte*)((Void*)ptr);
				r = new int[window_size];
				g = new int[window_size];
				b = new int[window_size];
				//**************************************************************************************//
				//���o�íp��A�ѭ��I�]x,y�^���D�b�����椺���� �]x+c�^,�]y+d�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3));
						g[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3)+1);
						r[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3)+2);
						index++;
					}
				}
				//***************************************************************************************//
				//�p��[���`�M
				for (int a = 0; a < window_size; a++) {
					r_temp += r[a];
					g_temp += g[a];
					b_temp += b[a];
				}
				delete[]r;
				delete[]g;
				delete[]b;
				//�[���`�M/����j�p
				r_temp /= window_size;
				g_temp /= window_size;
				b_temp /= window_size;
				p2[0] = (Byte)b_temp;
				p2[1] = (Byte)g_temp;
				p2[2] = (Byte)r_temp;
				r_temp = 0;
				g_temp = 0;
				b_temp = 0;
			}
			else {
				p = (Byte*)((Void*)ptr);
				//�Np2����S�w��m
				p += (y*ImageData1->Stride + x * 3);
				p2[0] = (Byte)p[0];
				p2[1] = (Byte)p[1];
				p2[2] = (Byte)p[2];
			}
			index = 0;
			p2 += 3;
		}
		p2 += ByteOfSkip2;
	}
	//UnLock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpictureBox
	pictureBox2->Image = Image2;
	}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	//Median Filter
	//�HImpulse Noise���̫��X�Ϲ�Image2�@�����
	Image3 = gcnew Bitmap((int)Image2->Width, (int)Image2->Height);
	rect3 = Rectangle(0, 0, Image3->Width, Image3->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	int ByteNumber_Width3 = Image3->Width * 3;
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);//
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);//
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//���y�e��-Byte��Ƽe��
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	int ByteOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//�]�w����
	p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);
	int num;
	//�qnummericUpDown�u����o�ƭȡA�]�i�H�ۦ�]�w3 5 9
	num = (int)numericUpDown10->Value;
	//���o���ݭn�B�z����
	int blank = num / 2;
	//�B�z�d��j�p
	int window_size = 0;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	//�p�ⵡ��j�p
	window_size = num * num;
	int median = window_size / 2;
	//�]�w����
	p2 = (Byte*)((Void*)ptr2);
	for (int y = 0; y < Image3->Height; y++) {
		for (int x = 0; x < Image3->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image3->Width - blank) && y < (Image3->Height - blank)) {
				p2 = (Byte*)((Void*)ptr2);
				r = new int[window_size];
				g = new int[window_size];
				b = new int[window_size];
				//**************************************************************************************//
				//���o�íp��A�ѭ��I�]x,y�^���D�b�����椺���� �]x+c�^,�]y+d�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3));
						g[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3) + 1);
						r[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***************************************************************************************//
				//�Ƨ�
				int temp_r, temp_g, temp_b;
				for (int i = window_size; i > 1; i--) {
					for (int j = 0; j < i - 1; j++) {
						if (r[j] > r[j + 1]) {
							temp_r = r[j];
							r[j] = r[j + 1];
							r[j + 1] = temp_r;
						}
						if (b[j] > b[j + 1]) {
							temp_b = b[j];
							b[j] = b[j + 1];
							b[j + 1] = temp_b;
						}
						if (g[j] > g[j + 1]) {
							temp_g = g[j];
							g[j] = g[j + 1];
							g[j + 1] = temp_g;
						}
					}
				}
				p3[0] = (Byte)b[median];
				p3[1] = (Byte)g[median];
				p3[2] = (Byte)r[median];
				delete[]r;
				delete[]g;
				delete[]b;
			}
			else {
				p2 = (Byte*)((Void*)ptr2);
				//�Np3����S�w��m
				p2 += (y*ImageData2->Stride + x * 3);
				p3[0] = (Byte)p2[0];
				p3[1] = (Byte)p2[1];
				p3[2] = (Byte)p2[2];
			}
			index = 0;
			p3 += 3;
		}
		p3 += ByteOfSkip3;
	}
	//UnLock�B�z�����������d��
	Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox
	pictureBox3->Image = Image3;
}

private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	//Alpha-trimmed filter
	//�HImpulse Noise��Gussian Noise���̫��X�Ϲ�Image2�@�����
	Image3 = gcnew Bitmap((int)Image2->Width, (int)Image2->Height);
	rect3 = Rectangle(0, 0, Image3->Width, Image3->Height);
	int ByteNumber_Width3 = Image3->Width * 3;
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//���y�e��-Byte��Ƽe��
	int ByteOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//�]�w����
	p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);

	//N[n] = {p[n/k]*(k-r)+p[n/k+1]*r}/k new pixel loc
	int num,T;
	num = (int)numericUpDown11->Value;
	T = (int)numericUpDown12->Value;
	//���o���ݭn�B�z����
	int blank = num / 2;
	//�B�z�d��j�p
	int window_size;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	//�p�ⵡ��j�p
	window_size = num * num;
	int r_temp, g_temp, b_temp;
	for (int y = 0; y < Image3->Height; y++) {
		for (int x = 0; x < Image3->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image3->Width - blank) && y < (Image3->Height - blank)) {
				p2 = (Byte*)((Void*)ptr2);
				r = new int[window_size];
				g = new int[window_size];
				b = new int[window_size];
				//**************************************************************************************//
				//���o�íp��A�ѭ��I�]x,y�^���D�b�����椺���� �]x+c�^,�]y+d�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3));
						g[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3) + 1);
						r[index] = *(p2 + ((y + c)*ImageData2->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				//***************************************************************************************//
				//�Ƨ�
				int temp_r, temp_g, temp_b;
				for (int i = window_size; i > 1; i--) {
					for (int j = 0; j < i - 1; j++) {
						if (r[j] > r[j + 1]) {
							temp_r = r[j];
							r[j] = r[j + 1];
							r[j + 1] = temp_r;
						}
						if (b[j] > b[j + 1]) {
							temp_b = b[j];
							b[j] = b[j + 1];
							b[j + 1] = temp_b;
						}
						if (g[j] > g[j + 1]) {
							temp_g = g[j];
							g[j] = g[j + 1];
							g[j + 1] = temp_g;
						}
					}
				}
				//�eT�ӳ̤p���ȩM�eT�ӳ̤j���ȡA����[���`�M
				for (int a = T; a < window_size-T; a++) {
					r_temp += r[a];
					g_temp += g[a];
					b_temp += b[a];
				}
				delete[]r;
				delete[]g;
				delete[]b;
				//�[���`�M/����j�p
				int temp = window_size - 2 * T;
				r_temp /= temp;
				g_temp /= temp;
				b_temp /= temp;
				p3[0] = (Byte)b_temp;
				p3[1] = (Byte)g_temp;
				p3[2] = (Byte)r_temp;
				r_temp = 0;
				g_temp = 0;
				b_temp = 0;
			}
			else {
				p2 = (Byte*)((Void*)ptr2);
				//�Np2����S�w��m
				p2 += (y*ImageData2->Stride + x * 3);
				p3[0] = (Byte)p2[0];
				p3[1] = (Byte)p2[1];
				p3[2] = (Byte)p2[2];
			}
			index = 0;
			p3 += 3;
		}
		p3 += ByteOfSkip3;
	}
	//UnLock�B�z�����������d��
	Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox
	pictureBox3->Image = Image3;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	//High Pass
	Image2 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect2 = Rectangle(0,0,Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Хu�QImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	int num =(int) numericUpDown13->Value;
	int blank = num / 2;
	int base = 0;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	base = num * num;
	int r_temp, g_temp, b_temp;
	int set_rate;
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image1->Width - blank) && y < (Image1->Height - blank)) {
				//��l��p��m
				p = (Byte*)((Void*)ptr);
				r = new int[base];
				g = new int[base];
				b = new int[base];
				//���� �H�]x,y)�����ߨ��P��� �@9�ӡ]����j�p�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3));
						g[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 1);
						r[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				for (int a = 0; a < base; a++) {
					if (a == base / 2) { set_rate = base - 1; }
					else { set_rate = -1; }
					r_temp += r[a] * set_rate;
					g_temp += g[a] * set_rate;
					b_temp += b[a] * set_rate;
				}
				delete[]r;
				delete[]g;
				delete[]b;
				if (r_temp < 0)r_temp = 0;
				if (g_temp < 0)g_temp = 0;
				if (b_temp < 0)b_temp = 0;
				//��base-----------------------
				r_temp = r_temp / base;
				g_temp = g_temp / base;
				b_temp = b_temp / base;
				//-----------------------------
				////��base-----------------------
				//r_temp = r_temp;
				//g_temp = g_temp;
				//b_temp = b_temp;
				////-----------------------------
				p2[0] = (Byte)b_temp;
				p2[1] = (Byte)g_temp;
				p2[2] = (Byte)r_temp;
				r_temp = 0; b_temp = 0; g_temp = 0;
			}
			else {
				p = (Byte*)((Void*)ptr);
				p += (y*ImageData1->Stride + x * 3);
				p2[0] = (Byte)p[0];
				p2[1] = (Byte)p[1];
				p2[2] = (Byte)p[2];
			}
			index = 0;
			p2 += 3;
		}
		p2 += BytesOfSkip2;
	}
	//UnLock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpictureBox
	pictureBox2->Image = Image2;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	//High Boost
	Image3 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect3 = Rectangle(0, 0, Image3->Width, Image3->Height);
	int ByteNumber_Width3 = Image3->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Хu�QImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p3 = (Byte*)((Void*)ptr3);
	int num = (int)numericUpDown14->Value;
	int A = (int)numericUpDown15->Value;
	int blank = num / 2;
	int base = 0;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	base = num * num;
	int r_temp, g_temp, b_temp;
	int set_rate;
	for (int y = 0; y < Image3->Height; y++) {
		for (int x = 0; x < Image3->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image3->Width - blank) && y < (Image3->Height - blank)) {
				//��l��p��m
				p = (Byte*)((Void*)ptr);
				r = new int[base];
				g = new int[base];
				b = new int[base];
				//���� �H�]x,y)�����ߨ��P��� �@9�ӡ]����j�p�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						b[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3));
						g[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 1);
						r[index] = *(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 2);
						index++;
					}
				}
				for (int a = 0; a < base; a++) {
					if (a == base / 2) { set_rate = A + base -2; }
					else { set_rate = -1; }
					r_temp += r[a] * set_rate;
					g_temp += g[a] * set_rate;
					b_temp += b[a] * set_rate;
				}
				delete[]r;
				delete[]g;
				delete[]b;
				if (r_temp < 0)r_temp = 0;
				if (g_temp < 0)g_temp = 0;
				if (b_temp < 0)b_temp = 0;
				if (r_temp >255)r_temp = 255;
				if (g_temp >255)g_temp = 255;
				if (b_temp >255)b_temp = 255;
				p3[0] = (Byte)b_temp;
				p3[1] = (Byte)g_temp;
				p3[2] = (Byte)r_temp;
				r_temp = 0; b_temp = 0; g_temp = 0;
			}
			else {
				p = (Byte*)((Void*)ptr);
				p += (y*ImageData1->Stride + x * 3);
				p3[0] = (Byte)p[0];
				p3[1] = (Byte)p[1];
				p3[2] = (Byte)p[2];
			}
			index = 0;
			p3 += 3;
		}
		p3 += BytesOfSkip3;
	}
	//UnLock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image3->UnlockBits(ImageData3);
	//�N�v����ܦbpictureBox
	pictureBox3->Image = Image3;
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	//Edge Detection
	int mask0_1[4][3][3] = { { {-1,-1,-1},{0,0,0},{1,1,1} } ,{ {0,1,1},{-1,0,1},{-1,-1,0} } ,{ {-1,-2,-1},{0,0,0},{1,2,1} } ,{ {0,1,2},{-1,0,1},{-2,-1,0} } };
	int mask0_2[4][3][3] = { { {-1,0,1},{-1,0,1},{-1,0,1} } ,{ {-1,-1,0},{-1,0,1},{0,1,1} } ,{ {-1,0,1},{-2,0,2},{-1,0,1} },{ {-2,-1,0},{-1,0,1},{0,1,2} } };
	int sel = (int)numericUpDown16->Value;
	Image2 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Хu�QImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	//���j�C�@�ӹ���
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//�p��Ƕ���(�p��HSI��Y)
			int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);

			//�����ȶ�J
			p[0] = (Byte)pixel;	//��J������ channel 0 (Blue)
			p[1] = (Byte)pixel;	//��J������ channel 1 (Green)
			p[2] = (Byte)pixel;	//��J������ channel 2 (Red)

			//����U�@�ӹ�����T
			p += 3;
		}
	}
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	int num = 3;
	int blank = num / 2;
	int base;
	int index = 0;
	int *r = NULL; int *g = NULL; int *b = NULL;
	base = num * num;
	int r_temp, g_temp, b_temp;
	int temp_r, temp_g, temp_b;
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//�קK�W�X�O����]�w�d��
			if (x > blank && y > blank && x < (Image1->Width - blank) && y < (Image1->Height - blank)) {
				//��l��p��m
				p = (Byte*)((Void*)ptr);
				r = new int[base];
				g = new int[base];
				b = new int[base];
				//���� �H�]x,y)�����ߨ��P��� �@9�ӡ]����j�p�^
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						int index_x = d + blank; int index_y = c + blank;
						int ss = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3))) * mask0_1[sel][index_x][index_y];
						b[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3))) * mask0_1[sel][index_x][index_y];
						g[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 1)) * mask0_1[sel][index_x][index_y];
						r[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 2)) * mask0_1[sel][index_x][index_y];
						index++;
					}
				}
				for (int a = 0; a < base; a++) {
					r_temp += r[a];
					g_temp += g[a];
					b_temp += b[a];
				}
				temp_r += abs(r_temp);
				temp_g += abs(g_temp);
				temp_b += abs(b_temp);
				r_temp = 0; g_temp = 0; b_temp = 0;index = 0;
				for (int c = -blank; c <= blank; c++) {
					for (int d = -blank; d <= blank; d++) {
						int index_x = d + blank; int index_y = c + blank;
						b[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3))) * mask0_2[sel][index_x][index_y];
						g[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 1)) * mask0_2[sel][index_x][index_y];
						r[index] = (*(p + ((y + c)*ImageData1->Stride) + ((x + d) * 3) + 2)) * mask0_2[sel][index_x][index_y];
						index++;
					}
				}
				for (int a = 0; a < base; a++) {
					r_temp += r[a];
					g_temp += g[a];
					b_temp += b[a];
				}
				temp_r += abs(r_temp);
				temp_g += abs(g_temp);
				temp_b += abs(b_temp);
				delete[]r;
				delete[]g;
				delete[]b;
				if (temp_r < 0)temp_r = 0;
				if (temp_g < 0)temp_g = 0;
				if (temp_b < 0)temp_b = 0;
				if (temp_r > 255)temp_r = 255;
				if (temp_g > 255)temp_g = 255;
				if (temp_b > 255)temp_b = 255;
				p2[0] = (Byte)temp_b;
				p2[1] = (Byte)temp_g;
				p2[2] = (Byte)temp_r;
				r_temp = 0; b_temp = 0; g_temp = 0; temp_r = 0; temp_g = 0; temp_b = 0;
			}
			else {
				p = (Byte*)((Void*)ptr);
				p += (y*ImageData1->Stride + x * 3);
				p2[0] = (Byte)p[0];
				p2[1] = (Byte)p[1];
				p2[2] = (Byte)p[2];
			}
			index = 0;
			p2 += 3;
		}
		p2 += BytesOfSkip2;
	}
	//UnLock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpictureBox
	pictureBox2->Image = Image2;
}
float Cos(int XorY, int UorV)
{
	const float pi = 3.14159265;
	float result = cos(((2 * XorY + 1)*UorV*pi) / (2 * 4));
	return result;
}
String^ transform(String^ input) {
	String^ str;
	for (int i = input->Length; i < 4; i++)
		str += "  ";
	str += input;
	return str;
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	const float pi = 3.14159265;
	int image[8][8] = {
	{79,75,79,82,82,86,94,94},
	{76,78,76,82,83,86,85,94},
	{72,75,67,78,80,78,74,82},
	{74,76,75,75,86,80,81,79},
	{73,70,75,67,78,78,79,85},
	{69,63,68,69,75,78,82,80},
	{76,76,71,71,67,79,80,83},
	{72,77,78,69,75,75,78,78}
	};
	int Test[8][8] = {
	{139,148,150,149,155,164,165,168},
	{98,115,130,135,143,146,142,147},
	{89,110,125,128,129,121,104,106},
	{96,116,128,132,134,132,113,109},
	{111,125,127,131,137,137,120,110},
	{122,126,126,131,133,131,126,112},
	{133,134,136,138,140,144,141,139},
	{138,139,139,139,140,146,148,147}
	};
	int Data[8][8] = { 0 };
	float result[8][8] = { 0 }; 
	float in_temp;
	
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Хu�QImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p = (Byte*)((Void*)ptr) + StartPnt.Y * ImageData1->Stride + StartPnt.X *3;
	for (int u = 0; u < 8; u++) {
		for (int v = 0; v < 8; v++) {
			in_temp = 0;
			p = (Byte*)((Void*)ptr) + StartPnt.Y * ImageData1->Stride + StartPnt.X * 3;
			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					p += y * ImageData1->Stride + x * 3;
					//�p��Ƕ���(�p��HSI��Y)
					//int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
					int pixel = (int)(image[x][y]);
					//Data[x][y] = pixel;
					float ans = (pixel - 128)* Cos(x, u)*Cos(y, v);
					in_temp += ans;
				}
			}
			float reg = 0.0;
			float a_u=0.0 ,a_v=0.0;
			if (u <= 0)a_u = sqrt(0.125); else a_u = sqrt(0.25);
			if (v <= 0)a_v = sqrt(0.125); else a_v = sqrt(0.25);
			reg = a_u * a_v * in_temp;
			result[u][v] = round(reg);
		}
	}
	label9->Text = ""; label10->Text = "";
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
		{
			label9->Text += transform(result[i][j].ToString()) + " ";
			label10->Text += transform(image[i][j].ToString()) + " ";
		}
		label9->Text += "\n"; label10->Text += "\n";
	}
	Image1->UnlockBits(ImageData1);
}
private: System::Void �}��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//===�}�ϥD�{��===
	//new �@�� OpenFileDialog ����
	OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
	//�]�wFilter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
	openFileDialog1->Filter = "�I�}�� (*.bmp)|*.bmp|All files (*.*)|*.*";
	//�w�]�ɮצW�٬��ŭ�
	openFileDialog1->FileName = "";
	//�]�w���X��ܵ��������D�W��
	openFileDialog1->Title = "���J�v��";
	//�]�wFilter��ܼҦ�(�̷�Filter�ơA�p���ҿ��1��ܰ_�l�X�{�����I�}�ϡA���2���All filts)
	openFileDialog1->FilterIndex = 2;
	//���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {
		//�N������ɮ�Ū���åB�s��Image1
		Image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		//�]�wrect�d��j�p
		rect = Rectangle(0, 0, Image1->Width, Image1->Height);
		//�����Ȭ�b,g,r�覡�ƦC�U�h�A�ҥH�e�׹�ڤW��*3���ƭȤj�p
		//�w�]Ū��3channel�Ϲ�
		ByteNumber_Width = Image1->Width * 3;
		//���Image1��PictureBox1�u��W
		pictureBox1->Image = Image1;
	}
	LoadImage = true;
	//if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {
	//	//�N������ɮ�Ū���åB�s��Image1
	//	Image2 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
	//	//�]�wrect�d��j�p
	//	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	//	
	//	//�����Ȭ�b,g,r�覡�ƦC�U�h�A�ҥH�e�׹�ڤW��*3���ƭȤj�p
	//	//�w�]Ū��3channel�Ϲ�
	//	ByteNumber_Width = Image2->Width * 3;
	//	//���Image1��PictureBox1�u��W
	//	pictureBox2->Image = Image2;
	//}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//�p�i�ഫ
	Image2 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//�Nint���Ы��VImage������ƪ��̫e����m
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	Byte* Low_index; Byte* High_index;
	//���y�e��-Byte��Ƽe��
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//�]�w����
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);

	for (int pass = 0; pass < 3;pass++)
	{
		float rate = pow(0.5,pass);
		int Height = ImageData1->Height * rate;
		int Width = ImageData1->Width*rate;
		int Stride = ImageData1->Stride;
		//�]�w����
		p = (Byte*)((Void*)ptr);
		p2 = (Byte*)((Void*)ptr2);
		for (int x = 0; x < Width; x++)
		{
			for (int y = 0; y < Height; y++)
			{
				if (x < Width*0.5) {
					Low_index = p + 2 * x * 3 + y * Stride;
					int pixel = (int)(Low_index[0] * 0.114 + Low_index[1] * 0.587 + Low_index[2] * 0.299);
					Low_index += 3;
					pixel += (int)(Low_index[0] * 0.114 + Low_index[1] * 0.587 + Low_index[2] * 0.299);
					pixel = pixel / 2;
					if (pixel > 255) pixel -= 127;
					(p2 + x * 3 + y * Stride)[0] = pixel;
					(p2 + x * 3 + y * Stride)[1] = pixel;
					(p2 + x * 3 + y * Stride)[2] = pixel;
				}
				else {
					int index_x = x - Width*0.5;
					High_index = p + 2 * index_x * 3 +  y * Stride;
					int pixel = (int)(High_index[0] * 0.114 + High_index[1] * 0.587 + High_index[2] * 0.299);
					High_index += 3;
					pixel -= (int)(High_index[0] * 0.114 + High_index[1] * 0.587 + High_index[2] * 0.299);
					pixel = pixel / 2;
					if (pixel < 0) pixel += 127;
					(p2 + x * 3 + y * Stride)[0] = pixel;
					(p2 + x * 3 + y * Stride)[1] = pixel;
					(p2 + x * 3 + y * Stride)[2] = pixel;
				}
			}
		}
		//�]�w����
		p = (Byte*)((Void*)ptr);
		p2 = (Byte*)((Void*)ptr2);
		for (int x = 0; x < Image1->Width; x++)
		{
			for (int y = 0; y < Image1->Height; y++)
			{
				p[0] = p2[0];
				p[1] = p2[1];
				p[2] = p2[2];
				p += 3;
				p2 += 3;
			}
		}
		//�]�w����
		p = (Byte*)((Void*)ptr);
		p2 = (Byte*)((Void*)ptr2);
		for (int x = 0; x < Width; x++)
		{
			for (int y = 0; y < Height; y++)
			{
				if (y < Height*0.5) {
					Low_index = p + x* 3 + 2 * y * Stride;
					int pixel = (int)(Low_index[0] * 0.114 + Low_index[1] * 0.587 + Low_index[2] * 0.299);
					Low_index += ImageData1->Stride;
					pixel += (int)(Low_index[0] * 0.114 + Low_index[1] * 0.587 + Low_index[2] * 0.299);
					pixel = pixel / 2;
					if (pixel > 255) pixel -= 127;
					(p2 + x * 3 + y * Stride)[0] = pixel;
					(p2 + x * 3 + y * Stride)[1] = pixel;
					(p2 + x * 3 + y * Stride)[2] = pixel;
				}
				else {
					int index_y = y - Height*0.5;
					High_index = p + x * 3 + 2 * index_y * Stride;
					int pixel = (int)(High_index[0] * 0.114 + High_index[1] * 0.587 + High_index[2] * 0.299);
					High_index += ImageData1->Stride;
					pixel -= (int)(High_index[0] * 0.114 + High_index[1] * 0.587 + High_index[2] * 0.299);
					pixel = pixel / 2;
					if (pixel < 0) pixel += 127;
					(p2 + x * 3 + y * Stride)[0] = pixel;
					(p2 + x * 3 + y * Stride)[1] = pixel;
					(p2 + x * 3 + y * Stride)[2] = pixel;
				}
			}
		}
		//�]�w����
		p = (Byte*)((Void*)ptr);
		p2 = (Byte*)((Void*)ptr2);
		for (int x = 0; x < Image1->Width; x++)
		{
			for (int y = 0; y < Image1->Height; y++)
			{
				p[0] = p2[0];
				p[1] = p2[1];
				p[2] = p2[2];
				p += 3;
				p2 += 3;
			}
		}
	}
	//Unlock�B�z�����������d��
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//�N�v����ܦbpicturebox2
	pictureBox2->Image = Image2;
}
private: System::Void groupBox7_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	#define N 4
	int a0 = 1 / N;
	int a1 = 2 / N;
	const float pi = 3.14159265;
	int image[4][4] = {
	{80,86,228,224},
	{82,86,230,238},
	{90,82,236,246},
	{96,98,234,242}
	};
	int Data[4][4] = { 0 };
	float result[4][4] = { 0 };
	float in_temp;
	for (int v = 0; v < N; v++) {
		for (int u = 0; u < N; u++) {
			in_temp = 0;
			for (int y = 0; y < N; y++) {
				for (int x = 0; x < N; x++) {
					//�p��Ƕ���(�p��HSI��Y)
					//int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
					int pixel = (int)(image[x][y]);
					//Data[x][y] = pixel;
					float ans = (pixel - 128)* Cos(x, u)*Cos(y, v);
					in_temp += ans;
				}
			}
			float reg = 0.0;
			float a_u = 0.0, a_v = 0.0;
			if (u <= 0)a_u = sqrt(0.25); else a_u = sqrt(0.5);
			if (v <= 0)a_v = sqrt(0.25); else a_v = sqrt(0.5);
			reg = a_u * a_v * in_temp;
			result[u][v] = round(reg);
		}
	}
	label9->Text = ""; label10->Text = "";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			label9->Text += transform(result[i][j].ToString()) + " ";
			label10->Text += transform(image[i][j].ToString()) + " ";
		}
		label9->Text += "\n"; label10->Text += "\n";
	}
}
};
}