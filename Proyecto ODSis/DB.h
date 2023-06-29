#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;


ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getData();
	DataTable^ buscarData(String^);
	void AbrirConexion();
	void CerrarConexion();
	void Eliminar(String^);
	void Buscar(String^);
};

