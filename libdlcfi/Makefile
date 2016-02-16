include ../benchmarks/folder.cfg

CC=          $(LLVM_BUILD_DIR)/clang++
AR=          $(BINUTILS_BUILD_DIR)/binutils/ar
GOLD_DIR=    $(BINUTILS_BUILD_DIR)/gold
GOLD_PLUGIN= $(LLVM_BUILD_DIR)/../lib/LLVMgold.so

all:	libdlcfi.so


libdlcfi.so:	dlcfi.o
	$(CC) -shared -B $(GOLD_DIR) -o $@ dlcfi.o -ldl


.cpp.o:
	$(CC) -fPIC -g -c $< -o $@

clean:
	rm -f *.a *.o *.ll *.so
