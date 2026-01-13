#ifdef __cplusplus
#ifndef _DEBUG
#define DFR(module, function) \
	DECLSPEC_IMPORT decltype(function) module##$##function;

#define DFR_LOCAL(module, function) \
	DECLSPEC_IMPORT decltype(function) module##$##function; \
	decltype(module##$##function) * function = module##$##function;
#else
#define DFR_LOCAL(module, function)
#define DFR(module, function) \
	decltype(function) *module##$##function = function;
#endif // end of _DEBUG
#else // C mode
// C-compatible DFR macros - requires explicit function signature
#define DFR(module, function)
#define DFR_LOCAL(module, function)
#endif // end of __cplusplus