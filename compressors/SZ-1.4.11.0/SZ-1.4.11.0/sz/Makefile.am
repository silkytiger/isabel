#AM_CFLAGS = -I./include -I../zlib
#LDFLAGS=-fPIC -shared

AUTOMAKE_OPTIONS=foreign
if FORTRAN
include_HEADERS=include/CompressElement.h include/DynamicDoubleArray.h include/rw.h include/conf.h include/dataCompression.h\
		include/dictionary.h include/DynamicFloatArray.h include/VarSet.h include/sz.h include/Huffman.h include/ByteToolkit.h include/szf.h\
		include/sz_float.h include/sz_double.h include/callZlib.h include/iniparser.h include/TypeManager.h\
		include/sz_int8.h include/sz_int16.h include/sz_int32.h include/sz_int64.h include/szd_int8.h include/szd_int16.h include/szd_int32.h include/szd_int64.h\
		include/sz_float_pwr.h include/sz_double_pwr.h include/szd_float.h include/szd_double.h include/szd_float_pwr.h include/szd_double_pwr.h\
		include/DynamicByteArray.h include/DynamicIntArray.h include/TightDataPointStorageI.h include/TightDataPointStorageD.h include/TightDataPointStorageF.h sz.mod rw.mod

lib_LTLIBRARIES=libSZ.la
libSZ_la_CFLAGS=-I./include -I../zlib/
libSZ_la_LDFLAGS = -version-info  1:4:0
libSZ_la_LIDADD=../zlib/.libs/libzlib.a
libSZ_la_SOURCES=src/ByteToolkit.c src/dataCompression.c src/DynamicIntArray.c src/iniparser.c src/szf.c \
		src/CompressElement.c src/DynamicByteArray.c src/rw.c \
		src/TightDataPointStorageI.c src/TightDataPointStorageD.c src/TightDataPointStorageF.c \
		src/conf.c src/DynamicDoubleArray.c src/rwf.c src/TypeManager.c \
		src/dictionary.c src/DynamicFloatArray.c src/VarSet.c src/callZlib.c src/Huffman.c \
		src/sz_float.c src/sz_double.c src/sz_int8.c src/sz_int16.c src/sz_int32.c src/sz_int64.c \
		src/szd_float.c src/szd_double.c src/szd_int8.c src/szd_int16.c src/szd_int32.c src/szd_int64.c src/sz.c\
		src/sz_float_pwr.c src/sz_double_pwr.c src/szd_float_pwr.c src/szd_double_pwr.c\
		src/sz_interface.F90 src/rw_interface.F90
libSZ_la_LINK=$(AM_V_CC)$(LIBTOOL) --tag=FC --mode=link $(FCLD) $(libSZ_la_CFLAGS) -O3 $(libSZ_la_LDFLAGS) -o $(lib_LTLIBRARIES)
else
include_HEADERS=include/CompressElement.h include/DynamicDoubleArray.h include/rw.h include/conf.h include/dataCompression.h\
		include/dictionary.h include/DynamicFloatArray.h include/VarSet.h include/sz.h include/Huffman.h include/ByteToolkit.h\
		include/sz_float.h include/sz_double.h include/callZlib.h include/iniparser.h include/TypeManager.h\
		include/sz_int8.h include/sz_int16.h include/sz_int32.h include/sz_int64.h include/szd_int8.h include/szd_int16.h include/szd_int32.h include/szd_int64.h\
		include/sz_float_pwr.h include/sz_double_pwr.h include/szd_float.h include/szd_double.h include/szd_float_pwr.h include/szd_double_pwr.h\
		include/DynamicByteArray.h include/DynamicIntArray.h include/TightDataPointStorageI.h include/TightDataPointStorageD.h include/TightDataPointStorageF.h

lib_LTLIBRARIES=libSZ.la
libSZ_la_CFLAGS=-g -I./include -I../zlib/
libSZ_la_LDFLAGS = -version-info  1:4:0
libSZ_la_LIDADD=../zlib/.libs/libzlib.a
libSZ_la_SOURCES=src/ByteToolkit.c src/dataCompression.c src/DynamicIntArray.c src/iniparser.c\
		src/CompressElement.c src/DynamicByteArray.c src/rw.c \
		src/TightDataPointStorageI.c src/TightDataPointStorageD.c src/TightDataPointStorageF.c \
		src/conf.c src/DynamicDoubleArray.c src/TypeManager.c \
		src/dictionary.c src/DynamicFloatArray.c src/VarSet.c src/callZlib.c src/Huffman.c \
		src/sz_float.c src/sz_double.c src/sz_int8.c src/sz_int16.c src/sz_int32.c src/sz_int64.c\
		src/szd_float.c src/szd_double.c src/szd_int8.c src/szd_int16.c src/szd_int32.c src/szd_int64.c src/sz.c\
		src/sz_float_pwr.c src/sz_double_pwr.c src/szd_float_pwr.c src/szd_double_pwr.c
libSZ_la_LINK=$(AM_V_CC)$(LIBTOOL) --tag=CC --mode=link $(CCLD) $(libSZ_la_CFLAGS) -O3 $(libSZ_la_LDFLAGS) -o $(lib_LTLIBRARIES)
endif
