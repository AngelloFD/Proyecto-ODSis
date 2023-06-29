/*#pragma once

namespace ProyectoODSis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proyectos
	/// </summary>
	public ref class Proyectos : public System::Windows::Forms::Form
	{
	public:
		Proyectos(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Proyectos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Proyectos";
			// 
			// Proyectos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 584);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Proyectos";
			this->Text = L"Proyectos";
			this->Load += gcnew System::EventHandler(this, &Proyectos::Proyectos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Proyectos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
*/
#pragma once
#include "DB.h"

namespace ProyectoODSis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proyectos
	/// </summary>
	public ref class Proyectos : public System::Windows::Forms::Form
	{
	public:
		Proyectos(void)
		{
			InitializeComponent();
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Proyectos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ txtTitulo;
	private: System::Windows::Forms::TextBox^ txtPais;




	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: DB^ data;
	private: System::Windows::Forms::Button^ btnMostrar;



	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;






	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->txtPais = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(189, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Proyectos";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(633, 193);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			this->label2->Click += gcnew System::EventHandler(this, &Proyectos::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(633, 257);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"País";
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(753, 199);
			this->txtTitulo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(178, 22);
			this->txtTitulo->TabIndex = 4;
			// 
			// txtPais
			// 
			this->txtPais->Location = System::Drawing::Point(753, 263);
			this->txtPais->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPais->Name = L"txtPais";
			this->txtPais->Size = System::Drawing::Size(178, 22);
			this->txtPais->TabIndex = 5;
			// 
			// dataGridView
			// 
			this->dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.900001F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView->Location = System::Drawing::Point(20, 101);
			this->dataGridView->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 102;
			this->dataGridView->RowTemplate->Height = 40;
			this->dataGridView->Size = System::Drawing::Size(604, 423);
			this->dataGridView->TabIndex = 7;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::Black;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMostrar->Location = System::Drawing::Point(854, 362);
			this->btnMostrar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(109, 33);
			this->btnMostrar->TabIndex = 8;
			this->btnMostrar->Text = L"MOSTRAR";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Proyectos::btnMostrar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::Black;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEliminar->Location = System::Drawing::Point(628, 362);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(109, 33);
			this->btnEliminar->TabIndex = 10;
			this->btnEliminar->Text = L"ELIMINAR";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Proyectos::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::Black;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.1F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscar->Location = System::Drawing::Point(741, 362);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(109, 33);
			this->btnBuscar->TabIndex = 11;
			this->btnBuscar->Text = L"BUSCAR";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Proyectos::btnBuscar_Click);
			// 
			// Proyectos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(971, 569);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->txtPais);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Proyectos";
			this->Text = L"Proyectos";
			this->Load += gcnew System::EventHandler(this, &Proyectos::Proyectos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Proyectos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();
		this->dataGridView->DataSource = this->data->getDataProyecto();
		this->data->CerrarConexion();
	}
	public: void buscar(String^ tipo) {
		this->data->AbrirConexion();
		this->dataGridView->DataSource = this->data->buscarProyecto(tipo);
		this->data->CerrarConexion();
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ proyectos = Convert::ToString(dataGridView->SelectedRows[0]->Cells[2]->Value);
		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->EliminarProyecto(proyectos);
		data->CerrarConexion();
		this->Consulta();
	}
	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = Convert::ToString(dataGridView->SelectedRows[0]->Cells[0]->Value);
		String^ pais = Convert::ToString(dataGridView->SelectedRows[0]->Cells[2]->Value);

		DB^ data = gcnew DB();
		data->AbrirConexion();
		data->buscarProyecto(nombre);
		data->CerrarConexion();
		this->buscar(nombre);
	}

	};
}