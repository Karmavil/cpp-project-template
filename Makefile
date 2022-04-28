.PHONY: all
all: format test build

.PHONY: format
format:
	@clang-format -i include/*.hpp
	@clang-format -i src/*.cpp

.PHONY: build
build:
	@mkdir -p build && cd build && cmake .. && make

.PHONY: build-debug
build-debug:
	@mkdir -p build && cd build && cmake -DCMAKE_BUILD_TYPE=debug .. && make

.PHONY: get-dbg-symbols
get-dbg-symbols: build-debug
	@readelf build/CppTemplate --debug-dump | less

.PHONY: debug
debug: build-debug
	@gdb --args "./build/CppTemplate"

.PHONY: test
test: build
	./build/test_student
	./build/test_course
	./build/test_grade

.PHONY: run
run: test
	./build/CppTemplate

.PHONY: clean
clean:
	@rm -rf build
