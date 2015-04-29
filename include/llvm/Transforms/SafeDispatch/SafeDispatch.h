#ifndef LLVM_SAFEDISPATCH_H
#define LLVM_SAFEDISPATCH_H

namespace llvm {

class BasicBlockPass;

BasicBlockPass* createChangeConstantPass();

} // End llvm namespace

#endif
