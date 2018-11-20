#pragma once
#include<math.h>
#include<vector>
#include<time.h>
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
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
		/// 設計工具所需的變數。
		/// </summary>

		//===變數宣告===
	//宣告點陣圖的格式
	Bitmap^ Image1; Bitmap^ Image2; Bitmap^ Image3;
	//宣告圖像區域(設定為欲讀取、欲修正的圖像區域)
	Rectangle rect,rect2,rect3,Select_Rect;
	//宣告為一BitmapData型態，表示像素值位置
	Imaging::BitmapData^ ImageData1; Imaging::BitmapData^ ImageData2; Imaging::BitmapData^ ImageData3;
	//宣告一int格式的指標
	IntPtr ptr;
	//掃瞄寬度- Byte資料寬度
	int BytesOfSkip;
	//宣告為寬度的像素資訊
	int ByteNumber_Width;
	//宣告一個Byte格式的指標
	Byte* p; Byte* p2; Byte* p3;
	//選取矩形起末點
	Point StartPnt, EndPnt;
	//判斷滑鼠按下
	bool SetCursor = false, Select = false,LoadImage = false;
	//畫筆
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




	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OpenFile";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(145, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 50);
			this->button2->TabIndex = 8;
			this->button2->Text = L"HSI";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(281, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 50);
			this->button3->TabIndex = 9;
			this->button3->Text = L"YCrCb";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(417, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 50);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Binary-Image";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(553, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 50);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Octal-Image";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(689, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 25);
			this->button6->TabIndex = 12;
			this->button6->Text = L"kI1+mI2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gray;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(34, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(322, 242);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gray;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(322, 242);
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
			this->button7->Location = System::Drawing::Point(825, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 50);
			this->button7->TabIndex = 15;
			this->button7->Text = L"I1 - I2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown1->Location = System::Drawing::Point(689, 40);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(130, 22);
			this->numericUpDown1->TabIndex = 16;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(10, 68);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 25);
			this->button8->TabIndex = 17;
			this->button8->Text = L"FIrst-Order";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(145, 68);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 25);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Bilinear-Interpoltion";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 3;
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown2->Location = System::Drawing::Point(10, 96);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(130, 22);
			this->numericUpDown2->TabIndex = 20;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 3;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown3->Location = System::Drawing::Point(145, 96);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(130, 22);
			this->numericUpDown3->TabIndex = 21;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gray;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(9, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(322, 242);
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
			this->statusStrip1->Location = System::Drawing::Point(0, 691);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1407, 22);
			this->statusStrip1->TabIndex = 33;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(62, 17);
			this->toolStripStatusLabel1->Text = L"StartPoint";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(58, 17);
			this->toolStripStatusLabel2->Text = L"EndPoint";
			// 
			// Stretch_button
			// 
			this->Stretch_button->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Stretch_button->Location = System::Drawing::Point(281, 68);
			this->Stretch_button->Name = L"Stretch_button";
			this->Stretch_button->Size = System::Drawing::Size(130, 50);
			this->Stretch_button->TabIndex = 34;
			this->Stretch_button->Text = L"Stretch";
			this->Stretch_button->UseVisualStyleBackColor = true;
			this->Stretch_button->Click += gcnew System::EventHandler(this, &MyForm::Stretch_button_Click);
			// 
			// Shrinking_button
			// 
			this->Shrinking_button->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Shrinking_button->Location = System::Drawing::Point(417, 68);
			this->Shrinking_button->Name = L"Shrinking_button";
			this->Shrinking_button->Size = System::Drawing::Size(130, 50);
			this->Shrinking_button->TabIndex = 35;
			this->Shrinking_button->Text = L"Shrinking";
			this->Shrinking_button->UseVisualStyleBackColor = true;
			this->Shrinking_button->Click += gcnew System::EventHandler(this, &MyForm::Shrinking_button_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(553, 68);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 50);
			this->button10->TabIndex = 36;
			this->button10->Text = L"Histogram equalization";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 3;
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown4->Location = System::Drawing::Point(689, 96);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(130, 22);
			this->numericUpDown4->TabIndex = 38;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(689, 68);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 25);
			this->button11->TabIndex = 37;
			this->button11->Text = L"Histogram equalization(S)";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(793, 124);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(450, 450);
			this->panel1->TabIndex = 39;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(337, 124);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(450, 450);
			this->panel2->TabIndex = 40;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(961, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(130, 50);
			this->button12->TabIndex = 41;
			this->button12->Text = L"Gussian noise";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(961, 68);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(130, 50);
			this->button13->TabIndex = 42;
			this->button13->Text = L"Impulse noise";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->DecimalPlaces = 3;
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown5->Location = System::Drawing::Point(1234, 16);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(130, 22);
			this->numericUpDown5->TabIndex = 43;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->DecimalPlaces = 3;
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown6->Location = System::Drawing::Point(1234, 40);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(130, 22);
			this->numericUpDown6->TabIndex = 44;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->Location = System::Drawing::Point(1098, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 16);
			this->label1->TabIndex = 45;
			this->label1->Text = L"standard deviation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->Location = System::Drawing::Point(1098, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 46;
			this->label2->Text = L"mean";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->Location = System::Drawing::Point(1098, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 16);
			this->label3->TabIndex = 50;
			this->label3->Text = L"salt";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label4->Location = System::Drawing::Point(1098, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 49;
			this->label4->Text = L"pepper";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 3;
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown7->Location = System::Drawing::Point(1234, 96);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(130, 22);
			this->numericUpDown7->TabIndex = 48;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->DecimalPlaces = 3;
			this->numericUpDown8->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown8->Location = System::Drawing::Point(1234, 72);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(130, 22);
			this->numericUpDown8->TabIndex = 47;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1407, 713);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->Shrinking_button);
			this->Controls->Add(this->Stretch_button);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Image-Processing";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//===開圖主程式===
		//new 一個 OpenFileDialog 物件
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		//設定Filter，用以限定使用者開啟的檔案
		openFileDialog1->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		//預設檔案名稱為空值
		openFileDialog1->FileName = "";
		//設定跳出選擇視窗的標題名稱
		openFileDialog1->Title = "載入影像";
		//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog1->FilterIndex = 2;
		//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {
			//將選取的檔案讀取並且存至Image1
			Image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			//設定rect範圍大小
			rect = Rectangle(0, 0, Image1->Width, Image1->Height);
			//像素值為b,g,r方式排列下去，所以寬度實際上有*3的數值大小
			//預設讀取3channel圖像
			ByteNumber_Width = Image1->Width * 3;
			//顯示Image1於PictureBox1工具上
			pictureBox1->Image = Image1;
		}
		LoadImage = true;
		//if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0) {
		//	//將選取的檔案讀取並且存至Image1
		//	Image2 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
		//	//設定rect範圍大小
		//	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
		//	
		//	//像素值為b,g,r方式排列下去，所以寬度實際上有*3的數值大小
		//	//預設讀取3channel圖像
		//	ByteNumber_Width = Image2->Width * 3;
		//	//顯示Image1於PictureBox1工具上
		//	pictureBox2->Image = Image2;
		//}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==像素處理方式-彩圖轉灰階
		//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		IntPtr ptr = ImageData1->Scan0;
		//掃瞄寬度- Byte資料寬度
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//設定指標
		p = (Byte*)((Void*)ptr);
		//巡迴每一個像素
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//計算灰階值(計算HSI的Y)
				int pixel = (p[0] + p[1] + p[2]) / 3;

				//像素值填入
				p[0] = (Byte)pixel;	//填入像素值 channel 0 (Blue)
				p[1] = (Byte)pixel;	//填入像素值 channel 1 (Green)
				p[2] = (Byte)pixel;	//填入像素值 channel 2 (Red)

				//指到下一個像素資訊
				p += 3;
			}
		}
		//Unlock處理完畢的像素範圍
		Image1->UnlockBits(ImageData1);
		//將影像顯示在pictureBox1
		pictureBox2->Image = Image1;
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==像素處理方式-彩圖轉灰階
			//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		IntPtr ptr = ImageData1->Scan0;
		//掃瞄寬度- Byte資料寬度
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//設定指標
		p = (Byte*)((Void*)ptr);
		//巡迴每一個像素
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//計算灰階值(計算HSI的Y)
				int pixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);

				//像素值填入
				p[0] = (Byte)pixel;	//填入像素值 channel 0 (Blue)
				p[1] = (Byte)pixel;	//填入像素值 channel 1 (Green)
				p[2] = (Byte)pixel;	//填入像素值 channel 2 (Red)

				//指到下一個像素資訊
				p += 3;
			}
		}
		//Unlock處理完畢的像素範圍
		Image1->UnlockBits(ImageData1);
		//將影像顯示在pictureBox1
		pictureBox1->Image = Image1;
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	//==像素處理方式-彩圖轉灰階
	//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	//掃瞄寬度- Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//設定指標
	p = (Byte*)((Void*)ptr);
	//巡迴每一個像素
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//計算灰階值(計算HSI的Y)
			int pixel = (p[0] + p[1] + p[2]) / 3;

			//像素值填入
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

			//指到下一個像素資訊
			p += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	//將影像顯示在pictureBox2
	pictureBox2->Image = Image1;
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==像素處理方式-彩圖轉8灰階
		//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第
		//三個像素為設定該像素模式bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		IntPtr ptr = ImageData1->Scan0;
		//掃瞄寬度- Byte資料寬度
		BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
		//設定指標
		p = (Byte*)((Void*)ptr);
		//巡迴每一個像素
		for (int y = 0; y < Image1->Height; y++) {
			for (int x = 0; x < Image1->Width; x++) {
				//計算灰階值(計算HSI的Y)
				int pixel = (p[0] + p[1] + p[2]) / 3;

				//像素值填入
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

				//指到下一個像素資訊
				p += 3;
			}
		}

		//Unlock處理完畢的像素範圍
		Image1->UnlockBits(ImageData1);
		//將影像顯示在pictureBox1
		pictureBox1->Image = Image1;
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//==像素處理方式-彩圖比例相加
		// new 一個Image3的物件
		Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
		rect3 = rect2;
		//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
		ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
		ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
		ImageData3 = Image3->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		IntPtr ptr = ImageData1->Scan0;
		IntPtr ptr2 = ImageData2->Scan0;
		IntPtr ptr3 = ImageData3->Scan0;
//掃瞄寬度- Byte資料寬度
BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
//設定指標
p = (Byte*)((Void*)ptr);
p2 = (Byte*)((Void*)ptr2);
p3 = (Byte*)((Void*)ptr3);
//巡迴每一個像素
float parameter = (float)numericUpDown1->Value;
for (int y = 0; y < Image1->Height; y++) {
	for (int x = 0; x < Image1->Width; x++) {
		//像素值填入
		p3[0] = (Byte)(p[0] * parameter + p2[0] * (1 - parameter));//填入像素值 channel 0 (Blue)
		p3[1] = (Byte)(p[1] * parameter + p2[1] * (1 - parameter));//填入像素值 channel 1 (Green)
		p3[2] = (Byte)(p[2] * parameter + p2[2] * (1 - parameter));//填入像素值 channel 2 (Red)
		//指到下一個像素資訊
		p += 3; p2 += 3; p3 += 3;
	}
}
//Unlock處理完畢的像素範圍
Image1->UnlockBits(ImageData1);
Image2->UnlockBits(ImageData2);
Image3->UnlockBits(ImageData3);
//將影像顯示在pictureBox1
pictureBox3->Image = Image3;
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	//==像素處理方式-灰階比較
	// new 一個Image3的物件
	Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
	rect3 = rect2;
	//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	ImageData3 = Image3->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//掃瞄寬度- Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//設定指標
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);
	//巡迴每一個像素
	for (int y = 0; y < Image1->Height; y++) {
		for (int x = 0; x < Image1->Width; x++) {
			//像素值填入
			int Ypixel = (int)(p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299);
			int Ipixel = (p[0] + p[1] + p[2]) / 3;
			p3[0] = (Byte)abs(Ipixel - Ypixel);
			p3[1] = (Byte)abs(Ipixel - Ypixel);
			p3[2] = (Byte)abs(Ipixel - Ypixel);
			//指到下一個像素資訊
			p += 3; p2 += 3; p3 += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//將影像顯示在pictureBox1
	pictureBox1->Image = Image1;
	pictureBox2->Image = Image2;
	pictureBox3->Image = Image3;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	//==像素處理方式-等比例放大(First-Order)
	//從numeric工具取得值
	float parameter = (float)numericUpDown2->Value;
	//
	Rectangle Rect = Select?Rectangle(0, 0, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y)
		:Rectangle(rect.Left,rect.Top,Image1->Width,Image1->Height);
	// new 一個Image3的物件
	Image3 = gcnew Bitmap((int)((Rect.Width)*parameter), (int)((Rect.Height)*parameter));
	rect3 = System::Drawing::Rectangle(0, 0, Image3->Width, Image3->Height);
	int ByteNumber_Width3 = Image3->Width * 3;
	//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	//IntPtr ptr2 = ImageData2->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	//掃瞄寬度- Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//設定指標
	p = (Byte*)((Void*)ptr);
	//p2 = (Byte*)((Void*)ptr2);
	p3 = (Byte*)((Void*)ptr3);
	//主要處理片段
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
	//歸位，回到Image3的起點
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
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	//Image2->UnlockBits(ImageData2);
	Image3->UnlockBits(ImageData3);
	//將影像顯示在pictureBox1
	pictureBox3->Image = Image3;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	//==像素處理方式-等比例放大(Bilinear-Interpolation)
	//從numeric工具取得值
	float ratio = (float)numericUpDown3->Value;
	//
	Rectangle Rect = Select?Rectangle(0, 0, EndPnt.X - StartPnt.X, EndPnt.Y - StartPnt.Y):
		Rectangle(rect.Left, rect.Top, Image1->Width, Image1->Height);
	// new 一個Image3的物件
	Image2 = gcnew Bitmap((int)((Rect.Width)*(ratio)), (int)((Rect.Height)*(ratio)));
	rect2 = System::Drawing::Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	//Lock欲處理的像素範圍(避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式(讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//IntPtr ptr3 = ImageData3->Scan0;
	//掃瞄寬度- Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//設定指標
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//p3 = (Byte*)((Void*)ptr3);
	float src_x, src_y;
	int x1, y1;//無條件捨去整數座標點
	float temp_r, temp_g, temp_b;
	for (int y = 1; y < Image2->Height-1 ; y++) {
		for (int x = 1; x < Image2->Width-1 ; x++) {
//放大圖像對於原圖位置比較 src x = new x * (src rows / new rows),y as same as x
			src_x = (x / ratio);
			src_y = (y / ratio);
			x1 = (int)(src_x); y1 = (int)(src_y);
			int values[4][3];
//紀錄4點座標的RGB value 依序為Q11(x1,y1),Q12(x1,y2),Q21(x2,y1),Q22(x2,y2)
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
			//主要處理片段
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
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//Image3->UnlockBits(ImageData3);
	//將影像顯示在pictureBox1
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
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//設定參數
	int smax = 255;
	int smin = 0;
	int rmax = 0, rmin = 255;
	int pixel;
	//將p歸位置Image1的初始位置
	p = (Byte*)((Void*)ptr);
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++) 
		{
			pixel = (int)p[0];
			//計算rmax,rmin
			if (pixel > rmax) {
				rmax = pixel;
			}
			else if(pixel<=rmin) {
				rmin = pixel;
			}
			p += 3;
		}
	}
	//將p歸位置Image1的初始位置
	p = (Byte*)((Void*)ptr);
	//巡迴每一像素
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//像素值填入
			int r = p[0];
			int pixel = ((r - rmin)*(smax - smin)) / (rmax - rmin) + smin;
			p[0] = (Byte)(pixel);
			p[1] = (Byte)(pixel);
			p[2] = (Byte)(pixel);
			p += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	//將影像顯示在pictureBox2
	pictureBox2->Image = Image1;
}
private: System::Void Shrinking_button_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stretch
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	//設定參數
	int smax = 150;
	int smin = 100;
	int rmax = 0, rmin = 255;
	int pixel;
	//將p歸位置Image1的初始位置
	p = (Byte*)((Void*)ptr);
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			pixel = (int)p[0];
			//計算rmax,rmin
			if (pixel > rmax) {
				rmax = pixel;
			}
			else if (pixel <= rmin) {
				rmin = pixel;
			}
			p += 3;
		}
	}
	//將p歸位置Image1的初始位置
	p = (Byte*)((Void*)ptr);
	//巡迴每一像素
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//像素值填入
			int r = p[0];
			int pixel = ((r - rmin)*(smax - smin)) / (rmax - rmin) + smin;
			p[0] = (Byte)(pixel);
			p[1] = (Byte)(pixel);
			p[2] = (Byte)(pixel);
			p += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	//將影像顯示在pictureBox3
	pictureBox3->Image = Image1;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	//equalization
	Image2 = gcnew Bitmap(Image1->Width,Image1->Height,Image1->PixelFormat);
	rect2 = rect;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image2->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteNumber_Width2 = Image2->Width * 3;
	int BytesOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//設定指標
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	int r[256] = { 0 };
	int s[256] = { 0 };
	int pixelcount = 0;
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++) 
		{
			int pixel = p[0] * 0.114 + p[1] * 0.587 + p[2] * 0.299;
			r[pixel] +=1;
			pixelcount++;
			p += 3;
		}
	}
	//設定指標
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//正規過程
	int total = 0;
	for (int y = 0; y < 256; y++) {
		total += r[y];
		s[y] = (total * 255) / pixelcount;
	}
	for (int y = 0; y < Image1->Height; y++)
	{
		for (int x = 0; x < Image1->Width; x++)
		{
			//像素質填入
			int pixel;
			pixel = s[p[0]];
			p2[0] = (Byte)(pixel);
			p2[1] = (Byte)(pixel);
			p2[2] = (Byte)(pixel);
			p += 3;
			p2 += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//將影像顯示在pictureBox2
	pictureBox1->Image = Image1;
	pictureBox2->Image = Image2;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	//equalization
	Image3 = gcnew Bitmap(Image1->Width, Image1->Height, Image1->PixelFormat);
	rect3 = rect;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData3 = Image3->LockBits(rect3, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image3->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr3 = ImageData3->Scan0;
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteNumber_Width3 = Image3->Width * 3;
	int ByteOfSkip3 = ImageData3->Stride - ByteNumber_Width3;
	//設定指標
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
			//巡迴每一像素
			if (x <= overside || x >= Image1->Width - overside|| y <= overside || y >= Image1->Height - overside) {
				int pixel = 0;
				reg[y][x] = pixel;
			}
			else
			{
				int r[256] = { 0 };
				int s[256] = { 0 };
				int pixelcount = 0;
				/*局部處理*/
				for (int j = -overside; j <= overside; j++)
				{
					for (int i = -overside; i <= overside; i++)
					{
						
						p += j * ImageData1->Stride + i * 3;
						int pixel = p[0] * 0.114 + p[1] * 0.587 + p[3] * 0.299;
						r[pixel] += 1; 
						pixelcount++;
						p = now_p;
					}
				}
				//正規化
				int total = 0;
				for (int y = 0; y < 256; y++) {
					total += r[y];
					s[y] = (total * 255) / pixelcount;
				}
				int pixel = p[0] * 0.114 + p[1] * 0.587 + p[3] * 0.299;
				reg[y][x] = s[pixel];
			}
			p += 3;
		}
	}
	//設定指標
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
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image3->UnlockBits(ImageData3);
	//將影像顯示在pictureBox2
	pictureBox1->Image = Image1;
	pictureBox3->Image = Image3;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {

	//高斯雜訊 //產生方法(Box-Muller)
	Image2 = gcnew Bitmap((int)(Image1->Width), (int)(Image1->Height));
	rect2 = Rectangle(0, 0, Image2->Width, Image2->Height);
	int ByteNumber_Width2 = Image2->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	ImageData2 = Image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資料的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr2 = ImageData2->Scan0;
	//掃描寬度-Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteOfSkip2 = ImageData2->Stride - ByteNumber_Width2;
	//設定指標
	p = (Byte*)((Void*)ptr);
	p2 = (Byte*)((Void*)ptr2);
	//standard deviation 從numeric工具取值，可自行設定數值
	float std_dev = (float)numericUpDown5->Value;
	//mean 從numeric工具取值，可自行設定數值
	float mean = (float)numericUpDown6->Value;
	//設定亂數
	srand(time(NULL));
	for (int j = 0; j < Image1->Height; j++) {
		for (int i = 0; i < Image1->Width; i++) {
			//變數宣告開始
			float u = rand() / (double)RAND_MAX;
			float v = rand() / (double)RAND_MAX;
			float x = sqrt(-2 * log(u))*cos(2 * 3.14*v)*std_dev + mean;
			//X = sqrt(-2*log(U1)) * cos(2pi*U2)
			//可能有超過的部分 限制在255區間內
			if (x > 127)
			{
				x = 127;
			}
			else if (x <= -128)
			{
				x = -128;
			}
			//判斷是否超過255 or 小於0
			for (int i = 0; i < 3; i++) {
				if ((p[i] + x) > 255) {
					p2[i] = 255;
				}
				else if((p[i]+x)<0){
					p2[i] = 0;
				}
				else
				{
					p2[i] = p[i] + x;
				}
			}
			//高斯部分結束
			//指到下一像素資訊
			p += 3;
			p2 += 3;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image2->UnlockBits(ImageData2);
	//將影像顯示在picturebox2
	pictureBox2->Image = Image2;
}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	//salt&pepper
	//設置Image4的空間
	Bitmap ^ Image4 = gcnew Bitmap((int)(Image1->Width),(int)(Image1->Height));
	Rectangle rect4 = Rectangle(0, 0, Image4->Width, Image4->Height);
	int ByteNumber_Width4 = Image4->Width * 3;
	ImageData1 = Image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	Imaging::BitmapData^ ImageData4 = Image4->LockBits(rect4, System::Drawing::Imaging::ImageLockMode::ReadWrite, Image1->PixelFormat);
	//將int指標指向Image像素資訊的最前面位置
	IntPtr ptr = ImageData1->Scan0;
	IntPtr ptr4 = ImageData4->Scan0;
	//掃描寬度-Byte資料寬度
	BytesOfSkip = ImageData1->Stride - ByteNumber_Width;
	int ByteOfSkip4 = ImageData4->Stride - ByteNumber_Width4;
	//設定指標
	p = (Byte*)((Void*)ptr);
	Byte* p4 = (Byte*)((Void*)ptr4);
	//複製Image1的資料到Image4
	for (int j = 0; j < Image1->Height; j++) {
		for (int i = 0; i < Image1->Width; i++) {
			p4[0] = p[0];
			p4[1] = p[1];
			p4[2] = p[2];
			p += 3; p4 += 3;
		}
	}
	int pepper, salt;
	float pixel = Image1->Height*Image1->Width;
	//各自處理約整張圖像訴的 value/100次
	//可自行設定 pepper = pixel*0.1; 為處理10%部分
	pepper = pixel * ((int)numericUpDown8->Value)/100;
	salt = pixel * ((int)numericUpDown7->Value) / 100;
	int black = 0;
	int white = 255;
	int x, y;
	//建立指標陣列
	bool *randmap = NULL;
	//設定亂數
	srand(time(NULL));
	//設定起始點
	int Image4_Index = 0;
	int randmapIndex = 0;
	//設定指標陣列大小，此為判斷是否處理過的陣列
	randmap = new bool[Image4->Height * Image4->Width]{ true };
	for (int i = 0; i < Image4->Height * Image4->Width; i++) {
		randmap[i] = true;
	}
	//salt&pepper 分開計算 各為10% 共用randmap
	for (int j = 0; j < pepper; j++) {
		//設定指標
		p4 = (Byte*)((Void*)ptr4);
		//取得隨機X Y
		x = rand() % ImageData4->Width;
		y = rand() % ImageData4->Height;
		//計算新位置
		Image4_Index = y * ImageData4->Stride + x * 3;
		//指到陣列位置
		randmapIndex = y * Image4->Width + x;
		//p4指到新位置
		p4 += (int)Image4_Index;
		for (int i = 0; i <= 2; i++) {
			bool temp = (randmap[randmapIndex]);
			if (temp) {
				//若未處理位置 設置p4為0
				p4[i] = black;
				if (i == 2) {
					//等待3個像素處理完畢後 將此區設為使用過
					randmap[randmapIndex] = false;
				}
			}
			else break;
		}
	}
	//salt&pepper 分開計算 各為10% 共用randmap
	for (int j = 0; j < salt; j++) {
		//設定指標
		p4 = (Byte*)((Void*)ptr4);
		//取得隨機X Y
		x = rand() % ImageData4->Width;
		y = rand() % ImageData4->Height;
		//計算新位置
		Image4_Index = y * ImageData4->Stride + x * 3;
		//指到陣列位置
		randmapIndex = y * Image4->Width + x;
		//p4指到新位置
		p4 += (int)Image4_Index;
		for (int i = 0; i <= 2; i++) {
			bool temp = (randmap[randmapIndex]);
			if (temp) {
				//若未處理位置 設置p4為0
				p4[i] = white;
				if (i == 2) {
					//等待3個像素處理完畢後 將此區設為使用過
					randmap[randmapIndex] = false;
				}
			}
			else break;
		}
	}
	//Unlock處理完畢的像素範圍
	Image1->UnlockBits(ImageData1);
	Image4->UnlockBits(ImageData4);
	//將影像顯示在picturebox4
	pictureBox3->Image = Image4;
}
};
}

