/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_net_URLClassLoader */

#ifndef _Included_java_net_URLClassLoader
#define _Included_java_net_URLClassLoader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     java_net_URLClassLoader
 * Method:    addURL0
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_java_net_URLClassLoader_addURL0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_net_URLClassLoader
 * Method:    findClass
 * Signature: (Ljava/lang/String;)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_net_URLClassLoader_findClass
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_net_URLClassLoader
 * Method:    findResource0
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_net_URLClassLoader_findResource0
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_net_URLClassLoader
 * Method:    findResources0
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_java_net_URLClassLoader_findResources0
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
