#pragma once
#include <cliext/vector>

using cliext::vector;


namespace Godshelpme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Vectors
	/// </summary>
	public ref class Vectors : public System::Windows::Forms::Form
	{
	public:
		Vectors(void)
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
		~Vectors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(5, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(479, 62);
			this->dataGridView1->TabIndex = 0;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(5, 12);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(71, 20);
			this->numericUpDown1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Размер массива";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(268, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Создать массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Vectors::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 49);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Решить задание!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Vectors::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(29, 167);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Задание 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Vectors::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(348, 167);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(77, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Задание 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Vectors::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(184, 190);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(77, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Задание 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Vectors::radioButton3_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 20);
			this->textBox1->TabIndex = 8;
			// 
			// Vectors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 318);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Vectors";
			this->Text = L"Vectors";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int *a;
		int size;

		private: void task1(int size, int *a) {
					 int q=size-1,w=size-1, max = a[size-1];
					 for(int i=size-1;i>=0;--i) {
						 if(a[i] == 0)
							 q=i;
						 if(a[i]>max) 
							{ max = a[i]; w = i; }
					 }
					 if(q<w) MessageBox::Show("Первое нулевое число находится ближе к началу массива");
					 else if (w<q) MessageBox::Show("Максимальное число находится ближе к началу массива");
					 else {}
				 }

		private: void task2(int size, int *a) {
					 int min = a[0], max = a[0], minplace=0, maxplace=0;
					 bool smth = 0;
					 for(int i=0;i<size;++i) {
						 if(a[i]<min) { min = a[i]; minplace = i; }
						 else if(a[i]>max) { max = a[i]; maxplace = i; }
					 }
					 if(minplace-maxplace==1){
						 MessageBox::Show("Между максимальным и минимальным элементом массива нет других чисел");
						 smth = 1;
					 }
					 else if(minplace<maxplace) {
						 max = a[minplace+1];
						 for(int i=minplace+1;i<maxplace-1;++i) {
							 if(a[i]<max) {max = a[i];}
						 }
					 }
					 else if(minplace>maxplace) {
						 max = a[maxplace+1];
						 for(int i=maxplace+1;i<minplace-1;++i) {
							 if(a[i]<max) {max = a[i];}
						 }
					 }
					 if(smth == 0)
						MessageBox::Show("Минимальное число, расположенное между минимальным и максимальным числом заданного массива, равняется " + Convert::ToString(max));
				 }

		private: void task3(int size, int *a) {
					 int max=a[0], min=a[0], minplace = 0, maxplace = 0, buffer;
					 String ^ s;
					 for(int i=0;i<size;++i) {
						 if(a[i]>max) {max = a[i]; maxplace = i;}
						 if(a[i]<min) {min = a[i]; minplace = i;}
					 }
					 if(maxplace<minplace){
						 for(int i = maxplace; i<minplace; ++i) {
							 buffer = a[i+1];
							 a[i+1] = a[i];
							 a[i] = buffer;
						 }
					 }
					 else if(minplace<maxplace) {
						 for(int i = minplace; i<maxplace; ++i) {
							 buffer = a[i+1];
							 a[i+1] = a[i];
							 a[i] = buffer;
						 }
					 }
					 for(int i=0;i<size;++i)
						 s = s+Convert::ToString(a[i])+ " ";
					 textBox1 -> Text = "Новая последовательность: " + s;
				 }

		private: void show(int size, int *a) {
					 for(int i=0;i<size;++i)
							 dataGridView1 -> Rows[0] -> Cells[i] -> Value = a[i];
				}

		private: void form(int size, int *a) {
					 for(int i=0;i<size;++i){
						 a[i] = Convert::ToInt32(dataGridView1 -> Rows[0] -> Cells[i] -> Value);
					 }
				 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 size = Convert::ToInt32(numericUpDown1->Value);
				 a = new int[size];
				 dataGridView1 -> ColumnCount = size;
				 dataGridView1 -> RowCount = 1;
				 button1 -> Text = "Подтвердить изменения";
				 form(size, a);
				 dataGridView1 -> AutoResizeColumns();
				 show(size, a);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(radioButton1 -> Checked)
					 task1(size, a);
				 else if(radioButton2 -> Checked)
					 task2(size, a);
				 else if(radioButton3 -> Checked)
					 task3(size, a);
			 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Определить, что ближе к началу массива – первый нулевой элемент или максимальный");
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("Найти минимум между максимумом  и минимумом");
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("Используя циклический сдвиг влево или вправо, переместить максимальный элемент на место минимального.");
		 }
};
}
