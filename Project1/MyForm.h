#pragma once
#include<math.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Text;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;




	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
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
			this->pictureBox2->Location = System::Drawing::Point(689, 444);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(322, 242);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gray;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(689, 120);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(322, 242);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button7
			// 
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
			// label1
			// 
			this->label1->AllowDrop = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 16));
			this->label1->Location = System::Drawing::Point(533, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"�s�ө���", 16));
			this->label2->Location = System::Drawing::Point(416, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 22);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Y:";
			// 
			// label3
			// 
			this->label3->AllowDrop = true;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"�s�ө���", 16));
			this->label3->Location = System::Drawing::Point(416, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 22);
			this->label3->TabIndex = 29;
			this->label3->Text = L"X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"�s�ө���", 16));
			this->label4->Location = System::Drawing::Point(533, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 22);
			this->label4->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gray;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(10, 122);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(322, 242);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"�s�ө���", 24));
			this->label5->Location = System::Drawing::Point(693, 409);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(273, 32);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Bilinear-Interpolation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"�s�ө���", 24));
			this->label6->Location = System::Drawing::Point(693, 87);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 32);
			this->label6->TabIndex = 32;
			this->label6->Text = L"FirstOrder";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1407, 713);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Image-Processing";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
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
		pictureBox1->Image = Image1;
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
	//�N�v����ܦbpictureBox1
	pictureBox1->Image = Image1;
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
		label3->Text = StartPnt.X.ToString();
		label2->Text = StartPnt.Y.ToString();
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
		label1->Text = e->Location.X.ToString();
		label4->Text = e->Location.Y.ToString();
		EndPnt = e->Location;
		obj->DrawRectangle(Red, Rect);
	}
 
}

private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (SetCursor) {
		label1->Text = EndPnt.X.ToString();
		label4->Text = EndPnt.Y.ToString();
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
};
}

