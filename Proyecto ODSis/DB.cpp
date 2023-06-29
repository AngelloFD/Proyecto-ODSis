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

DataTable^ DB::getDataD() {
	String^ sql = "select * from Donaciones";
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

/*void DB::Insertar(String^ tipo, String^ codigo, String^ fecha, String^ nombre, String^ producto, String^ cantidad, String^ moneda) {
	String^ sql = "insert into Donaciones(tipo, codigo, fecha, nombre, producto, cantidad, moneda) values ('"+tipo+"', "+codigo+", '"+fecha+"', '"+nombre+"', '"+producto+"', "+cantidad+", '"+moneda+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try {
		cursor->ExecuteNonQuery();
	}
}*/

DataTable^ DB::buscarProyecto(String^ tipo) {
	String^ sql = "select * from Proyectos where nombre = '" + tipo + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

DataTable^ DB::getDataProyecto() {
	String^ sql = "select * from proyectos";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::EliminarProyecto(String^ nombre) {
	String^ sql = "delete from proyectos where nombre = '" + nombre + "'";
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