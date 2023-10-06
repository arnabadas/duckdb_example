.PHONY: duckdb clean main

all: main

clean:
	rm -rf build

duckdb:
	make

main:
	@rm -rf build
	@cmake -S . -B build
	@cmake --build build --config Release
	@build/Release/example.exe