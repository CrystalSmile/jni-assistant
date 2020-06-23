# jni-assistant

Windows下
1、确认安装jdk，并配置好环境变量
2、windows下执行genc.bat。 
	其中：javah -classpath java\src\main\java -jni -o cxx/jni_test.h com.smile.crystal.JNITest
	-classpath 从中加载类的路径
	-o 输出文件  和-d只能存在一个
	-d 输出目录
3、Visual Studio新建项目，动态链接库Dll
4、项目头文件添加，jni_test.h
5、项目右键 -->> 属性 -->> 选择x86或者x64解决方案平台 -->> VC++目录 -->> 包含目录
	依次添加：D:\Java\jdk1.8.0_231\include\win32
		  D:\Java\jdk1.8.0_231\include

6、添加jni_test.cpp 并实现对应接口
7、执行java代码可用。
   如执行jar包：java -jar jni-assistant-1.0-SNAPSHOT.jar  拷贝对应cxx.dll到jar包同级目录下
   如ide调试，比如idea，需项目右键 -->> Open Module Settings -->> Modules -->> Dependencies -->> 添加Library -->> New Library -->> 选择Java(dll生成路径) -->> Native Library Location
