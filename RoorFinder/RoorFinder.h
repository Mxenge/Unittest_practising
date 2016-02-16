// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ROORFINDER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ROORFINDER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ROORFINDER_EXPORTS
#define ROORFINDER_API __declspec(dllexport)
#else
#define ROORFINDER_API __declspec(dllimport)
#endif

// This class is exported from the RoorFinder.dll
class ROORFINDER_API CRoorFinder {
public:
	CRoorFinder(void);
	double SquareRoot(double v);
	// TODO: add your methods here.
};

extern ROORFINDER_API int nRoorFinder;

ROORFINDER_API int fnRoorFinder(void);
