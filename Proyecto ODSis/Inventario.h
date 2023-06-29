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
	/// Resumen de Inventario
	/// </summary>
	public ref class Inventario : public System::Windows::Forms::Form
	{
	public:
		Inventario(void)
		{
			InitializeComponent();
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inventario()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTipo;
	private: System::Windows::Forms::TextBox^ txtProducto;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::DataGridView^ dataGrid;

	private: DB^ data;
	private: System::Windows::Forms::Label^ label_user;
	private: System::Windows::Forms::TextBox^ txtSeleccionado;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTipo = (gcnew System::Windows::Forms::TextBox());
			this->txtProducto = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtSeleccionado = (gcnew System::Windows::Forms::TextBox());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tipo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(145, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Producto";
			// 
			// txtTipo
			// 
			this->txtTipo->Location = System::Drawing::Point(245, 30);
			this->txtTipo->Name = L"txtTipo";
			this->txtTipo->Size = System::Drawing::Size(476, 22);
			this->txtTipo->TabIndex = 5;
			this->txtTipo->TextChanged += gcnew System::EventHandler(this, &Inventario::txtTipo_TextChanged);
			// 
			// txtProducto
			// 
			this->txtProducto->Location = System::Drawing::Point(245, 68);
			this->txtProducto->Name = L"txtProducto";
			this->txtProducto->Size = System::Drawing::Size(476, 22);
			this->txtProducto->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtSeleccionado);
			this->panel1->Controls->Add(this->label_user);
			this->panel1->Controls->Add(this->btnEliminar);
			this->panel1->Controls->Add(this->btnBuscar);
			this->panel1->Controls->Add(this->btnMostrar);
			this->panel1->Controls->Add(this->txtTipo);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txtProducto);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(936, 195);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Inventario::panel1_Paint);
			// 
			// txtSeleccionado
			// 
			this->txtSeleccionado->Location = System::Drawing::Point(245, 110);
			this->txtSeleccionado->Name = L"txtSeleccionado";
			this->txtSeleccionado->Size = System::Drawing::Size(476, 22);
			this->txtSeleccionado->TabIndex = 13;
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->Location = System::Drawing::Point(145, 114);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(97, 16);
			this->label_user->TabIndex = 12;
			this->label_user->Text = L"Seleccionado: ";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(590, 150);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(119, 23);
			this->btnEliminar->TabIndex = 11;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Inventario::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(414, 150);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(119, 23);
			this->btnBuscar->TabIndex = 10;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Inventario::btnBuscar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Location = System::Drawing::Point(233, 150);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(119, 23);
			this->btnMostrar->TabIndex = 9;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Inventario::btnMostrar_Click);
			// 
			// dataGrid
			// 
			this->dataGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGrid->Location = System::Drawing::Point(173, 217);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersVisible = false;
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid->ShowCellErrors = false;
			this->dataGrid->Size = System::Drawing::Size(536, 339);
			this->dataGrid->TabIndex = 10;
			this->dataGrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Inventario::dataGrid_CellClick);
			// 
			// Inventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 584);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inventario";
			this->Text = L"Inventario";
			this->Load += gcnew System::EventHandler(this, &Inventario::Inventario_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Inventario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() {
		this->data->AbrirConexion();
		this->dataGrid->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}

	public: void buscar(String^ tipo) {
		this->data->AbrirConexion();
		this->dataGrid->DataSource = this->data->buscarData(tipo);
		this->data->CerrarConexion();
	}

private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ producto = Convert::ToString(dataGrid->SelectedRows[0]->Cells[2]->Value);
	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Eliminar(producto);
	data->CerrarConexion();
	this->Consulta();
}
private: System::Void dataGrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ producto = Convert::ToString(dataGrid->SelectedRows[0]->Cells[2]->Value);
	String^ tipo = Convert::ToString(dataGrid->SelectedRows[0]->Cells[0]->Value);
	txtSeleccionado->Text = producto;
	txtTipo->Text = tipo;
	txtProducto->Text = producto;
}
private: System::Void txtTipo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tipo = Convert::ToString(dataGrid->SelectedRows[0]->Cells[0]->Value);
	String^ producto = Convert::ToString(dataGrid->SelectedRows[0]->Cells[2]->Value);

	DB^ data = gcnew DB();
	data->AbrirConexion();
	data->Buscar(tipo);
	data->CerrarConexion();
	this->buscar(tipo);

}
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Consulta();
}
};
}
