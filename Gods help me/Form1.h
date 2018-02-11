#pragma once
#include "Matrixes.h"
#include "Strings1.h"
#include "Vectors.h"
namespace Godshelpme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Матрицы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(335, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Строки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(180, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 72);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Массивы";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Работу выполнил: студент первого курса группы ДКБ-142Б";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ермилов Алексей";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 216);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Вступительный экран\?";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Text = "Какие-то слова";
			 }

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
				 Matrixes^ f2 = gcnew Matrixes;
             f2->Show();
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Strings^ f3 = gcnew Strings;
             f3->Show();
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Vectors^ f4 = gcnew Vectors;
             f4->Show();
			 }
};
}