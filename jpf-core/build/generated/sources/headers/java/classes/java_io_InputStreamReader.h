/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_io_InputStreamReader */

#ifndef _Included_java_io_InputStreamReader
#define _Included_java_io_InputStreamReader
#ifdef __cplusplus
extern "C" {
#endif
#undef java_io_InputStreamReader_maxSkipBufferSize
#define java_io_InputStreamReader_maxSkipBufferSize 8192L
#undef java_io_InputStreamReader_BUF_SIZE
#define java_io_InputStreamReader_BUF_SIZE 128L
/*
 * Class:     java_io_InputStreamReader
 * Method:    decode
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_java_io_InputStreamReader_decode__IZ
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     java_io_InputStreamReader
 * Method:    decode
 * Signature: ([BI[CIZ)I
 */
JNIEXPORT jint JNICALL Java_java_io_InputStreamReader_decode___3BI_3CIZ
  (JNIEnv *, jobject, jbyteArray, jint, jcharArray, jint, jboolean);

#ifdef __cplusplus
}
#endif
#endif
