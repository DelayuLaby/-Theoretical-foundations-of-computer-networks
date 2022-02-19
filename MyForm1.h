#pragma once
#include <fstream>
#include <iostream>
namespace Project1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::IO;



	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	public:
		MyForm1(void)
		{
			InitializeComponent();
			this->comboBox2->SelectedItem = "9600";


		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::IO::Ports::SerialPort^ serialPort1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"50", L"75", L"110", L"150", L"300", L"600", L"1200",
					L"2400", L"4800", L"9600", L"19200", L"38400", L"57600", L"115200"
			});
			this->comboBox2->Location = System::Drawing::Point(624, 421);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(639, 398);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(150, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 50);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Init Port";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(339, 495);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 50);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(624, 463);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 50);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 204);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(784, 90);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(12, 44);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(784, 90);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm1::serialPort1_DataReceived);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Input";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Output";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 341);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Control and Debug";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 312);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(784, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"................................................................................."
				L"................................................................................"
				L".................................";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(816, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 364);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(588, 125);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox1_TextChanged);
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::richTextBox1_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(808, 573);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(826, 620);
			this->MinimumSize = System::Drawing::Size(826, 620);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Serial Port Communication";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: void InitCOM1(void) {
		if (!this->serialPort1->IsOpen) {
			this->serialPort1->PortName = "COM1";
			this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
			this->serialPort1->Open();
			this->richTextBox1->Text = "COM1 is open. The Baud Rate is " + this->comboBox2->Text + "\r" + "\n" + this->richTextBox1->Text;
		}
		else if (this->serialPort1->IsOpen) {
			this->richTextBox1->Text = "COM-port is open" + "\r" + "\n" + this->richTextBox1->Text;
		}
	}
	private: void InitCOM2(void) {
		if (!this->serialPort1->IsOpen) {
			this->serialPort1->PortName = "COM2";
			this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
			this->serialPort1->Open();
			this->richTextBox1->Text = "COM2 is open. The Baud Rate is " + this->comboBox2->Text + "\r" + "\n" + this->richTextBox1->Text;
		}
		else if (this->serialPort1->IsOpen) {
			this->richTextBox1->Text = "COM-port is open" + "\r" + "\n" + this->richTextBox1->Text;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text = String::Empty;
		if (this->comboBox2->Text == String::Empty)
			this->richTextBox1->Text = "Please Select Port Setting" + "\r" + "\n" + this->richTextBox1->Text;
		else {
			try {
				try {
					InitCOM1();
				}
				catch (UnauthorizedAccessException^) {
					InitCOM2();
				}
			}
			catch (UnauthorizedAccessException^) {
				this->richTextBox1->Text = "Error! Not found free ports." + "\r" + "\n" + this->richTextBox1->Text;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = this->serialPort1->PortName;
		this->serialPort1->Close();
		this->textBox1->Text = String::Empty;
		this->textBox2->Text = String::Empty;
		if (!this->serialPort1->IsOpen)
			this->richTextBox1->Text = "Port " + name + " is close" + "\r" + "\n" + this->richTextBox1->Text;
		else
			this->richTextBox1->Text = "Error close" + "\r" + "\n" + this->richTextBox1->Text;
		this->button1->Enabled = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button3->Enabled = false;
		this->button2->Enabled = false;
		this->button1->Enabled = false;
		if (this->serialPort1->IsOpen) {
			String^ message = this->textBox2->Text;
			if (message == String::Empty) {
				this->richTextBox1->Text = "The INPUT field is empty" + "\r" + "\n" + this->richTextBox1->Text;
			}
			else {
				
				this->serialPort1->WriteLine(message);
				this->textBox2->Text = String::Empty;
			}
		}
		else {
			this->richTextBox1->Text = "Port Not Opened" + "\r" + "\n" + this->richTextBox1->Text;
		}
		this->button3->Enabled = true;
		this->button2->Enabled = true;
		this->button1->Enabled = true;
	}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (e->KeyChar >= 128) {
			e->Handled = true;
		}

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (e->KeyChar >= 128) {
			e->Handled = true;
		}
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (e->KeyChar >= 128) {
			e->Handled = true;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->MaximizeBox = false;
	}


	public: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
		this->textBox1->Text = this->serialPort1->ReadLine();
		
	}


	private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char ch = e->KeyChar;
		if (e->KeyChar >= 128) {
			e->Handled = true;
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
