#pragma once
#include "parse/command.h"
#include "merr/MathError.h"
#include "merr/errpick.h"
namespace MathBase {
	class ASTVisitor {
	protected:
		merr::ErrorFlag errFlag;
	public:
		void setError(merr::MathError err);
		bool hasError();
		void clearError();
		merr::MathError getError();
		void raiseError(std::string error, merr::LocationStruct* loc = nullptr);
		bool testErrorPicker(merr::ErrorPicker& p, merr::LocationStruct* loc = nullptr);
	};
}
