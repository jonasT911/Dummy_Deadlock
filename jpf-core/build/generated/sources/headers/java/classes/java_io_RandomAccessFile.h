/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_io_RandomAccessFile */

#ifndef _Included_java_io_RandomAccessFile
#define _Included_java_io_RandomAccessFile
#ifdef __cplusplus
extern "C" {
#endif
#undef java_io_RandomAccessFile_CHUNK_SIZE
#define java_io_RandomAccessFile_CHUNK_SIZE 256L
/*
 * Class:     java_io_RandomAccessFile
 * Method:    setDataMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_io_RandomAccessFile_setDataMap
  (JNIEnv *, jobject);

/*
 * Class:     java_io_RandomAccessFile
 * Method:    writeByte
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_java_io_RandomAccessFile_writeByte
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_io_RandomAccessFile
 * Method:    write
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_java_io_RandomAccessFile_write
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     java_io_RandomAccessFile
 * Method:    setLength
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_java_io_RandomAccessFile_setLength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     java_io_RandomAccessFile
 * Method:    read
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_java_io_RandomAccessFile_read
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     java_io_RandomAccessFile
 * Method:    readByte
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_java_io_RandomAccessFile_readByte
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
