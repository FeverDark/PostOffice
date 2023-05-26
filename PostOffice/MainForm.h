#pragma once

#include "CreationForm.h"
#include "EditForm.h"
#include <msclr\marshal_cppstd.h>

namespace PostOffice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
				functions = CFunctions::getInstance();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
			delete functions;
		}
	private: CFunctions* functions;
	private: String^ find = L"";
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(304, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(622, 357);
			this->dataGridView1->TabIndex = 0;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(13, 111);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 19);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Номеру";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(13, 135);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(137, 19);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Стране отправления";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(14, 159);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(139, 19);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Городу отправления";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(14, 183);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(143, 19);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Адресу отправления:";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(14, 207);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(145, 19);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Индексу отправления";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(14, 231);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(130, 19);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Стране назначения";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(160, 111);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(132, 19);
			this->radioButton7->TabIndex = 7;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Городу назначения";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(160, 135);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(133, 19);
			this->radioButton8->TabIndex = 8;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Адресу назначения";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->Location = System::Drawing::Point(160, 159);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(138, 19);
			this->radioButton9->TabIndex = 9;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Индексу назначения";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton10->Location = System::Drawing::Point(160, 183);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(124, 19);
			this->radioButton10->TabIndex = 10;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"ФИО отправителя";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton11->Location = System::Drawing::Point(160, 207);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(119, 19);
			this->radioButton11->TabIndex = 11;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"ФИО получателя";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton12->Location = System::Drawing::Point(159, 231);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(81, 19);
			this->radioButton12->TabIndex = 12;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Телефону";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton13->Location = System::Drawing::Point(160, 255);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(52, 19);
			this->radioButton13->TabIndex = 13;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Весу";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 58);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Добавить отправление";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(143, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 58);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Изменить состояние";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 312);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 58);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Сортировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13, 280);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(280, 26);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 21);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Сортировать по:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Фильтр:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(137, 312);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 28);
			this->label3->TabIndex = 20;
			this->label3->Text = L"*для поиска по телефону данные \r\nнеобходимо ввести полностью";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 381);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton13);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Почтовое отделение";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		radioButton1->Checked = 1;
		button3_Click(dataGridView1, gcnew EventArgs());
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		find = textBox1->Text;
		button3_Click(dataGridView1, gcnew EventArgs());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		DataGridViewColumn^ c = gcnew DataGridViewColumn();
		DataGridViewCell^ td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Номер";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Страна адресанта";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Город адресанта";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Адрес адресанта";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Индекс адресанта";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Страна получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Город получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Адрес получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Индекс получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"ФИО адресанта";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"ФИО получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Номер телефона получателя";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Вес";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Состояние";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		/*c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Размер";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);*/
		int* types;
		int* fromindexes;
		int* indexes;
		float* masses;
		wchar_t*** str;
		int size = 0;
		if (radioButton1->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 1);
		}
		else if (radioButton2->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 2);
		} 
		else if(radioButton3->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 3);
		}
		else if (radioButton4->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 4);
		}
		else if (radioButton5->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 5);
		}
		else if (radioButton6->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 6);
		}
		else if (radioButton7->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 7);
		}
		else if (radioButton8->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 8);
		}
		else if (radioButton9->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 9);
		}
		else if (radioButton10->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 10);
		}
		else if (radioButton11->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 11);
		}
		else if (radioButton12->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 12);
		}
		else if (radioButton13->Checked) {
			functions->getAll(size, types, fromindexes, indexes, masses, str, msclr::interop::marshal_as<std::wstring>(find->ToString()), 13);
		}
		for (int i = 0; i < size; ++i) {
			DataGridViewRow^ r = gcnew DataGridViewRow();
			if (types[i] == 1)
				r->HeaderCell->Value = L"Письмо";
			else r->HeaderCell->Value = L"Посылка";
			r->CreateCells(dataGridView1);
			cli::array<String^>^ Values = gcnew cli::array<String^>(dataGridView1->ColumnCount);
			Values[0] = msclr::interop::marshal_as<String^>(str[i][0]);
			Values[1] = msclr::interop::marshal_as<String^>(str[i][1]);
			Values[2] = msclr::interop::marshal_as<String^>(str[i][2]);
			Values[3] = msclr::interop::marshal_as<String^>(str[i][3]);
			Values[4] = fromindexes[i].ToString();
			Values[5] = msclr::interop::marshal_as<String^>(str[i][4]);
			Values[6] = msclr::interop::marshal_as<String^>(str[i][5]);
			Values[7] = msclr::interop::marshal_as<String^>(str[i][6]);
			Values[8] = indexes[i].ToString();
			Values[9] = msclr::interop::marshal_as<String^>(str[i][7]);
			Values[10] = msclr::interop::marshal_as<String^>(str[i][8]);
			Values[11] = msclr::interop::marshal_as<String^>(str[i][9]);
			Values[12] = masses[i].ToString();
			Values[13] = msclr::interop::marshal_as<String^>(str[i][10]);
			//if (types[i] == 2) Values[14] = msclr::interop::marshal_as<String^>(str[i][11]);
			//else Values[14] = L"";
			r->SetValues(Values);
			dataGridView1->Rows->Add(r);
			dataGridView1->RowHeadersWidth = 100;
		}
		for (int i = 0; i < size; ++i) {
			for (int j = 0; j < 11; ++j)
				delete str[i][j];
			delete str[i];
		}
		delete str;
		delete masses;
		delete indexes;
		delete fromindexes;
		delete types;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		PostOffice::CreationForm creation;
		creation.ShowDialog();
		if (creation.number->Length != 0) {
			functions->addTransmission(msclr::interop::marshal_as<std::wstring>(creation.number->ToString()), msclr::interop::marshal_as<std::wstring>(creation.fromcountry->ToString()), msclr::interop::marshal_as<std::wstring>(creation.fromcity->ToString()), msclr::interop::marshal_as<std::wstring>(creation.fromadress->ToString()), msclr::interop::marshal_as<std::wstring>(creation.fromindex->ToString()), msclr::interop::marshal_as<std::wstring>(creation.country->ToString()), msclr::interop::marshal_as<std::wstring>(creation.city->ToString()), msclr::interop::marshal_as<std::wstring>(creation.adress->ToString()), msclr::interop::marshal_as<std::wstring>(creation.index->ToString()), msclr::interop::marshal_as<std::wstring>(creation.from->ToString()), msclr::interop::marshal_as<std::wstring>(creation.to->ToString()), msclr::interop::marshal_as<std::wstring>(creation.phonenumber->ToString()), msclr::interop::marshal_as<std::wstring>(creation.mass->ToString()), L"Передано в доставку", msclr::interop::marshal_as<std::wstring>(creation.type->ToString()), msclr::interop::marshal_as<std::wstring>(creation.x->ToString()), msclr::interop::marshal_as<std::wstring>(creation.y->ToString()), msclr::interop::marshal_as<std::wstring>(creation.z->ToString()));
			button3_Click(dataGridView1, gcnew EventArgs());
			MainForm::Update();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int tempid = dataGridView1->CurrentCell->RowIndex;
		if (tempid >= 0 && tempid < dataGridView1->RowCount) {
			PostOffice::EditForm editform(this->dataGridView1->Rows[tempid]->Cells[13]->Value->ToString());
			editform.ShowDialog();
			if (editform.state->Length != 0) {
				functions->editState(msclr::interop::marshal_as<std::wstring>(this->dataGridView1->Rows[tempid]->Cells[0]->Value->ToString()), msclr::interop::marshal_as<std::wstring>(editform.state->ToString()));
				button3_Click(dataGridView1, gcnew EventArgs());
				MainForm::Update();
			}
		}
	}
};
}
