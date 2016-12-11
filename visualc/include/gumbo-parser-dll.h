#pragma once

#ifdef _WIN32
#   ifdef GUMBO_EXPORT
#       define GUMBO_API __declspec(dllexport)
#   elif defined(GUMBO_IMPORT)
#       define GUMBO_API __declspec(dllimport)
#   else
#       define GUMBO_API
#   endif
#elif __GNUC__ >= 4
#   define GUMBO_API __attribute__((visibility("default")))
#else
#   define GUMBO_API
#endif
