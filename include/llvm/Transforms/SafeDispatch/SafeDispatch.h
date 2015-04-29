#ifndef LLVM_TRANSFORMS_SAFEDISPATCH_H
#define LLVM_TRANSFORMS_SAFEDISPATCH_H

namespace llvm {

class BasicBlockPass;

BasicBlockPass* createChangeConstantPass();

} // End llvm namespace

#endif
