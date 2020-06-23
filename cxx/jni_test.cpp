#include "jni_test.h"
#include <iostream>
#include <cstdio>


JNIEXPORT void JNICALL Java_com_smile_crystal_JNITest_testPrint
(JNIEnv*, jobject)
{
	printf("from cxx Hello! \n");
}

JNIEXPORT jint JNICALL Java_com_smile_crystal_JNITest_testAdd
(JNIEnv*, jobject, jint a, jint b)
{
	return a + b;
}

