#pragma once

#ifdef VECTORADD_EXPORTS
#define VECTORADD_API __declspec(dllexport)
#else
#define VECTORADD_API __declspec(dllimport)
#endif

extern "C" VECTORADD_API void vector_add(const double* a, const double* b, double* out, int size);
