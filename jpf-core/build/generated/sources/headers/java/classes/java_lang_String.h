/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_lang_String */

#ifndef _Included_java_lang_String
#define _Included_java_lang_String
#ifdef __cplusplus
extern "C" {
#endif
#undef java_lang_String_serialVersionUID
#define java_lang_String_serialVersionUID -6849794470754667710i64
/*
 * Class:     java_lang_String
 * Method:    init
 * Signature: ([CII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_init___3CII
  (JNIEnv *, jobject, jcharArray, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    init
 * Signature: ([III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_init___3III
  (JNIEnv *, jobject, jintArray, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    init
 * Signature: ([BIII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_init___3BIII
  (JNIEnv *, jobject, jbyteArray, jint, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    init
 * Signature: ([BIILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_init___3BIILjava_lang_String_2
  (JNIEnv *, jobject, jbyteArray, jint, jint, jstring);

/*
 * Class:     java_lang_String
 * Method:    init
 * Signature: ([BII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_init___3BII
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    codePointAt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_codePointAt
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_lang_String
 * Method:    codePointBefore
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_codePointBefore
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_lang_String
 * Method:    codePointCount
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_codePointCount
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    offsetByCodePoints
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_offsetByCodePoints
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    getChars
 * Signature: (II[CI)V
 */
JNIEXPORT void JNICALL Java_java_lang_String_getChars__II_3CI
  (JNIEnv *, jobject, jint, jint, jcharArray, jint);

/*
 * Class:     java_lang_String
 * Method:    getChars
 * Signature: ([CI)V
 */
JNIEXPORT void JNICALL Java_java_lang_String_getChars___3CI
  (JNIEnv *, jobject, jcharArray, jint);

/*
 * Class:     java_lang_String
 * Method:    getBytes
 * Signature: (II[BI)V
 */
JNIEXPORT void JNICALL Java_java_lang_String_getBytes__II_3BI
  (JNIEnv *, jobject, jint, jint, jbyteArray, jint);

/*
 * Class:     java_lang_String
 * Method:    getBytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_java_lang_String_getBytes__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    getBytes
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_java_lang_String_getBytes__
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    equals
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_equals
  (JNIEnv *, jobject, jobject);

/*
 * Class:     java_lang_String
 * Method:    equals0
 * Signature: ([C[CI)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_equals0
  (JNIEnv *, jclass, jcharArray, jcharArray, jint);

/*
 * Class:     java_lang_String
 * Method:    equalsIgnoreCase
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_equalsIgnoreCase
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    compareTo
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_compareTo
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    MJIcompare
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_MJIcompare
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     java_lang_String
 * Method:    regionMatches
 * Signature: (ILjava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_regionMatches__ILjava_lang_String_2II
  (JNIEnv *, jobject, jint, jstring, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    regionMatches
 * Signature: (ZILjava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_regionMatches__ZILjava_lang_String_2II
  (JNIEnv *, jobject, jboolean, jint, jstring, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    startsWith
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_startsWith
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     java_lang_String
 * Method:    hashCode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_hashCode
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    indexOf
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_indexOf__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    lastIndexOf
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_lastIndexOf__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_lang_String
 * Method:    lastIndexOf
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_lastIndexOf__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    indexOf
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_indexOf__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    indexOf
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_indexOf__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     java_lang_String
 * Method:    lastIndexOf
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_java_lang_String_lastIndexOf__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     java_lang_String
 * Method:    substring
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_substring__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     java_lang_String
 * Method:    substring
 * Signature: (II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_substring__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     java_lang_String
 * Method:    concat
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_concat
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    replace
 * Signature: (CC)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_replace
  (JNIEnv *, jobject, jchar, jchar);

/*
 * Class:     java_lang_String
 * Method:    matches
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_lang_String_matches
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    replaceFirst
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_replaceFirst
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     java_lang_String
 * Method:    replaceAll
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_replaceAll
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     java_lang_String
 * Method:    split
 * Signature: (Ljava/lang/String;I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_String_split__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     java_lang_String
 * Method:    split
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_java_lang_String_split__Ljava_lang_String_2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_lang_String
 * Method:    toLowerCase
 * Signature: (Ljava/util/Locale;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_toLowerCase__Ljava_util_Locale_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     java_lang_String
 * Method:    toLowerCase
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_toLowerCase__
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    toUpperCase
 * Signature: (Ljava/util/Locale;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_toUpperCase__Ljava_util_Locale_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     java_lang_String
 * Method:    toUpperCase
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_toUpperCase__
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    trim
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_trim
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    toCharArray
 * Signature: ()[C
 */
JNIEXPORT jcharArray JNICALL Java_java_lang_String_toCharArray
  (JNIEnv *, jobject);

/*
 * Class:     java_lang_String
 * Method:    format
 * Signature: (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_format__Ljava_lang_String_2_3Ljava_lang_Object_2
  (JNIEnv *, jclass, jstring, jobjectArray);

/*
 * Class:     java_lang_String
 * Method:    format
 * Signature: (Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_format__Ljava_util_Locale_2Ljava_lang_String_2_3Ljava_lang_Object_2
  (JNIEnv *, jclass, jobject, jstring, jobjectArray);

/*
 * Class:     java_lang_String
 * Method:    valueOf
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_valueOf__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     java_lang_String
 * Method:    valueOf
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_valueOf__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     java_lang_String
 * Method:    valueOf
 * Signature: (F)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_valueOf__F
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     java_lang_String
 * Method:    valueOf
 * Signature: (D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_valueOf__D
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     java_lang_String
 * Method:    intern
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_String_intern
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
