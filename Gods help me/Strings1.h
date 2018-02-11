#pragma once

namespace Godshelpme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Strings
	/// </summary>
	public ref class Strings : public System::Windows::Forms::Form
	{
	public:
		Strings(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Strings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Задание 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Strings::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(416, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(279, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Задание 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Strings::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(279, 187);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(329, 187);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(388, 187);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"№ Слова";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(329, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Буква";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(415, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Ответ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(203, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Место для ввода фразы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Справка";
			this->label5->Click += gcnew System::EventHandler(this, &Strings::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(69, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Справка";
			this->label6->Click += gcnew System::EventHandler(this, &Strings::label6_Click);
			// 
			// Strings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 261);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Strings";
			this->Text = L"Строки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ s = textBox1->Text;
			int q = s->Length;
			int j=0, min, max, maxplace=0, minplace=0, filler=0; 
			int *w = new int [q]; 
			for (int i=0; i<q; ++i) {
				if (s[i] == ' ') {
					w[j]=i-filler; j++; filler = i;
				}
			}
			max = w[0], minplace = 0, maxplace = 0;
			min = w[0];
			for(int i=0; i<j; ++i) {
				if(w[i]>max) {
					max = w[i];
					maxplace = i;
				}
			}
			for(int i=0; i<j; ++i) {
				if(w[i]<min) {
					min = w[i];
					minplace = i;
				}
			}
			if(minplace < maxplace) 
				textBox2 -> Text = "Минимальной";
			else textBox2->Text = "Максимальной";		
		}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ s = textBox1->Text;
			String ^ letter = textBox4 -> Text;
			int number = Convert::ToInt32(textBox3->Text)-1;
			int q = s->Length;
			int j=0;
			bool check = 0;
			//int *w = new int [q]; 
			for (int i=0; i<q; ++i) {
				if (s[i] == ' ')
					j++;
				if(j==number) {
					for(i;s[i]!=' '; ++i) {
						if(Convert::ToString(s[i]) == letter) {
							textBox5->Text = "Содержит";
							check = 1;
						}
						break;
					}
				}
			}
			if(check==0)
				textBox5->Text = "Не содержит";
		}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Дана строка символов. Определить, какое слово - максимальной или минимальной длины - находится ближе к началу строки.");
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Дана строка символов. Определить, содержит ли N-ое  слово строки заданную букву");
		 }
};
}
