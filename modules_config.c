/* Generated automatically from ./Modules/config.c.in by makesetup. */
/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See create_builtin() in import.c. */

#include <uk/config.h>
#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif


extern PyObject* PyInit_posix(void);
extern PyObject* PyInit_errno(void);
extern PyObject* PyInit_pwd(void);
extern PyObject* PyInit__sre(void);
extern PyObject* PyInit__codecs(void);
extern PyObject* PyInit__weakref(void);
extern PyObject* PyInit__functools(void);
extern PyObject* PyInit__operator(void);
extern PyObject* PyInit__collections(void);
extern PyObject* PyInit__abc(void);
extern PyObject* PyInit_itertools(void);
extern PyObject* PyInit_atexit(void);
extern PyObject* PyInit__signal(void);
extern PyObject* PyInit__stat(void);
extern PyObject* PyInit_time(void);
extern PyObject* PyInit__thread(void);
extern PyObject* PyInit__locale(void);
extern PyObject* PyInit__io(void);
extern PyObject* PyInit_faulthandler(void);
extern PyObject* PyInit__tracemalloc(void);
extern PyObject* PyInit__symtable(void);
extern PyObject* PyInit__sqlite3(void);
extern PyObject* PyInit_xxsubtype(void);

/* Unikraft Marker start */
extern PyObject* PyInit__abc(void);
extern PyObject* PyInit_array(void);
extern PyObject* PyInit__asyncio(void);
extern PyObject* PyInit_atexit(void);
extern PyObject* PyInit_audioop(void);
extern PyObject* PyInit_binascii(void);
extern PyObject* PyInit__bisect(void);
extern PyObject* PyInit__blake2(void);
extern PyObject* PyInit__bz2(void);
extern PyObject* PyInit_cmath(void);
extern PyObject* PyInit__codecs_cn(void);
extern PyObject* PyInit__codecs_hk(void);
extern PyObject* PyInit__codecs_iso2022(void);
extern PyObject* PyInit__codecs_jp(void);
extern PyObject* PyInit__codecs_kr(void);
extern PyObject* PyInit__codecs_tw(void);
extern PyObject* PyInit__codecs(void);
extern PyObject* PyInit__collections(void);
extern PyObject* PyInit__contextvars(void);
extern PyObject* PyInit__crypt(void);
extern PyObject* PyInit__csv(void);
extern PyObject* PyInit__ctypes_test(void);
extern PyObject* PyInit__ctypes(void);
extern PyObject* PyInit__curses_panel(void);
extern PyObject* PyInit__curses(void);
extern PyObject* PyInit_custom2(void);
extern PyObject* PyInit_custom3(void);
extern PyObject* PyInit_custom4(void);
extern PyObject* PyInit_custom(void);
extern PyObject* PyInit__datetime(void);
extern PyObject* PyInit__dbm(void);
extern PyObject* PyInit__decimal(void);
extern PyObject* PyInit__elementtree(void);
extern PyObject* PyInit_errno(void);
extern PyObject* PyInit_faulthandler(void);
extern PyObject* PyInit_fcntl(void);
extern PyObject* PyInit__functools(void);
extern PyObject* PyInit_gc(void);
extern PyObject* PyInit_grp(void);
extern PyObject* PyInit__hashlib(void);
extern PyObject* PyInit__heapq(void);
extern PyObject* PyInit__imp(void);
extern PyObject* PyInit__io(void);
extern PyObject* PyInit_itertools(void);
extern PyObject* PyInit__json(void);
extern PyObject* PyInit__locale(void);
extern PyObject* PyInit__lsprof(void);
extern PyObject* PyInit__lzma(void);
extern PyObject* PyInit_math(void);
extern PyObject* PyInit__md5(void);
extern PyObject* PyInit_mmap(void);
extern PyObject* PyInit__multibytecodec(void);
extern PyObject* PyInit__multiprocessing(void);
extern PyObject* PyInit_nis(void);
extern PyObject* PyInit__opcode(void);
extern PyObject* PyInit__operator(void);
extern PyObject* PyInit_ossaudiodev(void);
extern PyObject* PyInit__overlapped(void);
extern PyObject* PyInit__pickle(void);
extern PyObject* PyInit__posixshmem(void);
extern PyObject* PyInit__posixsubprocess(void);
extern PyObject* PyInit_pwd(void);
extern PyObject* PyInit_pyexpat(void);
extern PyObject* PyInit__queue(void);
extern PyObject* PyInit__random(void);
extern PyObject* PyInit_readline(void);
extern PyObject* PyInit_resource(void);
extern PyObject* PyInit__scproxy(void);
extern PyObject* PyInit_select(void);
extern PyObject* PyInit__sha1(void);
extern PyObject* PyInit__sha256(void);
extern PyObject* PyInit__sha3(void);
extern PyObject* PyInit__sha512(void);
extern PyObject* PyInit__signal(void);
extern PyObject* PyInit__socket(void);
extern PyObject* PyInit_spwd(void);
extern PyObject* PyInit__statistics(void);
extern PyObject* PyInit__ssl(void);
extern PyObject* PyInit__stat(void);
extern PyObject* PyInit__string(void);
extern PyObject* PyInit__struct(void);
extern PyObject* PyInit_sublist(void);
extern PyObject* PyInit__symtable(void);
extern PyObject* PyInit_syslog(void);
extern PyObject* PyInit_termios(void);
extern PyObject* PyInit__testbuffer(void);
extern PyObject* PyInit__testcapi(void);
extern PyObject* PyInit__testinternalcapi(void);
extern PyObject* PyInit__testimportmultiple(void);
extern PyObject* PyInit__thread(void);
extern PyObject* PyInit_time(void);
extern PyObject* PyInit__tkinter(void);
extern PyObject* PyInit__tracemalloc(void);
extern PyObject* PyInit_unicodedata(void);
extern PyObject* PyInit__uuid(void);
extern PyObject* PyInit__weakref(void);
extern PyObject* PyInit__winapi(void);
extern PyObject* PyInit_xxlimited(void);
extern PyObject* PyInit__xxtestfuzz(void);
extern PyObject* PyInit_xx(void);
extern PyObject* PyInit_zlib(void);
extern PyObject* PyInit__zoneinfo(void);

/* Unikraft Marker end */
/* -- ADDMODULE MARKER 1 -- */

extern PyObject* PyMarshal_Init(void);
extern PyObject* PyInit__imp(void);
extern PyObject* PyInit_gc(void);
extern PyObject* PyInit__ast(void);
extern PyObject* _PyWarnings_Init(void);
extern PyObject* PyInit__string(void);

#if CONFIG_LIBPYTHON3_EXTENSION_NUMPY
/* Numpy */
extern PyObject* PyInit_bit_generator(void);
extern PyObject* PyInit__bounded_integers(void);
extern PyObject* PyInit__common(void);
extern PyObject* PyInit__generator(void);
extern PyObject* PyInit_lapack_lite(void);
extern PyObject* PyInit__mt19937(void);
extern PyObject* PyInit_mtrand(void);
extern PyObject* PyInit__multiarray_tests(void);
extern PyObject* PyInit__multiarray_umath(void);
extern PyObject* PyInit__operand_flag_tests(void);
extern PyObject* PyInit__pcg64(void);
extern PyObject* PyInit__philox(void);
extern PyObject* PyInit__pocketfft_internal(void);
extern PyObject* PyInit__rational_tests(void);
extern PyObject* PyInit__sfc64(void);
extern PyObject* PyInit__simd(void);
extern PyObject* PyInit__struct_ufunc_tests(void);
extern PyObject* PyInit__umath_linalg(void);
extern PyObject* PyInit__umath_tests(void);
/* Numpy end */
#endif

#if CONFIG_LIBPYTHON3_EXTENSION_SHAPELY
/* Shapely */
extern PyObject* PyInit_lib(void);
extern PyObject* PyInit__geometry_helpers(void);
extern PyObject* PyInit__geos(void);
/* Shapely end */
#endif

#if CONFIG_LIBPYTHON3_EXTENSION_PILLOW
/* Pillow */
extern PyObject* PyInit__imaging(void);
extern PyObject* PyInit__imagingcms(void);
extern PyObject* PyInit__imagingft(void);
extern PyObject* PyInit__imagingmath(void);
extern PyObject* PyInit__imagingmorph(void);
extern PyObject* PyInit__imagingtk(void);
extern PyObject* PyInit__webp(void);
/* Pillow end */
#endif

struct _inittab _PyImport_Inittab[] = {

    {"posix", PyInit_posix},
    {"errno", PyInit_errno},
    {"pwd", PyInit_pwd},
    {"_sre", PyInit__sre},
    {"_codecs", PyInit__codecs},
    {"_weakref", PyInit__weakref},
    {"_functools", PyInit__functools},
    {"_operator", PyInit__operator},
    {"_collections", PyInit__collections},
    {"_abc", PyInit__abc},
    {"itertools", PyInit_itertools},
    {"atexit", PyInit_atexit},
    {"_signal", PyInit__signal},
    {"_stat", PyInit__stat},
    {"time", PyInit_time},
    {"_thread", PyInit__thread},
    {"_locale", PyInit__locale},
    {"_io", PyInit__io},
    {"faulthandler", PyInit_faulthandler},
    {"_tracemalloc", PyInit__tracemalloc},
    {"_symtable", PyInit__symtable},
    {"xxsubtype", PyInit_xxsubtype},

/* -- ADDMODULE MARKER 2 -- */

    /* This module lives in marshal.c */
    {"marshal", PyMarshal_Init},

    /* This lives in import.c */
    {"_imp", PyInit__imp},

    /* This lives in Python/Python-ast.c */
    {"_ast", PyInit__ast},

    /* These entries are here for sys.builtin_module_names */
    {"builtins", NULL},
    {"sys", NULL},

    /* This lives in gcmodule.c */
    {"gc", PyInit_gc},

    /* This lives in _warnings.c */
    {"_warnings", _PyWarnings_Init},

    /* This lives in Objects/unicodeobject.c */
    {"_string", PyInit__string},


/* Unikraft Marker start */
    {"_abc", PyInit__abc},
    {"array", PyInit_array},
    {"_asyncio", PyInit__asyncio},
    {"atexit", PyInit_atexit},
/* audio {"audioop", PyInit_audioop}, */
    {"binascii", PyInit_binascii},
    {"_bisect", PyInit__bisect},
    {"_blake2", PyInit__blake2},
#if CONFIG_LIBPYTHON3_EXTENSION_BZIP2
    {"_bz2", PyInit__bz2},
#endif
    {"cmath", PyInit_cmath},
    {"_codecs_cn", PyInit__codecs_cn},
    {"_codecs_hk", PyInit__codecs_hk},
    {"_codecs_iso2022", PyInit__codecs_iso2022},
    {"_codecs_jp", PyInit__codecs_jp},
    {"_codecs_kr", PyInit__codecs_kr},
    {"_codecs", PyInit__codecs},
    {"_codecs_tw", PyInit__codecs_tw},
    {"_collections", PyInit__collections},
    {"_contextvars", PyInit__contextvars},
//TODO    {"_crypt", PyInit__crypt},
    {"_csv", PyInit__csv},
#if CONFIG_LIBPYTHON3_EXTENSION_CTYPES
//    {"_ctypes_test", PyInit__ctypes_test},
    {"_ctypes", PyInit__ctypes},
#endif
/*    {"_curses_panel", PyInit__curses_panel}, */
//TODO    {"_curses", PyInit__curses}, evaluate to `PyInit(char, long double __restrict, short,...)(short)'
/* Doc {"custom", PyInit_custom},   */
/* Doc {"custom2", PyInit_custom2}, */
/* Doc {"custom3", PyInit_custom3}, */
/* Doc {"custom4", PyInit_custom4}, */
    {"_datetime", PyInit__datetime},
//    {"_dbm", PyInit__dbm},
#if CONFIG_LIBPYTHON3_EXTENSION_LIBMPDEC
    {"_decimal", PyInit__decimal},
#endif
#if CONFIG_LIBPYTHON3_EXTENSION_EXPAT
    {"_elementtree", PyInit__elementtree},
#endif
    {"errno", PyInit_errno},
    {"faulthandler", PyInit_faulthandler},
    {"fcntl", PyInit_fcntl},
    {"_functools", PyInit__functools},
    {"gc", PyInit_gc},
//TODO enable    {"grp", PyInit_grp},
#if CONFIG_LIBPYTHON3_EXTENSION_SSL
    {"_hashlib", PyInit__hashlib},
#endif
    {"_heapq", PyInit__heapq},
    {"_imp", PyInit__imp},
    {"_io", PyInit__io},
    {"itertools", PyInit_itertools},
    {"_json", PyInit__json},
    {"_locale", PyInit__locale},
    {"_lsprof", PyInit__lsprof},
//    {"_lzma", PyInit__lzma},
    {"math", PyInit_math},
    {"_md5", PyInit__md5},
    {"mmap", PyInit_mmap},
    {"_multibytecodec", PyInit__multibytecodec},
/*    {"_multiprocessing", PyInit__multiprocessing},*/
/*    {"nis", PyInit_nis},*/
    {"_opcode", PyInit__opcode},
    {"_operator", PyInit__operator},
/* audio {"ossaudiodev", PyInit_ossaudiodev}, */
/* Windows {"_overlapped", PyInit__overlapped}, */
    {"_pickle", PyInit__pickle},
    {"_posixshmem", PyInit__posixshmem},
    {"_posixsubprocess", PyInit__posixsubprocess},
    {"pwd", PyInit_pwd},
#if CONFIG_LIBPYTHON3_EXTENSION_EXPAT
    {"pyexpat", PyInit_pyexpat},
#endif
    {"_queue", PyInit__queue},
    {"_random", PyInit__random},
//    {"readline", PyInit_readline},
    {"resource", PyInit_resource},
/* iOS {"_scproxy", PyInit__scproxy}, */
    {"select", PyInit_select},
    {"_sha1", PyInit__sha1},
    {"_sha256", PyInit__sha256},
    {"_sha3", PyInit__sha3},
    {"_sha512", PyInit__sha512},
    {"_signal", PyInit__signal},
    {"_socket", PyInit__socket},
//TODO enable    {"spwd", PyInit_spwd},
#if CONFIG_LIBPYTHON3_EXTENSION_SQLITE
    {"_sqlite3", PyInit__sqlite3},
#endif
#if CONFIG_LIBPYTHON3_EXTENSION_SSL
    {"_ssl", PyInit__ssl},
#endif
    {"_statistics", PyInit__statistics},
    {"_stat", PyInit__stat},
    {"_string", PyInit__string},
    {"_struct", PyInit__struct},
/* Doc {"sublist", PyInit_sublist}, */
    {"_symtable", PyInit__symtable},
    {"syslog", PyInit_syslog},
//    {"termios", PyInit_termios},
    {"_testbuffer", PyInit__testbuffer},
    {"_testcapi", PyInit__testcapi},
    {"_testinternalcapi", PyInit__testinternalcapi},
    {"_testimportmultiple", PyInit__testimportmultiple},
    {"_thread", PyInit__thread},
    {"time", PyInit_time},
//    {"_tkinter", PyInit__tkinter},
    {"_tracemalloc", PyInit__tracemalloc},
    {"unicodedata", PyInit_unicodedata},
#if CONFIG_LIBPYTHON3_EXTENSION_UUID
    {"_uuid", PyInit__uuid},
#endif
    {"_weakref", PyInit__weakref},
/* Windows {"_winapi", PyInit__winapi}, */
    {"xxlimited", PyInit_xxlimited},
    {"_xxtestfuzz", PyInit__xxtestfuzz},
    {"xx", PyInit_xx},
#if CONFIG_LIBPYTHON3_EXTENSION_ZLIB
    {"zlib", PyInit_zlib},
#endif
    {"_zoneinfo", PyInit__zoneinfo},
/* Unikraft Marker end */

#if CONFIG_LIBPYTHON3_EXTENSION_NUMPY
    {"numpy_random_bit_generator", PyInit_bit_generator},
    {"numpy_random__bounded_integers", PyInit__bounded_integers},
    {"numpy_random__common", PyInit__common},
    {"numpy_random__generator", PyInit__generator},
    {"numpy_linalg_lapack_lite", PyInit_lapack_lite},
    {"numpy_random__mt19937", PyInit__mt19937},
    {"numpy_random_mtrand", PyInit_mtrand},
    {"numpy_core__multiarray_tests", PyInit__multiarray_tests},
    {"numpy_core__multiarray_umath", PyInit__multiarray_umath},
    {"numpy_core__operand_flag_tests", PyInit__operand_flag_tests},
    {"numpy_random__pcg64", PyInit__pcg64},
    {"numpy_random__philox", PyInit__philox},
    {"numpy_fft__pocketfft_internal", PyInit__pocketfft_internal},
    {"numpy_core__rational_tests", PyInit__rational_tests},
    {"numpy_random__sfc64", PyInit__sfc64},
    {"numpy_core__simd", PyInit__simd},
    {"numpy_core__struct_ufunc_tests", PyInit__struct_ufunc_tests},
    {"numpy_linalg__umath_linalg", PyInit__umath_linalg},
    {"numpy_core__umath_tests", PyInit__umath_tests},
#endif

#if CONFIG_LIBPYTHON3_EXTENSION_SHAPELY
    {"shapely_lib", PyInit_lib},
    {"shapely__geometry_helpers", PyInit__geometry_helpers},
    {"shapely__geos", PyInit__geos},
#endif

#if CONFIG_LIBPYTHON3_EXTENSION_PILLOW
    {"PIL__imaging", PyInit__imaging},
#if CONFIG_LIBLITTLECMS
    {"PIL__imagingcms", PyInit__imagingcms},
#endif
#if CONFIG_LIBFREETYPE
    {"PIL__imagingft", PyInit__imagingft},
#endif
    {"PIL__imagingmath", PyInit__imagingmath},
    {"PIL__imagingmorph", PyInit__imagingmorph},
    {"PIL__imagingtk", PyInit__imagingtk},
#if CONFIG_LIBWEBP
    {"PIL__webp", PyInit__webp},
#endif
#endif

    /* Sentinel */
    {0, 0}
};


#ifdef __cplusplus
}
#endif
