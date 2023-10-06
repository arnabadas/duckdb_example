/**
 * =====================================
 * Simple DuckDb C++ integration Test
 * =====================================
 */

#include "duckdb.hpp"

#include <iostream>

using namespace duckdb;

int main() {
	duckdb::DuckDB db(nullptr);
	duckdb::Connection con(db);

	con.Query("pragma version")->Print();

	std::string qs0{ "CREATE TABLE mytbl(a INTEGER, b INTEGER)" };
	con.Query(qs0);

	std::string qs1{ "INSERT INTO mytbl(a, b) VALUES (3, 4)" };
	con.Query(qs1);

	con.Query("SELECT * FROM mytbl")->Print();

	return 0;
}