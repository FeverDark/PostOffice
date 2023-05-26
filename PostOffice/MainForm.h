#pragma once

#include "Functions.h"
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
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(914, 495);
			this->dataGridView1->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 519);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
		c = gcnew DataGridViewColumn();
		td = gcnew DataGridViewTextBoxCell();
		c->HeaderText = L"Размер";
		c->Name = "Column" + (dataGridView1->ColumnCount + 1);
		c->CellTemplate = td;
		dataGridView1->Columns->Add(c);
		int* types;
		int* fromindexes;
		int* indexes;
		float* masses;
		wchar_t*** str;
		int size = 0;
		
		functions->getAll(size, types, fromindexes, indexes, masses, str, L"", 1);
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
			if (types[i] == 2) Values[14] = msclr::interop::marshal_as<String^>(str[i][11]);
			else Values[14] = L"";
			r->SetValues(Values);
			dataGridView1->Rows->Add(r);
			dataGridView1->RowHeadersWidth = 100;
		}
		for (int i = 0; i < size; ++i) {
			for(int j = 0; j< 11; ++j)
				delete str[i][j];
			delete str[i];
		}
		delete str;
		delete masses;
		delete indexes;
		delete fromindexes;
		delete types;
	}
	};
}
