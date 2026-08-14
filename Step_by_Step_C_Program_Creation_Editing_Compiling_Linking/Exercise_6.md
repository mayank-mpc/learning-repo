# Use cases-based structure for conditional compilation

1. Platform specific
```
#ifdef _WIN32
    // Windows-specific code
#elif __linux__
    // Linux-specific code
#else
    // Code for other platforms
#endif
```

2. Debugging
```
#define DEBUG

#ifdef DEBUG
    printf("Debugging information\n");
#endif
```

3. Feature Toggles
```
#define FEATURE_X

#ifdef FEATURE_X
    // Code for Feature X
#else
    // Alternative code
#endif
```