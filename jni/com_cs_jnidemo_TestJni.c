#include "com_cs_jnidemo_TestJni.h"
//#define LOG_TAG "Android-T"
//#undef LOG
//#include <android/log.h>
//#define LOGD(a) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,a)
//#define LOGD2(a,b) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,a,b)
// #define DBUG
#include <sys/ioctl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
/*
 * Class: com_cs_jnidemo_TestJni
 * Method: getadd
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_cs_jnidemo_TestJni_getadd
  (JNIEnv * env, jobject obj, jint count)
  {
       return count+8;

  }
