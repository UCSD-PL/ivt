add_llvm_library(LLVMSafeDispatch
  ChangeConstant.cpp
  SafeDispatch.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms
  ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms/SafeDispatch
  )

add_dependencies(LLVMSafeDispatch intrinsics_gen)
