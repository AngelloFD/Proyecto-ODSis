#include "DB.h"

DB::DB() {
	this->connectionString = "datasource=localhost; username=root; password=72497771; database=odsisdb;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}

void DB::AbrirConexion() {
	this->conn->Open();
}

void DB::CerrarConexion() {
	this->conn->Close();
}

DataTable^ DB::buscarData(String^ tipo) {
	String^ sql = "select * from Inventario where tipo = '"+ tipo +"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getData() {
	String^ sql = "select * from Inventario";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::Eliminar(String^ nombre) {
	String^ sql = "delete from Inventario where producto = '" + nombre + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminado Correctamente!");
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Buscar(String^ tipo) {
	String^ sql = "select * from Inventario where tipo = '" + tipo + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Producto encontrado!");
	}
	catch (Exception^ e) {
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}