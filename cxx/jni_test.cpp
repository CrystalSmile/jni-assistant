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

JNIEXPORT void JNICALL Java_com_smile_crystal_JNITest_testObject1
(JNIEnv * env, jobject obj, jobject tempStruct, jstring tempString, jobject tempArray)
{
	{
		jclass jcls = env->GetObjectClass(tempStruct);
		
		jfieldID jfida = env->GetFieldID(jcls, "a", "I");
		jint a = env->GetIntField(tempStruct, jfida);
		jfieldID jfidb = env->GetFieldID(jcls, "b", "D");
		jdouble b = env->GetIntField(tempStruct, jfidb);

		jclass cls2 = env->FindClass("com/smile/crystal/TestStruct");
		jfieldID jfidc = env->GetFieldID(cls2, "c", "Ljava/lang/String;");
		jstring c = (jstring)env->GetObjectField(tempStruct, jfidc);
		const char *strc = env->GetStringUTFChars(c, 0);

		std::cout << "Java_com_smile_crystal_JNITest_testObject1 a " << jcls << " " << jfida << " " << a << std::endl;
		std::cout << "Java_com_smile_crystal_JNITest_testObject1 b " << jcls << " " << jfidb << " " << b << std::endl;
		std::cout << "Java_com_smile_crystal_JNITest_testObject1 c " << jcls << " " << jfidc << " " << strc << std::endl;


		const char *strtmp = env->GetStringUTFChars(tempString, 0);
		std::cout << "Java_com_smile_crystal_JNITest_testObject1 tempString " << strtmp << std::endl;
	}
	
}

JNIEXPORT jobject JNICALL Java_com_smile_crystal_JNITest_testReturn
(JNIEnv * env, jobject)
{
	jclass cls = env->FindClass("com/smile/crystal/TestStruct");
	jmethodID jmethod = env->GetMethodID(cls, "<init>", "()V");
	jobject aObj = env->NewObject(cls, jmethod);

	{
		jmethodID jmethod = env->GetMethodID(cls, "setA", "(I)V");
		env->CallVoidMethod(aObj, jmethod, 88);
	}
	{
		jmethodID jmethod = env->GetMethodID(cls, "setC", "(Ljava/lang/String;)V");
		jstring    encoding = env->NewStringUTF("UTF-8");
		env->CallVoidMethod(aObj, jmethod, env->NewStringUTF("fa´ó·¿¼ä"));
	}
	return aObj;
}