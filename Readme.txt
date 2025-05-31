Instructions:

eloop was downloaded from https://github.com/latelee/hostapd.git
within src/utils we can find all the files needed for eloop, copy only the files
needed as placed in dependency/hostapd_eloop directory.

List of files copeid
.
├── build_config.h
├── CMakeLists.txt
├── common
│   └── ieee802_11_defs.h
├── common.c
├── common.h
├── eloop.c
├── eloop.h
├── includes.h
├── list.h
├── os.h
├── os_unix.c
├── trace.c
├── trace.h
├── utils
│   └── common.h
├── wpabuf.c
├── wpabuf.h
├── wpa_debug.c
└── wpa_debug.h

Within the directory "common" and "utils" are created, the files within common
was found in same utils directory wheras the file for utils is found in
utils/../common/

additionally added the below lines in eloop.h file
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

