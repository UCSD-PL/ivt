Low Level Virtual Machine (LLVM) + IVT/OVT (Interleaved/Ordered VTables)
================================

To get started:


0) Setup prerequisites - download and build binutils with gold support.
Lets say that binutils source is in $(BINUTILS_SRC) and the built version
is in $(BINUTILS_BUILD).

1) Clone the repo in $(REPO_DIR)

2) Make a build directory $(REPO_BUILD_DIR)

3) Build the repo by:

  cd $(REPO_BUILD_DIR)
  ./configure --enable-optimized=1 --with-binutils-include=$(BINUTILS_SRC)/include
  make -j 8 (or however many cores you can spare...)

4) Build the two libraries - libdlcfi and libdyncast

  cd $(REPO_DIR)/libdlcfi
  make clean all
  cd $(REPO_DIR)/libdyncast
  make clean all

5) Set the benchmark paths - edit $(REPO_DIR)/benchmarks/Makefile.config and set
  the variables:

  LLVM_DIR = $(REPO_DIR)
  LLVM_BUILD_DIR = $(REPO_BUILD_DIR)
  BINUTILS_BUILD_DIR = $(BINUTILS_BUILD) 

6) Run the benchmarks

  cd $(REPO_DIR)/benchmarks
  ./run_all_benchmarks.sh

If the benchmarks run successfully, you should see something like this in the end:

############################################################
DONE !!!
############################################################
