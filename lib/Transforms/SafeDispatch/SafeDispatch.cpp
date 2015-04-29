#include "llvm/Transforms/SafeDispatch/SafeDispatch.h"
#include "llvm-c/Initialization.h"
#include "llvm/Analysis/Passes.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/Verifier.h"
#include "llvm/InitializePasses.h"
#include "llvm/IR/LegacyPassManager.h"

using namespace llvm;

/// initializeSafeDispatchPasses - Initialize all passes linked into the
/// SafeDispatch library.
void llvm::initializeSafeDispatch(PassRegistry &) {
  initializeChangeConstantPass(Registry);
}

void LLVMInitializeSafeDispatch(LLVMPassRegistryRef R) {
  initializeSafeDispatch(*unwrap(R));
}

void LLVMAddChangeConstantPass(LLVMPassManagerRef PM) {
  unwrap(PM)->add(createChangeConstantPass());
}
