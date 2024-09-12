// C program to detect Operating System 
// reference --> https://www.geeksforgeeks.org/how-to-detect-operating-system-through-a-c-program/

//Some macros are defined by the compiler itself based on the platform it is compiling for. For example
//Some macros are defined by the system headers specific to the operating system or development environment. For example
//others are defined if the system supports POSIX or Unix-like standard
//Some operating systems or environments (e.g., Solaris, HP-UX, BSD) define their macros based on system libraries or standard headers. 

#include <stdio.h> 

// Driver Code 
int main() 
{ 

// Checking for windows OS with _WIN32 macro 
#ifdef _WIN32 
	printf("_WIN32 ---> Windows OS"); 

// Checking for mac OS with __APPLE__ macro 
#elif __APPLE__ 
	printf("__APPLE__ ---> Mac OS"); 

// Checking for linux OS with __linux__ macro 
#elif __linux__ 
	printf("__linux__ ---> Linux OS"); 

// Checking for iOS embedded OS with TARGET_OS_EMBEDDED macro 
#elif TARGET_OS_EMBEDDED 
	printf("TARGET_OS_EMBEDDED ---> iOS embedded OS"); 

// Checking for iOS simulator OS with TARGET_IPHONE_SIMULATOR macro 
#elif TARGET_IPHONE_SIMULATOR 
	printf("TARGET_IPHONE_SIMULATOR ---> iOS simulator OS"); 

// Checking for iPhone OS with TARGET_OS_IPHONE macro 
#elif TARGET_OS_IPHONE 
	printf("TARGET_OS_IPHONE ---> Phone OS"); 

// Checking for MAC OS with TARGET_OS_MAC macro 
#elif TARGET_OS_MAC 
	printf("TARGET_OS_MAC ---> MAC OS"); 

// Checking for Android OS with __ANDROID__ macro 
#elif__ANDROID__ 
	printf("__ANDROID__ ---> android OS"); 

// Checking for unix OS with __unix__ macro 
#elif __unix__ 
	printf("__unix__ ---> unix OS"); 

// Checking for POSIX based OS with _POSIX_VERSION macro 
#elif _POSIX_VERSION 
	printf("_POSIX_VERSION ---> POSIX based OS")

// Checking for Solaris OS with __sun macro 
#elif __sun 
	printf("__sun ---> Solaris OS"); 

// Checking for HP UX OS with __hpux macro 
#elif __hpux 
	printf("__hpux ---> HP UX OS"); 

// Checking for BSD OS with BSD macro 
#elif BSD 
	printf("BSD ---> Solaris OS"); 

// Checking for DragonFly BSD OS with __DragonFly__ macro 
#elif __DragonFly__ 
	printf("__DragonFly__ ---> DragonFly BSD OS"); 

// Checking for FreeBSD OS with __FreeBSD__ macro 
#elif __FreeBSD__ 
	printf("__FreeBSD__ ---> FreeBSD OS"); 

// Checking for Net BSD OS with __NetBSD__ macro 
#elif __NetBSD__ 
	printf("__NetBSD__ ---> Net BSD OS"); 

// Checking for Open BSD OS with __OpenBSD__ macro 
#elif __OpenBSD__ 
	printf("__OpenBSD__ ---> Open BSD OS"); 

// If neither of them is present then this is printed... 
#else 
	printf("Unknown"); 
#endif 
	return 0; 
} 
