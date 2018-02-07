/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_qihoo_zeppelin_Zeppelin */

#ifndef _Included_net_qihoo_zeppelin_Zeppelin
#define _Included_net_qihoo_zeppelin_Zeppelin
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    createZeppelin
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_qihoo_zeppelin_Zeppelin_createZeppelin
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    removeZeppelin
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_qihoo_zeppelin_Zeppelin_removeZeppelin
  (JNIEnv *, jobject);

/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    set
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_qihoo_zeppelin_Zeppelin_set
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    get
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_qihoo_zeppelin_Zeppelin_get
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    mget
 * Signature: ([Ljava/lang/String;)Ljava/util/TreeMap;
 */
JNIEXPORT jobject JNICALL Java_net_qihoo_zeppelin_Zeppelin_mget
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     net_qihoo_zeppelin_Zeppelin
 * Method:    delete
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_net_qihoo_zeppelin_Zeppelin_delete
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
