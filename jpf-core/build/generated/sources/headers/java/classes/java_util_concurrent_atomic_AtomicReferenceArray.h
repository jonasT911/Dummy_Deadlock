/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_util_concurrent_atomic_AtomicReferenceArray */

#ifndef _Included_java_util_concurrent_atomic_AtomicReferenceArray
#define _Included_java_util_concurrent_atomic_AtomicReferenceArray
#ifdef __cplusplus
extern "C" {
#endif
#undef java_util_concurrent_atomic_AtomicReferenceArray_serialVersionUID
#define java_util_concurrent_atomic_AtomicReferenceArray_serialVersionUID -6209656149925076980i64
/*
 * Class:     java_util_concurrent_atomic_AtomicReferenceArray
 * Method:    getNative
 * Signature: (I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_java_util_concurrent_atomic_AtomicReferenceArray_getNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_util_concurrent_atomic_AtomicReferenceArray
 * Method:    compareAndSetNative
 * Signature: (ILjava/lang/Object;Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_util_concurrent_atomic_AtomicReferenceArray_compareAndSetNative
  (JNIEnv *, jobject, jint, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
