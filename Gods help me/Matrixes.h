#pragma once
#include <cliext/vector>
#include <string>

using cliext::vector;

namespace Godshelpme {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Matrixes
	/// </summary>
	public ref class Matrixes : public System::Windows::Forms::Form
	{
	public:
		Matrixes(void)
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
		~Matrixes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(24, 27);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество строк";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(441, 370);
			this->dataGridView1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 36);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Принять";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Matrixes::button1_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(204, 27);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(55, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(177, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Количество столбцов";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 484);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(327, 60);
			this->dataGridView2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 468);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Задание 1";
			this->label3->Click += gcnew System::EventHandler(this, &Matrixes::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(353, 485);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 59);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Выполнить задание 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Matrixes::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(46, 561);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(355, 53);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Выполнить задание 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Matrixes::button3_Click);
			// 
			// Matrixes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 628);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"Matrixes";
			this->Text = L"Матрицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int height;
		int width;
		int **matrix;

		private: void show(int height, int width, int **matrix) {
					 for(int i=0;i<height;++i) {
						 for(int j=0;j<width;++j) {
							 dataGridView1 -> TopLeftHeaderCell -> Value = "Матрица";
							 dataGridView1 -> Rows[i] -> Cells[j] -> Value = matrix[i][j];
						 }
					 }
				 }

		private: void form(int height, int width, int **matrix) {
					 for(int i=0;i<height;++i) {
						 for(int j=0;j<width;++j) {
							 matrix[i][j] = Convert::ToInt32(dataGridView1 -> Rows[i] -> Cells[j] -> Value);
						 }
					 }
				 }
				 
		private: void check_simple(int height, int width, int **matrix) {
					 vector<int> v;
					 bool count = 0;
					 for(int i=0;i<height;++i) {
						 for(int j=0;j<width;++j) {
							 if(j<i && matrix[i][j]%2!=0) {
								 for(int k=3; k<abs(matrix[i][j]/2); ++k) {
									 if(matrix[i][j]%k == 0)
										 count = 1;
								 }
								 if(count == 0)
									 v.push_back(matrix[i][j]);
								 count = 0;
							 }
						 }
					 }
					dataGridView2 -> ColumnCount = v.size();
					dataGridView2 -> RowCount = 1;
					 for(int i=0;i<v.size();++i) {
						 dataGridView2 -> Rows[0] -> Cells[i] -> Value = v[i];
					 }
					 dataGridView2 -> AutoResizeColumns();
				 }

		private: void secondtask(int height, int width, int **matrix) {
					 String ^s, ^filler;
					 int negative;
					 int positive;
					 for (int i = 0; i < width; i++) {
						 negative = 0;
						 positive = 0;
							for (int j = 0; j < height; j++) {
								if(matrix[j][i] < 0)
									negative++;
								else if(matrix[j][i] > 0)
									positive++;
								else {}
							}
							if(negative == positive) {
								filler = Convert::ToString(i+1);
								s = s + filler + ", "; }
					 }
					 MessageBox::Show("Следующие столбцы насчитывают одинаковое количество положительных и отрицательных чисел: " + s);
				 }



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 //vector<int> v;
				 height = Convert::ToInt32(numericUpDown1->Value);
				 width = Convert::ToInt32(numericUpDown2->Value);
				 **matrix;
				 matrix = new int* [height];
				 for (int i = 0; i < height; ++i)
					 matrix[i] = new int [width];
				 dataGridView1 -> ColumnCount = width;
				 dataGridView1 -> RowCount = height;
				 form(height, width, matrix);
				 show(height, width, matrix);
				 //dataGridView2 -> ColumnCount = v.size();
				 //dataGridView2 -> RowCount = 1;
				 dataGridView1 -> AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
				 dataGridView1 -> AutoResizeColumns();

			 }
private: System::Void сгенерироватьМатрицуУказаннойРазмерностиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 button1 -> PerformClick();
		 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 check_simple(height, width, matrix);
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Задание с матрицами №1: Сформировать одномерный массив из элементов квадратной матрицы, стоящих под главной диагональю и являющихся простыми числами.");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 secondtask(height, width, matrix);
		 }
};
}
