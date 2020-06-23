#include "jni_test.h"
#include <iostream>
#include <cstdio>


JNIEXPORT void JNICALL Java_com_smile_crystal_JNITest_testPrint
(JNIEnv*, jobject)
{
	printf("from cxx Hello! \n");
}

/*
 * Class:     com_smile_crystal_JNITest
 * Method:    testAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_smile_crystal_JNITest_testAdd
(JNIEnv*, jobject, jint a, jint b)
{
	return a + b;
}